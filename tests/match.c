#include <stdint.h>
#include <assert.h>
#define EXEC_ONCE_TU_NAME "tests/match.voba built at 2015-3-25 5:5:31."
#define EXEC_ONCE_DEPENDS {"voba.module"};
#include <voba/value.h>
#include <voba/core/builtin.h> // import builtin by default
#include <exec_once.h>
#include <voba/module.h>
#define voba_match_eq voba_eql
static voba_value_t gf_match __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t get_class_8d9e66 /* get_class */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t str_8d9f56 /* str */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t print_8da056 /* print */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t len_8da146 /* len */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t range_8d9f86 /* range */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _2B_8da346 /* + */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3E_8da436 /* > */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_8da526 /* < */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3E_3D_8da6a6 /* >= */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_3D_8da796 /* <= */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3D_3D_8da886 /* == */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _25_8da976 /* % */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_3C_8daa66 /* << */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t array_8dab56 /* array */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t eq_8dac46 /* eq */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t i32_mod_8dad36 /* i32_mod */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t eq_i32_mod_0_8daeb6 /* eq_i32_mod_0 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i8_8dafa6 /* cls_i8 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i16_8db096 /* cls_i16 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i32_8db186 /* cls_i32 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_u8_8db276 /* cls_u8 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_u16_8db366 /* cls_u16 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_u32_8db456 /* cls_u32 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_float_8db546 /* cls_float */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_str_8db636 /* cls_str */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t array_2Diter_8db726 /* array-iter */ __attribute__((unused)) = VOBA_UNDEF;
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
    get_class_8d9e66 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("get_class")));
}
{
    str_8d9f56 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("str")));
}
{
    print_8da056 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("print")));
}
{
    len_8da146 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("len")));
}
{
    range_8d9f86 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("range")));
}
{
    _2B_8da346 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("+")));
}
{
    _3E_8da436 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr(">")));
}
{
    _3C_8da526 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("<")));
}
{
    _3E_3D_8da6a6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr(">=")));
}
{
    _3C_3D_8da796 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("<=")));
}
{
    _3D_3D_8da886 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("==")));
}
{
    _25_8da976 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("%")));
}
{
    _3C_3C_8daa66 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("<<")));
}
{
    array_8dab56 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("array")));
}
{
    eq_8dac46 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("eq")));
}
{
    i32_mod_8dad36 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("i32_mod")));
}
{
    eq_i32_mod_0_8daeb6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("eq_i32_mod_0")));
}
{
    cls_i8_8dafa6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_i8")));
}
{
    cls_i16_8db096 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_i16")));
}
{
    cls_i32_8db186 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_i32")));
}
{
    cls_u8_8db276 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_u8")));
}
{
    cls_u16_8db366 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_u16")));
}
{
    cls_u32_8db456 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_u32")));
}
{
    cls_float_8db546 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_float")));
}
{
    cls_str_8db636 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_str")));
}
{
    array_2Diter_8db726 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("array-iter")));
}
    /* start of a match statement */
    voba_value_t match_ret_2 __attribute__((unused)) = VOBA_UNDEF; /* return value for match statement */
    /* match pattern 1 start*/
    /*empty label*/ {
        voba_value_t v_8d7326 /* v */ __attribute__((unused)) = VOBA_UNDEF;
        /* start to match the single variable v_8d7326 */
        if(voba_eq(v_8d7326,VOBA_UNDEF)){
            v_8d7326 = voba_make_i32(1); /* when v_8d7326 is unbound, bound it*/
        }else{
             /* when v_8d7326 is already bound, try to test whether equal*/
             if(!voba_match_eq(v_8d7326,voba_make_i32(1))){
                  goto match_label_success_3;/*if not equal goto the fail lable */
             }
        }
        /* end to match the single variable v_8d7326*/
        voba_value_t apply_ret_5 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
        voba_value_t apply_args_6 [] = { 2 /* prepare arguments for apply */
             ,voba_make_i32(1) /* argument 1 */
             ,v_8d7326 /* v */ /* argument 2 */
        };
        apply_ret_5 = voba_apply(voba_symbol_value(_3D_3D_8da886 /* == */),voba_make_tuple(apply_args_6));/* return value for apply */
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
    apply_ret_0 = voba_apply(voba_symbol_value(print_8da056 /* print */),voba_make_tuple(apply_args_1));/* return value for apply */
}

