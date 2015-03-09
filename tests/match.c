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
    voba_value_t get_class_189cee6 /* get_class */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t str_189cfd6 /* str */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t print_189d0d6 /* print */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t len_189d1c6 /* len */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t range_189d006 /* range */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _2B_189d3c6 /* + */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3E_189d4b6 /* > */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_189d5a6 /* < */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3E_3D_189d726 /* >= */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_3D_189d816 /* <= */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3D_3D_189d906 /* == */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _25_189d9f6 /* % */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_3C_189dae6 /* << */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t array_189dbd6 /* array */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t eq_189dcc6 /* eq */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t i32_mod_189ddb6 /* i32_mod */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t eq_i32_mod_0_189df36 /* eq_i32_mod_0 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i8_189e026 /* cls_i8 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i16_189e116 /* cls_i16 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i32_189e206 /* cls_i32 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_u8_189e2f6 /* cls_u8 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_u16_189e3e6 /* cls_u16 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_u32_189e4d6 /* cls_u32 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_float_189e5c6 /* cls_float */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_str_189e6b6 /* cls_str */ __attribute__((unused)) = VOBA_UNDEF;
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
    get_class_189cee6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("get_class")));
}
{
    str_189cfd6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("str")));
}
{
    print_189d0d6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("print")));
}
{
    len_189d1c6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("len")));
}
{
    range_189d006 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("range")));
}
{
    _2B_189d3c6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("+")));
}
{
    _3E_189d4b6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr(">")));
}
{
    _3C_189d5a6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("<")));
}
{
    _3E_3D_189d726 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr(">=")));
}
{
    _3C_3D_189d816 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("<=")));
}
{
    _3D_3D_189d906 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("==")));
}
{
    _25_189d9f6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("%")));
}
{
    _3C_3C_189dae6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("<<")));
}
{
    array_189dbd6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("array")));
}
{
    eq_189dcc6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("eq")));
}
{
    i32_mod_189ddb6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("i32_mod")));
}
{
    eq_i32_mod_0_189df36 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("eq_i32_mod_0")));
}
{
    cls_i8_189e026 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_i8")));
}
{
    cls_i16_189e116 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_i16")));
}
{
    cls_i32_189e206 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_i32")));
}
{
    cls_u8_189e2f6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_u8")));
}
{
    cls_u16_189e3e6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_u16")));
}
{
    cls_u32_189e4d6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_u32")));
}
{
    cls_float_189e5c6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_float")));
}
{
    cls_str_189e6b6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_str")));
}
    /* start of a match statement */
    voba_value_t match_ret_2 __attribute__((unused)) = VOBA_UNDEF; /* return value for match statement */
    /* match pattern 1 start*/
    /*empty label*/ {
        voba_value_t v_189a416 /* v */ __attribute__((unused)) = VOBA_UNDEF;
        /* start to match the single variable v_189a416 */
        if(voba_eq(v_189a416,VOBA_UNDEF)){
            v_189a416 = voba_make_i32(1); /* when v_189a416 is unbound, bound it*/
        }else{
             /* when v_189a416 is already bound, try to test whether equal*/
             if(!voba_match_eq(v_189a416,voba_make_i32(1))){
                  goto match_label_success_3;/*if not equal goto the fail lable */
             }
        }
        /* end to match the single variable v_189a416*/
        voba_value_t apply_ret_5 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
        voba_value_t apply_args_6 [] = { 2 /* prepare arguments for apply */
             ,voba_make_i32(1) /* argument 1 */
             ,v_189a416 /* v */ /* argument 2 */
        };
        apply_ret_5 = voba_apply(voba_symbol_value(_3D_3D_189d906 /* == */),voba_make_tuple(apply_args_6));/* return value for apply */
        if(voba_eq(apply_ret_5,VOBA_FALSE)){/* if pattern guard failed */
             goto match_label_success_3; /* goto the pattern failed label */
        }
        
        match_ret_2 = voba_make_string(voba_str_from_cstr("good")); /* match statement return value*/
        goto match_label_success_3; // match goto end

    }
    /* match pattern 1 end*/ 
    match_label_success_3:;
    /* end of a match statement */
    voba_value_t apply_ret_0 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
    voba_value_t apply_args_1 [] = { 1 /* prepare arguments for apply */
         ,match_ret_2 /* argument 1 */
    };
    apply_ret_0 = voba_apply(voba_symbol_value(print_189d0d6 /* print */),voba_make_tuple(apply_args_1));/* return value for apply */
}

