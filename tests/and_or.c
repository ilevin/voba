#include <stdint.h>
#include <assert.h>
#define EXEC_ONCE_TU_NAME "TODO ADD "
#define EXEC_ONCE_DEPENDS {"voba.module",NULL};
#include <voba/value.h>
#include <voba/core/builtin.h> // import builtin by default
#include <exec_once.h>
#include <voba/module.h>
#define voba_match_eq voba_eql
static voba_value_t gf_match __attribute__((unused)) = VOBA_UNDEF;
static voba_value_t gf_iter __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t get_class_7c0f66 /* get_class */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t str_7c1056 /* str */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t print_7c1156 /* print */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t len_7c1246 /* len */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t range_7c1086 /* range */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _2B_7c1446 /* + */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3E_7c1536 /* > */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_7c1626 /* < */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3E_3D_7c17a6 /* >= */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_3D_7c1896 /* <= */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3D_3D_7c1986 /* == */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _25_7c1a76 /* % */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_3C_7c1b66 /* << */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t array_7c1c56 /* array */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t eq_7c1d46 /* eq */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t i32_mod_7c1e36 /* i32_mod */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t eq_i32_mod_0_7c1fb6 /* eq_i32_mod_0 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i8_7c20a6 /* cls_i8 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i16_7c2196 /* cls_i16 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i32_7c2286 /* cls_i32 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_u8_7c2376 /* cls_u8 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_u16_7c2466 /* cls_u16 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_u32_7c2556 /* cls_u32 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_float_7c2646 /* cls_float */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_str_7c2736 /* cls_str */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t v_7be4c6 /* v */ __attribute__((unused)) = VOBA_UNDEF;
#ifndef VOBA_MODULE_DIRTY_HACK
voba_value_t voba_init(voba_value_t this_module)
#else
int main(int argc, char *argv[])
#endif
{
    exec_once_init();
    return VOBA_NIL;
}
EXEC_ONCE_PROGN {
{
    const char * name = "builtin";
    const char * id = "28b4792c-366b-11e4-aa00-08002796644a";
    const char * symbols[] = {
         "get_class",
         "str",
         "print",
         "len",
         "range",
         "+",
         ">",
         "<",
         ">=",
         "<=",
         "==",
         "%",
         "<<",
         "array",
         "eq",
         "i32_mod",
         "eq_i32_mod_0",
         "cls_i8",
         "cls_i16",
         "cls_i32",
         "cls_u8",
         "cls_u16",
         "cls_u32",
         "cls_float",
         "cls_str",
         NULL
    };
    fprintf(stderr,"loading %s(%s)\n",name,id);
    voba_import_module(name,id,symbols);
}
{
    gf_match = voba_module_var("__lang__","__lang__","__match__");
}
{
    gf_iter = voba_module_var("__lang__","__lang__","__iter__");
}
{
    get_class_7c0f66 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","get_class");
}
{
    str_7c1056 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","str");
}
{
    print_7c1156 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","print");
}
{
    len_7c1246 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","len");
}
{
    range_7c1086 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","range");
}
{
    _2B_7c1446 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","+");
}
{
    _3E_7c1536 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",">");
}
{
    _3C_7c1626 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","<");
}
{
    _3E_3D_7c17a6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",">=");
}
{
    _3C_3D_7c1896 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","<=");
}
{
    _3D_3D_7c1986 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","==");
}
{
    _25_7c1a76 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","%");
}
{
    _3C_3C_7c1b66 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","<<");
}
{
    array_7c1c56 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","array");
}
{
    eq_7c1d46 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","eq");
}
{
    i32_mod_7c1e36 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","i32_mod");
}
{
    eq_i32_mod_0_7c1fb6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","eq_i32_mod_0");
}
{
    cls_i8_7c20a6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","cls_i8");
}
{
    cls_i16_7c2196 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","cls_i16");
}
{
    cls_i32_7c2286 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","cls_i32");
}
{
    cls_u8_7c2376 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","cls_u8");
}
{
    cls_u16_7c2466 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","cls_u16");
}
{
    cls_u32_7c2556 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","cls_u32");
}
{
    cls_float_7c2646 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","cls_float");
}
{
    cls_str_7c2736 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","cls_str");
}
    voba_value_t v_0 __attribute__((unused)) = VOBA_UNDEF;
    v_0 = VOBA_FALSE;/* value for set var*/
    v_7be4c6 = v_0; /* set v */
       voba_value_t or_ret_val_1 = VOBA_UNDEF;/* return value for `or' statement */
    or_ret_val_1 = v_7be4c6 /* v */; /*set return value for `or'*/
    if(!voba_eq(or_ret_val_1,VOBA_FALSE)){/* if any Ok, jump to end*/
        goto or_end_2; /* skip following exprs in `or' */
    }
    voba_value_t apply_ret_3 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
    voba_value_t apply_args_4 [] = { 1 /* prepare arguments for apply */
         ,voba_make_i32(1)/*it*/ /* argument 1 */
    };
    apply_ret_3 = voba_apply(voba_symbol_value(print_7c1156 /* print */),voba_make_tuple(apply_args_4));/* return value for apply */
    or_ret_val_1 = apply_ret_3; /*set return value for `or'*/
    if(!voba_eq(or_ret_val_1,VOBA_FALSE)){/* if any Ok, jump to end*/
        goto or_end_2; /* skip following exprs in `or' */
    }
    or_end_2: if(0) goto or_end_2; /* `or` statement end here, suppress warning message */
}

