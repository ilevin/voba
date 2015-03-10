#!/bin/bash
MYPWD=$(dirname $0)
source ../setenv.sh
set -e
export CC=${CC:-gcc}
function process()
{
    while read src_voba src_c ; do
        process_it $src_voba $src_c
    done
}
function process_it()
{
    src_voba=$1;
    src_c=$2;
    cat <<EOF > $MYPWD/test_constant.c
#define EXEC_ONCE_TU_NAME "test_constant"
#define EXEC_ONCE_DEPENDS {"voba.module"}
#include <voba/value.h>
#include <voba/core/builtin.h>
#include "constant.h"
EXEC_ONCE_PROGN{
    voba_value_t value = voba_symbol_value(s_x_value);
    voba_value_t expected_value = $src_c
        ;        
    int ok = voba_eq(value,expected_value);
    printf("$src_voba == $src_c %s.\n", ok?"pass":"fail");
}
voba_value_t voba_init(voba_value_t this_module)
{
    return VOBA_NIL;
}

EOF

    $CC -ggdb -shared -Wl,-soname,libtest_constant.so  -o $MYPWD/libtest_constant.so -fPIC $CFLAGS $MYPWD/test_constant.c

    
    cat <<EOF > $MYPWD/constant.voba
(import ./constant)
(def x_value $src_voba)
EOF
    
    if [ -f $MYPWD/constant.o ] ;then
       rm $MYPWD/constant.o;
    fi
    if [ -f $MYPWD/libconstant.so ]; then
        rm $MYPWD/libconstant.so
    fi;
    make $MYPWD/libconstant.so
    ../voba_compiler/voba $MYPWD/libtest_constant.so
    
}
cat <<EOF | process
1	voba_make_i32(1)
2	voba_make_i32(2)
true	VOBA_TRUE
false	VOBA_FALSE
nil	VOBA_NIL
EOF


