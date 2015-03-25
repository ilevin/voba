#include <stdint.h>
#include <assert.h>
#define EXEC_ONCE_TU_NAME "tests/array.voba built at 2015-3-25 5:5:30."
#define EXEC_ONCE_DEPENDS {"voba.module"};
#include <voba/value.h>
#include <voba/core/builtin.h> // import builtin by default
#include <exec_once.h>
#include <voba/module.h>
#define voba_match_eq voba_eql
static voba_value_t gf_match __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t get_class_20421e6 /* get_class */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t str_20422d6 /* str */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t print_20423d6 /* print */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t len_20424c6 /* len */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t range_2042306 /* range */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _2B_20426c6 /* + */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3E_20427b6 /* > */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_20428a6 /* < */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3E_3D_2042a26 /* >= */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_3D_2042b16 /* <= */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3D_3D_2042c06 /* == */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _25_2042cf6 /* % */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_3C_2042de6 /* << */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t array_2042ed6 /* array */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t eq_2042fc6 /* eq */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t i32_mod_20430b6 /* i32_mod */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t eq_i32_mod_0_2043236 /* eq_i32_mod_0 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i8_2043326 /* cls_i8 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i16_2043416 /* cls_i16 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i32_2043506 /* cls_i32 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_u8_20435f6 /* cls_u8 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_u16_20436e6 /* cls_u16 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_u32_20437d6 /* cls_u32 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_float_20438c6 /* cls_float */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_str_20439b6 /* cls_str */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t array_2Diter_2043aa6 /* array-iter */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t const_array_2 __attribute__((unused)) = VOBA_UNDEF; /* var for constant*/
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
    get_class_20421e6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("get_class")));
}
{
    str_20422d6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("str")));
}
{
    print_20423d6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("print")));
}
{
    len_20424c6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("len")));
}
{
    range_2042306 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("range")));
}
{
    _2B_20426c6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("+")));
}
{
    _3E_20427b6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr(">")));
}
{
    _3C_20428a6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("<")));
}
{
    _3E_3D_2042a26 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr(">=")));
}
{
    _3C_3D_2042b16 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("<=")));
}
{
    _3D_3D_2042c06 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("==")));
}
{
    _25_2042cf6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("%")));
}
{
    _3C_3C_2042de6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("<<")));
}
{
    array_2042ed6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("array")));
}
{
    eq_2042fc6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("eq")));
}
{
    i32_mod_20430b6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("i32_mod")));
}
{
    eq_i32_mod_0_2043236 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("eq_i32_mod_0")));
}
{
    cls_i8_2043326 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_i8")));
}
{
    cls_i16_2043416 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_i16")));
}
{
    cls_i32_2043506 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_i32")));
}
{
    cls_u8_20435f6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_u8")));
}
{
    cls_u16_20436e6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_u16")));
}
{
    cls_u32_20437d6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_u32")));
}
{
    cls_float_20438c6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_float")));
}
{
    cls_str_20439b6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_str")));
}
{
    array_2Diter_2043aa6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("array-iter")));
}
    voba_value_t const_tuple_in_c_3 [] = { 3,voba_make_i32(1),voba_make_i32(2),voba_make_i32(3)};
    const_array_2 = voba_array_from_tuple(voba_make_tuple(const_tuple_in_c_3)); /* constant */
    voba_value_t apply_ret_0 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
    voba_value_t apply_args_1 [] = { 1 /* prepare arguments for apply */
         ,const_array_2 /* argument 1 */
    };
    apply_ret_0 = voba_apply(voba_symbol_value(array_2Diter_2043aa6 /* array-iter */),voba_make_tuple(apply_args_1));/* return value for apply */
    voba_value_t for_final_7 __attribute__((unused)) = VOBA_UNDEF;/* return value for `for' statement */
    voba_value_t for_each_value_9 = VOBA_UNDEF;/* input value of each iteration  */
    voba_value_t for_each_output_11 __attribute__((unused)) = VOBA_UNDEF;/* output value of each iteration  */
    voba_value_t for_each_last_output_12 __attribute__((unused)) = VOBA_UNDEF;/* init value for `for' statement*/
    voba_value_t for_each_iter_10 __attribute__((unused)) = VOBA_UNDEF;/* tmp args for `for` each */
    //voba_value_t for_each_iter_args_13 [] = {0,};
    //for_each_iter_10 = voba_apply(apply_ret_0, voba_make_tuple(for_each_iter_args_13));
    for_each_iter_10 = apply_ret_0;/* get for-each-iterator from for-each-value */
    for_each_begin_4:{ /*prelude of `for' statement */
    voba_value_t for_each_args_8 [] = {0}; /* args for iterator*/
    for_each_value_9 = voba_apply(for_each_iter_10,voba_make_tuple(for_each_args_8)); /*invoke the iterator*/
    if(voba_eq(for_each_value_9,VOBA_DONE)){
        goto for_end_6;/* exit for loop */
    }
    /*for body begin*/
    /* match pattern 1 start*/
        /*empty label*/ {
            voba_value_t v_203f246 /* v */ __attribute__((unused)) = VOBA_UNDEF;
            /* start to match the single variable v_203f246 */
            if(voba_eq(v_203f246,VOBA_UNDEF)){
                v_203f246 = for_each_value_9; /* when v_203f246 is unbound, bound it*/
            }else{
                 /* when v_203f246 is already bound, try to test whether equal*/
                 if(!voba_match_eq(v_203f246,for_each_value_9)){
                      goto for_each_end_5;/*if not equal goto the fail lable */
                 }
            }
            /* end to match the single variable v_203f246*/
                voba_value_t apply_ret_17 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
                voba_value_t apply_args_18 [] = { 2 /* prepare arguments for apply */
                     ,voba_make_i32(1) /* argument 1 */
                     ,v_203f246 /* v */ /* argument 2 */
                };
                apply_ret_17 = voba_apply(voba_symbol_value(_2B_20426c6 /* + */),voba_make_tuple(apply_args_18));/* return value for apply */
                voba_value_t apply_ret_15 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
                voba_value_t apply_args_16 [] = { 1 /* prepare arguments for apply */
                     ,apply_ret_17 /* argument 1 */
                };
                apply_ret_15 = voba_apply(voba_symbol_value(print_20423d6 /* print */),voba_make_tuple(apply_args_16));/* return value for apply */
        
            for_each_output_11 = apply_ret_15; /* match statement return value*/
            goto for_each_end_5; // match goto end
    
        }
        /* match pattern 1 end*/ 

    /*for body end*/
    for_each_end_5: /* end label for each iteration */
    for_final_7 = for_each_last_output_12;  /* assign the final value for `for' statement */
    goto for_each_begin_4; /* for goto begin */
    for_end_6:  /* end label `for' */
    if(0) goto for_end_6;  /* suppress warning `label at end of compound statement' */
    }
}

