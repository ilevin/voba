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
    voba_value_t get_class_167bdb6 /* get_class */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t str_167bea6 /* str */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t print_167bfa6 /* print */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t len_167c096 /* len */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t range_167bed6 /* range */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _2B_167c296 /* + */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3E_167c386 /* > */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_167c476 /* < */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3E_3D_167c5f6 /* >= */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_3D_167c6e6 /* <= */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3D_3D_167c7d6 /* == */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _25_167c8c6 /* % */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_3C_167c9b6 /* << */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t array_167caa6 /* array */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t eq_167cb96 /* eq */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t i32_mod_167cc86 /* i32_mod */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t eq_i32_mod_0_167ce06 /* eq_i32_mod_0 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i8_167cef6 /* cls_i8 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i16_167cfe6 /* cls_i16 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i32_167d0d6 /* cls_i32 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_u8_167d1c6 /* cls_u8 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_u16_167d2b6 /* cls_u16 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_u32_167d3a6 /* cls_u32 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_float_167d496 /* cls_float */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_str_167d586 /* cls_str */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t v_1679316 /* v */ __attribute__((unused)) = VOBA_UNDEF;
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
    get_class_167bdb6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("get_class")));
}
{
    str_167bea6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("str")));
}
{
    print_167bfa6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("print")));
}
{
    len_167c096 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("len")));
}
{
    range_167bed6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("range")));
}
{
    _2B_167c296 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("+")));
}
{
    _3E_167c386 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr(">")));
}
{
    _3C_167c476 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("<")));
}
{
    _3E_3D_167c5f6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr(">=")));
}
{
    _3C_3D_167c6e6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("<=")));
}
{
    _3D_3D_167c7d6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("==")));
}
{
    _25_167c8c6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("%")));
}
{
    _3C_3C_167c9b6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("<<")));
}
{
    array_167caa6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("array")));
}
{
    eq_167cb96 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("eq")));
}
{
    i32_mod_167cc86 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("i32_mod")));
}
{
    eq_i32_mod_0_167ce06 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("eq_i32_mod_0")));
}
{
    cls_i8_167cef6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_i8")));
}
{
    cls_i16_167cfe6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_i16")));
}
{
    cls_i32_167d0d6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_i32")));
}
{
    cls_u8_167d1c6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_u8")));
}
{
    cls_u16_167d2b6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_u16")));
}
{
    cls_u32_167d3a6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_u32")));
}
{
    cls_float_167d496 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_float")));
}
{
    cls_str_167d586 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_str")));
}
    voba_value_t v_0 __attribute__((unused)) = VOBA_UNDEF;
    v_0 = VOBA_FALSE;/* value for set var*/
    v_1679316 = v_0; /* set v */
       voba_value_t or_ret_val_1 = VOBA_UNDEF;/* return value for `or' statement */
    or_ret_val_1 = v_1679316 /* v */; /*set return value for `or'*/
    if(!voba_eq(or_ret_val_1,VOBA_FALSE)){/* if any Ok, jump to end*/
        goto or_end_2; /* skip following exprs in `or' */
    }
    voba_value_t apply_ret_3 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
    voba_value_t apply_args_4 [] = { 1 /* prepare arguments for apply */
         ,voba_make_i32(1)/*it*/ /* argument 1 */
    };
    apply_ret_3 = voba_apply(voba_symbol_value(print_167bfa6 /* print */),voba_make_tuple(apply_args_4));/* return value for apply */
    or_ret_val_1 = apply_ret_3; /*set return value for `or'*/
    if(!voba_eq(or_ret_val_1,VOBA_FALSE)){/* if any Ok, jump to end*/
        goto or_end_2; /* skip following exprs in `or' */
    }
    or_end_2: if(0) goto or_end_2; /* `or` statement end here, suppress warning message */
}

