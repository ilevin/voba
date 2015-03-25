#define EXEC_ONCE_TU_NAME "test_constant"
#define EXEC_ONCE_DEPENDS {"voba.module"}
#include <voba/value.h>
#include <voba/core/builtin.h>
#include "constant.h"
EXEC_ONCE_PROGN{
    voba_value_t value = voba_symbol_value(s_x_value);
    voba_value_t expected_value = VOBA_NIL
        ;        
    int ok = voba_eq(value,expected_value);
    printf("nil(0x%lx) == VOBA_NIL(0x%lx) %s.\n", value,expected_value,ok?"pass":"fail");
}
voba_value_t voba_init(voba_value_t this_module)
{
    return VOBA_NIL;
}

