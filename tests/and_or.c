#include <stdint.h>
#include <assert.h>
#define EXEC_ONCE_TU_NAME "tests/and_or.voba built at 2015-3-25 5:5:30."
#define EXEC_ONCE_DEPENDS {"voba.module"};
#include <voba/value.h>
#include <voba/core/builtin.h> // import builtin by default
#include <exec_once.h>
#include <voba/module.h>
#define voba_match_eq voba_eql
static voba_value_t gf_match __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t get_class_7d3d46 /* get_class */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t str_7d3e36 /* str */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t print_7d3f36 /* print */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t len_7d4026 /* len */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t range_7d3e66 /* range */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _2B_7d4226 /* + */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3E_7d4316 /* > */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_7d4406 /* < */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3E_3D_7d4586 /* >= */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_3D_7d4676 /* <= */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3D_3D_7d4766 /* == */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _25_7d4856 /* % */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_3C_7d4946 /* << */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t array_7d4a36 /* array */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t eq_7d4b26 /* eq */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t i32_mod_7d4c16 /* i32_mod */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t eq_i32_mod_0_7d4d96 /* eq_i32_mod_0 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i8_7d4e86 /* cls_i8 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i16_7d4f76 /* cls_i16 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i32_7d5066 /* cls_i32 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_u8_7d5156 /* cls_u8 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_u16_7d5246 /* cls_u16 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_u32_7d5336 /* cls_u32 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_float_7d5426 /* cls_float */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_str_7d5516 /* cls_str */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t array_2Diter_7d5606 /* array-iter */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t v_7d1266 /* v */ __attribute__((unused)) = VOBA_UNDEF;
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
    get_class_7d3d46 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("get_class")));
}
{
    str_7d3e36 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("str")));
}
{
    print_7d3f36 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("print")));
}
{
    len_7d4026 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("len")));
}
{
    range_7d3e66 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("range")));
}
{
    _2B_7d4226 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("+")));
}
{
    _3E_7d4316 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr(">")));
}
{
    _3C_7d4406 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("<")));
}
{
    _3E_3D_7d4586 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr(">=")));
}
{
    _3C_3D_7d4676 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("<=")));
}
{
    _3D_3D_7d4766 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("==")));
}
{
    _25_7d4856 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("%")));
}
{
    _3C_3C_7d4946 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("<<")));
}
{
    array_7d4a36 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("array")));
}
{
    eq_7d4b26 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("eq")));
}
{
    i32_mod_7d4c16 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("i32_mod")));
}
{
    eq_i32_mod_0_7d4d96 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("eq_i32_mod_0")));
}
{
    cls_i8_7d4e86 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_i8")));
}
{
    cls_i16_7d4f76 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_i16")));
}
{
    cls_i32_7d5066 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_i32")));
}
{
    cls_u8_7d5156 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_u8")));
}
{
    cls_u16_7d5246 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_u16")));
}
{
    cls_u32_7d5336 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_u32")));
}
{
    cls_float_7d5426 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_float")));
}
{
    cls_str_7d5516 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_str")));
}
{
    array_2Diter_7d5606 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("array-iter")));
}
    voba_value_t v_0 __attribute__((unused)) = VOBA_UNDEF;
    v_0 = VOBA_FALSE;/* value for set var*/
    v_7d1266 = v_0; /* set v */
       voba_value_t or_ret_val_1 = VOBA_UNDEF;/* return value for `or' statement */
    or_ret_val_1 = v_7d1266 /* v */; /*set return value for `or'*/
    if(!voba_eq(or_ret_val_1,VOBA_FALSE)){/* if any Ok, jump to end*/
        goto or_end_2; /* skip following exprs in `or' */
    }
    voba_value_t apply_ret_3 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
    voba_value_t apply_args_4 [] = { 1 /* prepare arguments for apply */
         ,voba_make_i32(1)/*it*/ /* argument 1 */
    };
    apply_ret_3 = voba_apply(voba_symbol_value(print_7d3f36 /* print */),voba_make_tuple(apply_args_4));/* return value for apply */
    or_ret_val_1 = apply_ret_3; /*set return value for `or'*/
    if(!voba_eq(or_ret_val_1,VOBA_FALSE)){/* if any Ok, jump to end*/
        goto or_end_2; /* skip following exprs in `or' */
    }
    or_end_2: if(0) goto or_end_2; /* `or` statement end here, suppress warning message */
}

