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
    voba_value_t get_class_efdab6 /* get_class */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t str_efdba6 /* str */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t print_efdca6 /* print */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t len_efdd96 /* len */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t range_efdbd6 /* range */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _2B_efdf96 /* + */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3E_efe086 /* > */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_efe176 /* < */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3E_3D_efe2f6 /* >= */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_3D_efe3e6 /* <= */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3D_3D_efe4d6 /* == */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _25_efe5c6 /* % */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_3C_efe6b6 /* << */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t array_efe7a6 /* array */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t eq_efe896 /* eq */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t i32_mod_efe986 /* i32_mod */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t eq_i32_mod_0_efeb06 /* eq_i32_mod_0 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i8_efebf6 /* cls_i8 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i16_efece6 /* cls_i16 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i32_efedd6 /* cls_i32 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_u8_efeec6 /* cls_u8 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_u16_efefb6 /* cls_u16 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_u32_eff0a6 /* cls_u32 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_float_eff196 /* cls_float */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_str_eff286 /* cls_str */ __attribute__((unused)) = VOBA_UNDEF;
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
    gf_match = voba_module_var("__lang__","__lang__",voba_make_string(voba_str_from_cstr("__match__")));
}
{
    gf_iter = voba_module_var("__lang__","__lang__",voba_make_string(voba_str_from_cstr("__iter__")));
}
{
    get_class_efdab6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("get_class")));
}
{
    str_efdba6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("str")));
}
{
    print_efdca6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("print")));
}
{
    len_efdd96 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("len")));
}
{
    range_efdbd6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("range")));
}
{
    _2B_efdf96 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("+")));
}
{
    _3E_efe086 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr(">")));
}
{
    _3C_efe176 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("<")));
}
{
    _3E_3D_efe2f6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr(">=")));
}
{
    _3C_3D_efe3e6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("<=")));
}
{
    _3D_3D_efe4d6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("==")));
}
{
    _25_efe5c6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("%")));
}
{
    _3C_3C_efe6b6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("<<")));
}
{
    array_efe7a6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("array")));
}
{
    eq_efe896 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("eq")));
}
{
    i32_mod_efe986 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("i32_mod")));
}
{
    eq_i32_mod_0_efeb06 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("eq_i32_mod_0")));
}
{
    cls_i8_efebf6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_i8")));
}
{
    cls_i16_efece6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_i16")));
}
{
    cls_i32_efedd6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_i32")));
}
{
    cls_u8_efeec6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_u8")));
}
{
    cls_u16_efefb6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_u16")));
}
{
    cls_u32_eff0a6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_u32")));
}
{
    cls_float_eff196 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_float")));
}
{
    cls_str_eff286 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_str")));
}
    voba_value_t apply_ret_2 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
    voba_value_t apply_args_3 [] = { 2 /* prepare arguments for apply */
         ,voba_make_i32(1)/*it*/ /* argument 1 */
         ,voba_make_i32(1) /* argument 2 */
    };
    apply_ret_2 = voba_apply(voba_symbol_value(_2B_efdf96 /* + */),voba_make_tuple(apply_args_3));/* return value for apply */
    voba_value_t apply_ret_4 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
    voba_value_t apply_args_5 [] = { 2 /* prepare arguments for apply */
         ,apply_ret_2/*it*/ /* argument 1 */
         ,voba_make_i32(2) /* argument 2 */
    };
    apply_ret_4 = voba_apply(voba_symbol_value(_2B_efdf96 /* + */),voba_make_tuple(apply_args_5));/* return value for apply */
    voba_value_t apply_ret_0 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
    voba_value_t apply_args_1 [] = { 2 /* prepare arguments for apply */
         ,apply_ret_2 /* argument 1 */
         ,apply_ret_4 /* argument 2 */
    };
    apply_ret_0 = voba_apply(voba_symbol_value(print_efdca6 /* print */),voba_make_tuple(apply_args_1));/* return value for apply */
    /*let env*/
    voba_value_t a_efacc6 /* a */ __attribute__((unused)) = VOBA_UNDEF;

    /*decl let return value*/
    voba_value_t let_ret_6 __attribute__((unused)) = VOBA_UNDEF;
    /*let body*/
    voba_value_t a_7 __attribute__((unused)) = VOBA_UNDEF;
        a_7 = voba_make_i32(2)/*it*/;/* value for set var*/
        a_efacc6 = a_7; /* set a */
        voba_value_t apply_ret_8 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
        voba_value_t apply_args_9 [] = { 2 /* prepare arguments for apply */
             ,a_7/*it*/ /* argument 1 */
             ,voba_make_i32(2) /* argument 2 */
        };
        apply_ret_8 = voba_apply(voba_symbol_value(_2B_efdf96 /* + */),voba_make_tuple(apply_args_9));/* return value for apply */
        voba_value_t apply_ret_10 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
        voba_value_t apply_args_11 [] = { 2 /* prepare arguments for apply */
             ,apply_ret_8/*it*/ /* argument 1 */
             ,voba_make_i32(19) /* argument 2 */
        };
        apply_ret_10 = voba_apply(voba_symbol_value(_2B_efdf96 /* + */),voba_make_tuple(apply_args_11));/* return value for apply */

    let_ret_6 = apply_ret_10; /* set letreturn value*/
    voba_value_t apply_ret_12 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
    voba_value_t apply_args_13 [] = { 2 /* prepare arguments for apply */
         ,let_ret_6/*it*/ /* argument 1 */
         ,voba_make_string(voba_str_from_cstr("good")) /* argument 2 */
    };
    apply_ret_12 = voba_apply(voba_symbol_value(print_efdca6 /* print */),voba_make_tuple(apply_args_13));/* return value for apply */
}

