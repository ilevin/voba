#include <stdint.h>
#include <assert.h>
#define EXEC_ONCE_TU_NAME "tests/it.voba built at 2015-3-25 5:5:31."
#define EXEC_ONCE_DEPENDS {"voba.module"};
#include <voba/value.h>
#include <voba/core/builtin.h> // import builtin by default
#include <exec_once.h>
#include <voba/module.h>
#define voba_match_eq voba_eql
static voba_value_t gf_match __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t get_class_126a786 /* get_class */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t str_126a876 /* str */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t print_126a976 /* print */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t len_126aa66 /* len */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t range_126a8a6 /* range */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _2B_126ac66 /* + */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3E_126ad56 /* > */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_126ae46 /* < */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3E_3D_126afc6 /* >= */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_3D_126b0b6 /* <= */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3D_3D_126b1a6 /* == */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _25_126b296 /* % */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_3C_126b386 /* << */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t array_126b476 /* array */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t eq_126b566 /* eq */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t i32_mod_126b656 /* i32_mod */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t eq_i32_mod_0_126b7d6 /* eq_i32_mod_0 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i8_126b8c6 /* cls_i8 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i16_126b9b6 /* cls_i16 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i32_126baa6 /* cls_i32 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_u8_126bb96 /* cls_u8 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_u16_126bc86 /* cls_u16 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_u32_126bd76 /* cls_u32 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_float_126be66 /* cls_float */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_str_126bf56 /* cls_str */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t array_2Diter_126c046 /* array-iter */ __attribute__((unused)) = VOBA_UNDEF;
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
         "array-iter",
         NULL
    };
    //fprintf(stderr,"loading %s(%s)\n",name,id);
    static voba_value_t                                    
        symbols2[sizeof(symbols)/sizeof(const char*)] = {           
        sizeof(symbols)/sizeof(const char*) - 1, VOBA_NIL,          
    };                                                              
    for(size_t i = 0 ; symbols[i]!=NULL; ++i){                      
        symbols2[i+1] =                                             
            voba_make_string(                                       
                    voba_str_from_cstr(symbols[i]));                
    }                                                               
    voba_import_module(name,id,voba_make_tuple(symbols2));          
}
{
    get_class_126a786 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("get_class")));
}
{
    str_126a876 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("str")));
}
{
    print_126a976 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("print")));
}
{
    len_126aa66 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("len")));
}
{
    range_126a8a6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("range")));
}
{
    _2B_126ac66 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("+")));
}
{
    _3E_126ad56 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr(">")));
}
{
    _3C_126ae46 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("<")));
}
{
    _3E_3D_126afc6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr(">=")));
}
{
    _3C_3D_126b0b6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("<=")));
}
{
    _3D_3D_126b1a6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("==")));
}
{
    _25_126b296 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("%")));
}
{
    _3C_3C_126b386 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("<<")));
}
{
    array_126b476 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("array")));
}
{
    eq_126b566 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("eq")));
}
{
    i32_mod_126b656 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("i32_mod")));
}
{
    eq_i32_mod_0_126b7d6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("eq_i32_mod_0")));
}
{
    cls_i8_126b8c6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_i8")));
}
{
    cls_i16_126b9b6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_i16")));
}
{
    cls_i32_126baa6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_i32")));
}
{
    cls_u8_126bb96 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_u8")));
}
{
    cls_u16_126bc86 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_u16")));
}
{
    cls_u32_126bd76 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_u32")));
}
{
    cls_float_126be66 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_float")));
}
{
    cls_str_126bf56 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_str")));
}
{
    array_2Diter_126c046 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("array-iter")));
}
    voba_value_t apply_ret_2 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
    voba_value_t apply_args_3 [] = { 2 /* prepare arguments for apply */
         ,voba_make_i32(1)/*it*/ /* argument 1 */
         ,voba_make_i32(1) /* argument 2 */
    };
    apply_ret_2 = voba_apply(voba_symbol_value(_2B_126ac66 /* + */),voba_make_tuple(apply_args_3));/* return value for apply */
    voba_value_t apply_ret_4 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
    voba_value_t apply_args_5 [] = { 2 /* prepare arguments for apply */
         ,apply_ret_2/*it*/ /* argument 1 */
         ,voba_make_i32(2) /* argument 2 */
    };
    apply_ret_4 = voba_apply(voba_symbol_value(_2B_126ac66 /* + */),voba_make_tuple(apply_args_5));/* return value for apply */
    voba_value_t apply_ret_0 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
    voba_value_t apply_args_1 [] = { 2 /* prepare arguments for apply */
         ,apply_ret_2 /* argument 1 */
         ,apply_ret_4 /* argument 2 */
    };
    apply_ret_0 = voba_apply(voba_symbol_value(print_126a976 /* print */),voba_make_tuple(apply_args_1));/* return value for apply */
    /*let env*/
    voba_value_t a_1267966 /* a */ __attribute__((unused)) = VOBA_UNDEF;

    /*decl let return value*/
    voba_value_t let_ret_6 __attribute__((unused)) = VOBA_UNDEF;
    /*let body*/
    voba_value_t a_7 __attribute__((unused)) = VOBA_UNDEF;
        a_7 = voba_make_i32(2)/*it*/;/* value for set var*/
        a_1267966 = a_7; /* set a */
        voba_value_t apply_ret_8 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
        voba_value_t apply_args_9 [] = { 2 /* prepare arguments for apply */
             ,a_7/*it*/ /* argument 1 */
             ,voba_make_i32(2) /* argument 2 */
        };
        apply_ret_8 = voba_apply(voba_symbol_value(_2B_126ac66 /* + */),voba_make_tuple(apply_args_9));/* return value for apply */
        voba_value_t apply_ret_10 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
        voba_value_t apply_args_11 [] = { 2 /* prepare arguments for apply */
             ,apply_ret_8/*it*/ /* argument 1 */
             ,voba_make_i32(19) /* argument 2 */
        };
        apply_ret_10 = voba_apply(voba_symbol_value(_2B_126ac66 /* + */),voba_make_tuple(apply_args_11));/* return value for apply */

    let_ret_6 = apply_ret_10; /* set letreturn value*/
    voba_value_t apply_ret_12 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
    voba_value_t apply_args_13 [] = { 2 /* prepare arguments for apply */
         ,let_ret_6/*it*/ /* argument 1 */
         ,voba_make_string(voba_str_from_cstr("good")) /* argument 2 */
    };
    apply_ret_12 = voba_apply(voba_symbol_value(print_126a976 /* print */),voba_make_tuple(apply_args_13));/* return value for apply */
}

