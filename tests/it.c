#include <stdint.h>
#include <assert.h>
#define EXEC_ONCE_TU_NAME "TODO ADD "
#define EXEC_ONCE_DEPENDS {"voba.module"};
#include <voba/value.h>
#include <voba/core/builtin.h> // import builtin by default
#include <exec_once.h>
#include <voba/module.h>
#define voba_match_eq voba_eql
static voba_value_t gf_match __attribute__((unused)) = VOBA_UNDEF;
static voba_value_t gf_iter __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t get_class_1afd806 /* get_class */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t str_1afd8f6 /* str */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t print_1afd9f6 /* print */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t len_1afdae6 /* len */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t range_1afd926 /* range */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _2B_1afdce6 /* + */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3E_1afddd6 /* > */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_1afdec6 /* < */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3E_3D_1afe046 /* >= */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_3D_1afe136 /* <= */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3D_3D_1afe226 /* == */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _25_1afe316 /* % */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_3C_1afe406 /* << */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t array_1afe4f6 /* array */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t eq_1afe5e6 /* eq */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t i32_mod_1afe6d6 /* i32_mod */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t eq_i32_mod_0_1afe856 /* eq_i32_mod_0 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i8_1afe946 /* cls_i8 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i16_1afea36 /* cls_i16 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i32_1afeb26 /* cls_i32 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_u8_1afec16 /* cls_u8 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_u16_1afed06 /* cls_u16 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_u32_1afedf6 /* cls_u32 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_float_1afeee6 /* cls_float */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_str_1afefd6 /* cls_str */ __attribute__((unused)) = VOBA_UNDEF;
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
    get_class_1afd806 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("get_class")));
}
{
    str_1afd8f6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("str")));
}
{
    print_1afd9f6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("print")));
}
{
    len_1afdae6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("len")));
}
{
    range_1afd926 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("range")));
}
{
    _2B_1afdce6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("+")));
}
{
    _3E_1afddd6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr(">")));
}
{
    _3C_1afdec6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("<")));
}
{
    _3E_3D_1afe046 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr(">=")));
}
{
    _3C_3D_1afe136 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("<=")));
}
{
    _3D_3D_1afe226 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("==")));
}
{
    _25_1afe316 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("%")));
}
{
    _3C_3C_1afe406 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("<<")));
}
{
    array_1afe4f6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("array")));
}
{
    eq_1afe5e6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("eq")));
}
{
    i32_mod_1afe6d6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("i32_mod")));
}
{
    eq_i32_mod_0_1afe856 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("eq_i32_mod_0")));
}
{
    cls_i8_1afe946 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_i8")));
}
{
    cls_i16_1afea36 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_i16")));
}
{
    cls_i32_1afeb26 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_i32")));
}
{
    cls_u8_1afec16 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_u8")));
}
{
    cls_u16_1afed06 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_u16")));
}
{
    cls_u32_1afedf6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_u32")));
}
{
    cls_float_1afeee6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_float")));
}
{
    cls_str_1afefd6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_str")));
}
    voba_value_t apply_ret_2 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
    voba_value_t apply_args_3 [] = { 2 /* prepare arguments for apply */
         ,voba_make_i32(1)/*it*/ /* argument 1 */
         ,voba_make_i32(1) /* argument 2 */
    };
    apply_ret_2 = voba_apply(voba_symbol_value(_2B_1afdce6 /* + */),voba_make_tuple(apply_args_3));/* return value for apply */
    voba_value_t apply_ret_4 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
    voba_value_t apply_args_5 [] = { 2 /* prepare arguments for apply */
         ,apply_ret_2/*it*/ /* argument 1 */
         ,voba_make_i32(2) /* argument 2 */
    };
    apply_ret_4 = voba_apply(voba_symbol_value(_2B_1afdce6 /* + */),voba_make_tuple(apply_args_5));/* return value for apply */
    voba_value_t apply_ret_0 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
    voba_value_t apply_args_1 [] = { 2 /* prepare arguments for apply */
         ,apply_ret_2 /* argument 1 */
         ,apply_ret_4 /* argument 2 */
    };
    apply_ret_0 = voba_apply(voba_symbol_value(print_1afd9f6 /* print */),voba_make_tuple(apply_args_1));/* return value for apply */
    /*let env*/
    voba_value_t a_1afaa16 /* a */ __attribute__((unused)) = VOBA_UNDEF;

    /*decl let return value*/
    voba_value_t let_ret_6 __attribute__((unused)) = VOBA_UNDEF;
    /*let body*/
    voba_value_t a_7 __attribute__((unused)) = VOBA_UNDEF;
        a_7 = voba_make_i32(2)/*it*/;/* value for set var*/
        a_1afaa16 = a_7; /* set a */
        voba_value_t apply_ret_8 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
        voba_value_t apply_args_9 [] = { 2 /* prepare arguments for apply */
             ,a_7/*it*/ /* argument 1 */
             ,voba_make_i32(2) /* argument 2 */
        };
        apply_ret_8 = voba_apply(voba_symbol_value(_2B_1afdce6 /* + */),voba_make_tuple(apply_args_9));/* return value for apply */
        voba_value_t apply_ret_10 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
        voba_value_t apply_args_11 [] = { 2 /* prepare arguments for apply */
             ,apply_ret_8/*it*/ /* argument 1 */
             ,voba_make_i32(19) /* argument 2 */
        };
        apply_ret_10 = voba_apply(voba_symbol_value(_2B_1afdce6 /* + */),voba_make_tuple(apply_args_11));/* return value for apply */

    let_ret_6 = apply_ret_10; /* set letreturn value*/
    voba_value_t apply_ret_12 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
    voba_value_t apply_args_13 [] = { 2 /* prepare arguments for apply */
         ,let_ret_6/*it*/ /* argument 1 */
         ,voba_make_string(voba_str_from_cstr("good")) /* argument 2 */
    };
    apply_ret_12 = voba_apply(voba_symbol_value(print_1afd9f6 /* print */),voba_make_tuple(apply_args_13));/* return value for apply */
}

