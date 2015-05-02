#include <stdint.h>
#include <assert.h>
#define EXEC_ONCE_TU_NAME "tests/array.voba built at 2015-5-2 13:9:8."
#define EXEC_ONCE_DEPENDS {"voba.module"};
#include <voba/value.h>
#include <voba/core/builtin.h> // import builtin by default
#include <exec_once.h>
#include <voba/module.h>
#define voba_match_eq voba_eql
    voba_value_t get_class_160ccd6 /* get_class */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t str_160cdd6 /* str */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t print_160cec6 /* print */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t len_160cd06 /* len */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t range_160d0c6 /* range */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _2B_160d1b6 /* + */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3E_160d2a6 /* > */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_160d426 /* < */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3E_3D_160d516 /* >= */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_3D_160d606 /* <= */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3D_3D_160d6f6 /* == */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _25_160d7e6 /* % */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_3C_160d8d6 /* << */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t array_160d9c6 /* array */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t eq_160dab6 /* eq */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t i32_mod_160dc36 /* i32_mod */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t eq_i32_mod_0_160dd26 /* eq_i32_mod_0 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i32_160de16 /* cls_i32 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_float_160df06 /* cls_float */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_str_160dff6 /* cls_str */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t array_2Diter_160e0e6 /* array-iter */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t isa_160e1d6 /* isa */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t match_2Dtuple_160e2c6 /* match-tuple */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t tuple_160e3b6 /* tuple */ __attribute__((unused)) = VOBA_UNDEF;
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
         "cls_i32",
         "cls_float",
         "cls_str",
         "array-iter",
         "isa",
         "match-tuple",
         "tuple",
         NULL
    };
    //fprintf(stderr,"loading %s(%s)\n",name,id);
    static voba_value_t                                    
        symbols2[sizeof(symbols)/sizeof(const char*) + 1] = {       
        sizeof(symbols)/sizeof(const char*) - 1, VOBA_NIL,          
    };                                                              
    size_t i;    for(i = 0 ; symbols[i]!=NULL; ++i){                      
        symbols2[i+1] =                                             
            voba_make_string(                                       
                    voba_str_from_cstr(symbols[i]));                
    }                                                               
    symbols2[i+1] = VOBA_BOX_END;    voba_import_module(name,id,voba_make_tuple(symbols2));          
}
{
    get_class_160ccd6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("get_class")));
}
{
    str_160cdd6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("str")));
}
{
    print_160cec6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("print")));
}
{
    len_160cd06 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("len")));
}
{
    range_160d0c6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("range")));
}
{
    _2B_160d1b6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("+")));
}
{
    _3E_160d2a6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr(">")));
}
{
    _3C_160d426 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("<")));
}
{
    _3E_3D_160d516 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr(">=")));
}
{
    _3C_3D_160d606 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("<=")));
}
{
    _3D_3D_160d6f6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("==")));
}
{
    _25_160d7e6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("%")));
}
{
    _3C_3C_160d8d6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("<<")));
}
{
    array_160d9c6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("array")));
}
{
    eq_160dab6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("eq")));
}
{
    i32_mod_160dc36 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("i32_mod")));
}
{
    eq_i32_mod_0_160dd26 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("eq_i32_mod_0")));
}
{
    cls_i32_160de16 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_i32")));
}
{
    cls_float_160df06 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_float")));
}
{
    cls_str_160dff6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_str")));
}
{
    array_2Diter_160e0e6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("array-iter")));
}
{
    isa_160e1d6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("isa")));
}
{
    match_2Dtuple_160e2c6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("match-tuple")));
}
{
    tuple_160e3b6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("tuple")));
}
    voba_value_t const_tuple_in_c_3 [] = { 3,voba_make_i32(1),voba_make_i32(2),voba_make_i32(3),VOBA_BOX_END};
    const_array_2 = voba_array_from_tuple(voba_make_tuple(const_tuple_in_c_3)); /* constant */
    voba_value_t apply_ret_0 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
    voba_value_t apply_args_1 [] = { 1 /* prepare arguments for apply */
         ,const_array_2 /* argument 1 */
    , VOBA_BOX_END };
    apply_ret_0 = voba_apply(voba_symbol_value(array_2Diter_160e0e6 /* array-iter */),voba_make_tuple(apply_args_1));/* return value for apply */
    /* return value for `for' statement */
    voba_value_t for_ret_value_8 __attribute__((unused)) = VOBA_UNDEF;
    /* output value of each iteration */
    voba_value_t for_each_output_13 __attribute__((unused)) = VOBA_UNDEF;
    /* value specified by :init keyword */
    voba_value_t for_each_last_output_14 __attribute__((unused)) = VOBA_UNDEF;
    /* for-each-iterator, specified by :each keyword*/
    voba_value_t for_each_iter_10 __attribute__((unused)) = VOBA_UNDEF;/* */
    /* arguments for for-each-iterator to get for-each-input*/
    voba_value_t for_each_iter_args_15 [] __attribute__((unused)) = {1,VOBA_NIL,VOBA_BOX_END};
    /* function pointer of for-each-iterator */
    voba_func_t for_each_iter_f_11 __attribute__((unused)) = NULL;
    /* function self of for-each-iterator */
    voba_value_t for_each_iter_self_12 __attribute__((unused)) = VOBA_NIL;
    /* for-each-input, the return value of for-each-iterator.*/
    voba_value_t for_each_input_9 __attribute__((unused)) = VOBA_NIL;
    for_each_iter_10 = apply_ret_0;/* get for-each-iterator from for-each-value */
    for_each_begin_4:{ /*prelude of `for' statement */
    for_each_input_9 = voba_apply(for_each_iter_10, voba_make_tuple(for_each_iter_args_15)); /*invoke the iterator to get the input value*/
    if(voba_eq(for_each_input_9,VOBA_DONE)){
        goto for_end_7;/* exit for loop */
    }
    /*for body begin*/
    /* match rule 1 start*/
        /*empty label*/ {
            voba_value_t v_160a206 /* v */ __attribute__((unused)) = VOBA_UNDEF;
            /* start to match the single variable v_160a206 */
            if(voba_eq(v_160a206,VOBA_UNDEF)){
                v_160a206 = for_each_input_9; /* when v_160a206 is unbound, bound it*/
            }else{
                 /* when v_160a206 is already bound, try to test whether equal*/
                 if(!voba_match_eq(v_160a206,for_each_input_9)){
                      goto for_each_end_match_failure_6;/*if not equal goto the fail lable */
                 }
            }
            /* end to match the single variable v_160a206*/
                voba_value_t apply_ret_19 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
                voba_value_t apply_args_20 [] = { 2 /* prepare arguments for apply */
                     ,voba_make_i32(1) /* argument 1 */
                     ,v_160a206 /* v */ /* argument 2 */
                , VOBA_BOX_END };
                apply_ret_19 = voba_apply(voba_symbol_value(_2B_160d1b6 /* + */),voba_make_tuple(apply_args_20));/* return value for apply */
                voba_value_t apply_ret_17 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
                voba_value_t apply_args_18 [] = { 1 /* prepare arguments for apply */
                     ,apply_ret_19 /* argument 1 */
                , VOBA_BOX_END };
                apply_ret_17 = voba_apply(voba_symbol_value(print_160cec6 /* print */),voba_make_tuple(apply_args_18));/* return value for apply */
        
            for_each_output_13 = apply_ret_17; /* match statement return value*/
            goto for_each_end_match_success_5; // match goto end
    
        }
        /* match rule 1 end*/ 

    /*for body end*/
    for_each_end_match_failure_6: /* end label for each iteration if match failure*/
    voba_throw_exception(voba_make_string(voba_str_from_cstr("no match")));
    for_each_end_match_success_5: /* end label for each iteration if match success*/
    for_ret_value_8 = for_each_last_output_14;  /* assign the final value for `for' statement */
    goto for_each_begin_4; /* for goto begin */
    for_end_7:  /* end label `for' */
    if(0) goto for_end_7;  /* suppress warning `label at end of compound statement' */
    }
}

