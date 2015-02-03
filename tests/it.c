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
    voba_value_t get_class_1e5a9b6 /* get_class */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t str_1e5aaa6 /* str */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t print_1e5aba6 /* print */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t len_1e5ac96 /* len */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t range_1e5aad6 /* range */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _2B_1e5ae96 /* + */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3E_1e5af86 /* > */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_1e5b076 /* < */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3E_3D_1e5b1f6 /* >= */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_3D_1e5b2e6 /* <= */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3D_3D_1e5b3d6 /* == */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _25_1e5b4c6 /* % */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_3C_1e5b5b6 /* << */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t array_1e5b6a6 /* array */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t eq_1e5b796 /* eq */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t i32_mod_1e5b886 /* i32_mod */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t eq_i32_mod_0_1e5ba06 /* eq_i32_mod_0 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i8_1e5baf6 /* cls_i8 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i16_1e5bbe6 /* cls_i16 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i32_1e5bcd6 /* cls_i32 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_u8_1e5bdc6 /* cls_u8 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_u16_1e5beb6 /* cls_u16 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_u32_1e5bfa6 /* cls_u32 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_float_1e5c096 /* cls_float */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_str_1e5c186 /* cls_str */ __attribute__((unused)) = VOBA_UNDEF;
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
    get_class_1e5a9b6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","get_class");
}
{
    str_1e5aaa6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","str");
}
{
    print_1e5aba6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","print");
}
{
    len_1e5ac96 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","len");
}
{
    range_1e5aad6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","range");
}
{
    _2B_1e5ae96 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","+");
}
{
    _3E_1e5af86 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",">");
}
{
    _3C_1e5b076 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","<");
}
{
    _3E_3D_1e5b1f6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",">=");
}
{
    _3C_3D_1e5b2e6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","<=");
}
{
    _3D_3D_1e5b3d6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","==");
}
{
    _25_1e5b4c6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","%");
}
{
    _3C_3C_1e5b5b6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","<<");
}
{
    array_1e5b6a6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","array");
}
{
    eq_1e5b796 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","eq");
}
{
    i32_mod_1e5b886 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","i32_mod");
}
{
    eq_i32_mod_0_1e5ba06 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","eq_i32_mod_0");
}
{
    cls_i8_1e5baf6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","cls_i8");
}
{
    cls_i16_1e5bbe6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","cls_i16");
}
{
    cls_i32_1e5bcd6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","cls_i32");
}
{
    cls_u8_1e5bdc6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","cls_u8");
}
{
    cls_u16_1e5beb6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","cls_u16");
}
{
    cls_u32_1e5bfa6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","cls_u32");
}
{
    cls_float_1e5c096 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","cls_float");
}
{
    cls_str_1e5c186 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","cls_str");
}
    voba_value_t apply_ret_2 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
    voba_value_t apply_args_3 [] = { 2 /* prepare arguments for apply */
         ,voba_make_i32(1)/*it*/ /* argument 1 */
         ,voba_make_i32(1) /* argument 2 */
    };
    apply_ret_2 = voba_apply(voba_symbol_value(_2B_1e5ae96 /* + */),voba_make_tuple(apply_args_3));/* return value for apply */
    voba_value_t apply_ret_4 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
    voba_value_t apply_args_5 [] = { 2 /* prepare arguments for apply */
         ,apply_ret_2/*it*/ /* argument 1 */
         ,voba_make_i32(2) /* argument 2 */
    };
    apply_ret_4 = voba_apply(voba_symbol_value(_2B_1e5ae96 /* + */),voba_make_tuple(apply_args_5));/* return value for apply */
    voba_value_t apply_ret_0 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
    voba_value_t apply_args_1 [] = { 2 /* prepare arguments for apply */
         ,apply_ret_2 /* argument 1 */
         ,apply_ret_4 /* argument 2 */
    };
    apply_ret_0 = voba_apply(voba_symbol_value(print_1e5aba6 /* print */),voba_make_tuple(apply_args_1));/* return value for apply */
    /*let env*/
    voba_value_t a_1e57bc6 /* a */ __attribute__((unused)) = VOBA_UNDEF;

    /*decl let return value*/
    voba_value_t let_ret_6 __attribute__((unused)) = VOBA_UNDEF;
    /*let body*/
    voba_value_t a_7 __attribute__((unused)) = VOBA_UNDEF;
        a_7 = voba_make_i32(2)/*it*/;/* value for set var*/
        a_1e57bc6 = a_7; /* set a */
        voba_value_t apply_ret_8 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
        voba_value_t apply_args_9 [] = { 2 /* prepare arguments for apply */
             ,a_7/*it*/ /* argument 1 */
             ,voba_make_i32(2) /* argument 2 */
        };
        apply_ret_8 = voba_apply(voba_symbol_value(_2B_1e5ae96 /* + */),voba_make_tuple(apply_args_9));/* return value for apply */
        voba_value_t apply_ret_10 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
        voba_value_t apply_args_11 [] = { 2 /* prepare arguments for apply */
             ,apply_ret_8/*it*/ /* argument 1 */
             ,voba_make_i32(19) /* argument 2 */
        };
        apply_ret_10 = voba_apply(voba_symbol_value(_2B_1e5ae96 /* + */),voba_make_tuple(apply_args_11));/* return value for apply */

    let_ret_6 = apply_ret_10; /* set letreturn value*/
    voba_value_t apply_ret_12 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
    voba_value_t apply_args_13 [] = { 2 /* prepare arguments for apply */
         ,let_ret_6/*it*/ /* argument 1 */
         ,voba_make_string(voba_str_from_cstr("good")) /* argument 2 */
    };
    apply_ret_12 = voba_apply(voba_symbol_value(print_1e5aba6 /* print */),voba_make_tuple(apply_args_13));/* return value for apply */
}

