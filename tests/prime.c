#include <stdint.h>
#include <assert.h>
#define EXEC_ONCE_TU_NAME "tests/prime.voba built at 2015-3-25 5:5:31."
#define EXEC_ONCE_DEPENDS {"voba.module"};
#include <voba/value.h>
#include <voba/core/builtin.h> // import builtin by default
#include <exec_once.h>
#include <voba/module.h>
#define voba_match_eq voba_eql
static voba_value_t gf_match __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t get_class_1111d56 /* get_class */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t str_1111e46 /* str */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t print_1111f46 /* print */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t len_1112036 /* len */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t range_1111e76 /* range */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _2B_1112236 /* + */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3E_1112326 /* > */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_1112416 /* < */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3E_3D_1112596 /* >= */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_3D_1112686 /* <= */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3D_3D_1112776 /* == */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _25_1112866 /* % */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_3C_1112956 /* << */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t array_1112a46 /* array */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t eq_1112b36 /* eq */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t i32_mod_1112c26 /* i32_mod */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t eq_i32_mod_0_1112da6 /* eq_i32_mod_0 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i8_1112e96 /* cls_i8 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i16_1112f86 /* cls_i16 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i32_1113076 /* cls_i32 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_u8_1113166 /* cls_u8 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_u16_1113256 /* cls_u16 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_u32_1113346 /* cls_u32 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_float_1113436 /* cls_float */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_str_1113526 /* cls_str */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t array_2Diter_1113616 /* array-iter */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t primes_110d586 /* primes */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t is_2Dprime_110db56 /* is-prime */ __attribute__((unused)) = VOBA_UNDEF;
VOBA_FUNC voba_value_t is_2Dprime_5 (voba_value_t self, voba_value_t fun_args);
VOBA_FUNC voba_value_t is_2Dprime_5 (voba_value_t self, voba_value_t fun_args)
{
    voba_value_t apply_ret_6 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
        voba_value_t apply_args_7 [] = { 1 /* prepare arguments for apply */
             ,primes_110d586 /* primes */ /* argument 1 */
        };
        apply_ret_6 = voba_apply(voba_symbol_value(array_2Diter_1113616 /* array-iter */),voba_make_tuple(apply_args_7));/* return value for apply */
        voba_value_t for_final_11 __attribute__((unused)) = VOBA_UNDEF;/* return value for `for' statement */
        voba_value_t for_each_value_13 = VOBA_UNDEF;/* input value of each iteration  */
        voba_value_t for_each_output_15 __attribute__((unused)) = VOBA_UNDEF;/* output value of each iteration  */
        voba_value_t for_each_last_output_16 __attribute__((unused)) = VOBA_UNDEF;/* init value for `for' statement*/
        voba_value_t for_each_iter_14 __attribute__((unused)) = VOBA_UNDEF;/* tmp args for `for` each */
        //voba_value_t for_each_iter_args_17 [] = {0,};
        //for_each_iter_14 = voba_apply(apply_ret_6, voba_make_tuple(for_each_iter_args_17));
        for_each_iter_14 = apply_ret_6;/* get for-each-iterator from for-each-value */
        for_each_last_output_16 = VOBA_TRUE ; /* initialize the default initial value*/
        for_each_begin_8:{ /*prelude of `for' statement */
        voba_value_t for_each_args_12 [] = {0}; /* args for iterator*/
        for_each_value_13 = voba_apply(for_each_iter_14,voba_make_tuple(for_each_args_12)); /*invoke the iterator*/
        if(voba_eq(for_each_value_13,VOBA_DONE)){
            goto for_end_10;/* exit for loop */
        }
        /*for body begin*/
        /* match pattern 1 start*/
            /*empty label*/ {
                voba_value_t v_110e376 /* v */ __attribute__((unused)) = VOBA_UNDEF;
                /* start to match the single variable v_110e376 */
                if(voba_eq(v_110e376,VOBA_UNDEF)){
                    v_110e376 = for_each_value_13; /* when v_110e376 is unbound, bound it*/
                }else{
                     /* when v_110e376 is already bound, try to test whether equal*/
                     if(!voba_match_eq(v_110e376,for_each_value_13)){
                          goto for_each_end_9;/*if not equal goto the fail lable */
                     }
                }
                /* end to match the single variable v_110e376*/
                voba_value_t apply_ret_21 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
                voba_value_t apply_args_22 [] = { 2 /* prepare arguments for apply */
                     ,voba_tuple_at(fun_args,0) /* argument 1 */
                     ,v_110e376 /* v */ /* argument 2 */
                };
                apply_ret_21 = voba_apply(voba_symbol_value(_25_1112866 /* % */),voba_make_tuple(apply_args_22));/* return value for apply */
                voba_value_t apply_ret_19 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
                voba_value_t apply_args_20 [] = { 2 /* prepare arguments for apply */
                     ,apply_ret_21 /* argument 1 */
                     ,voba_make_i32(0) /* argument 2 */
                };
                apply_ret_19 = voba_apply(voba_symbol_value(_3D_3D_1112776 /* == */),voba_make_tuple(apply_args_20));/* return value for apply */
                if(voba_eq(apply_ret_19,VOBA_FALSE)){/* if pattern guard failed */
                     goto for_each_end_9; /* goto the pattern failed label */
                }
                    for_final_11 = VOBA_FALSE; /* break the `for' loop */
                    goto for_end_10;
            
                for_each_output_15 = VOBA_FALSE; /* match statement return value*/
                goto for_each_end_9; // match goto end
        
            }
            /* match pattern 1 end*/ 
    
        /*for body end*/
        for_each_end_9: /* end label for each iteration */
        for_final_11 = for_each_last_output_16;  /* assign the final value for `for' statement */
        goto for_each_begin_8; /* for goto begin */
        for_end_10:  /* end label `for' */
        if(0) goto for_end_10;  /* suppress warning `label at end of compound statement' */
        }
    return for_final_11; /* return is_2Dprime_5 */
}
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
    get_class_1111d56 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("get_class")));
}
{
    str_1111e46 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("str")));
}
{
    print_1111f46 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("print")));
}
{
    len_1112036 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("len")));
}
{
    range_1111e76 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("range")));
}
{
    _2B_1112236 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("+")));
}
{
    _3E_1112326 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr(">")));
}
{
    _3C_1112416 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("<")));
}
{
    _3E_3D_1112596 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr(">=")));
}
{
    _3C_3D_1112686 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("<=")));
}
{
    _3D_3D_1112776 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("==")));
}
{
    _25_1112866 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("%")));
}
{
    _3C_3C_1112956 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("<<")));
}
{
    array_1112a46 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("array")));
}
{
    eq_1112b36 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("eq")));
}
{
    i32_mod_1112c26 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("i32_mod")));
}
{
    eq_i32_mod_0_1112da6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("eq_i32_mod_0")));
}
{
    cls_i8_1112e96 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_i8")));
}
{
    cls_i16_1112f86 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_i16")));
}
{
    cls_i32_1113076 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_i32")));
}
{
    cls_u8_1113166 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_u8")));
}
{
    cls_u16_1113256 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_u16")));
}
{
    cls_u32_1113346 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_u32")));
}
{
    cls_float_1113436 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_float")));
}
{
    cls_str_1113526 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_str")));
}
{
    array_2Diter_1113616 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("array-iter")));
}
    voba_value_t apply_ret_0 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
    voba_value_t apply_args_1 [] = { 0 /* prepare arguments for apply */
    };
    apply_ret_0 = voba_apply(voba_symbol_value(array_1112a46 /* array */),voba_make_tuple(apply_args_1));/* return value for apply */
    voba_value_t primes_2 __attribute__((unused)) = VOBA_UNDEF;
    primes_2 = apply_ret_0;/* value for set var*/
    primes_110d586 = primes_2; /* set primes */
    voba_value_t apply_ret_3 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
    voba_value_t apply_args_4 [] = { 2 /* prepare arguments for apply */
         ,primes_110d586 /* primes */ /* argument 1 */
         ,voba_make_i32(2) /* argument 2 */
    };
    apply_ret_3 = voba_apply(voba_symbol_value(_3C_3C_1112956 /* << */),voba_make_tuple(apply_args_4));/* return value for apply */
    voba_value_t is_2Dprime_23 __attribute__((unused)) = VOBA_UNDEF;
    is_2Dprime_23 = voba_make_func(is_2Dprime_5);/* value for set var*/
    is_2Dprime_110db56 = is_2Dprime_23; /* set is-prime */
    voba_value_t apply_ret_24 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
    voba_value_t apply_args_25 [] = { 2 /* prepare arguments for apply */
         ,voba_make_i32(2) /* argument 1 */
         ,voba_make_i32(10000) /* argument 2 */
    };
    apply_ret_24 = voba_apply(voba_symbol_value(range_1111e76 /* range */),voba_make_tuple(apply_args_25));/* return value for apply */
    voba_value_t for_final_29 __attribute__((unused)) = VOBA_UNDEF;/* return value for `for' statement */
    voba_value_t for_each_value_31 = VOBA_UNDEF;/* input value of each iteration  */
    voba_value_t for_each_output_33 __attribute__((unused)) = VOBA_UNDEF;/* output value of each iteration  */
    voba_value_t for_each_last_output_34 __attribute__((unused)) = VOBA_UNDEF;/* init value for `for' statement*/
    voba_value_t for_each_iter_32 __attribute__((unused)) = VOBA_UNDEF;/* tmp args for `for` each */
    //voba_value_t for_each_iter_args_35 [] = {0,};
    //for_each_iter_32 = voba_apply(apply_ret_24, voba_make_tuple(for_each_iter_args_35));
    for_each_iter_32 = apply_ret_24;/* get for-each-iterator from for-each-value */
    for_each_begin_26:{ /*prelude of `for' statement */
    voba_value_t for_each_args_30 [] = {0}; /* args for iterator*/
    for_each_value_31 = voba_apply(for_each_iter_32,voba_make_tuple(for_each_args_30)); /*invoke the iterator*/
    if(voba_eq(for_each_value_31,VOBA_DONE)){
        goto for_end_28;/* exit for loop */
    }
    /*for body begin*/
    /* match pattern 1 start*/
        /*empty label*/ {
            voba_value_t v_110ede6 /* v */ __attribute__((unused)) = VOBA_UNDEF;
            /* start to match the single variable v_110ede6 */
            if(voba_eq(v_110ede6,VOBA_UNDEF)){
                v_110ede6 = for_each_value_31; /* when v_110ede6 is unbound, bound it*/
            }else{
                 /* when v_110ede6 is already bound, try to test whether equal*/
                 if(!voba_match_eq(v_110ede6,for_each_value_31)){
                      goto for_each_end_27;/*if not equal goto the fail lable */
                 }
            }
            /* end to match the single variable v_110ede6*/
            voba_value_t apply_ret_37 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
            voba_value_t apply_args_38 [] = { 1 /* prepare arguments for apply */
                 ,v_110ede6 /* v */ /* argument 1 */
            };
            apply_ret_37 = voba_apply(is_2Dprime_110db56 /* is-prime */,voba_make_tuple(apply_args_38));/* return value for apply */
            if(voba_eq(apply_ret_37,VOBA_FALSE)){/* if pattern guard failed */
                 goto for_each_end_27; /* goto the pattern failed label */
            }
                voba_value_t apply_ret_39 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
                voba_value_t apply_args_40 [] = { 2 /* prepare arguments for apply */
                     ,primes_110d586 /* primes */ /* argument 1 */
                     ,v_110ede6 /* v */ /* argument 2 */
                };
                apply_ret_39 = voba_apply(voba_symbol_value(_3C_3C_1112956 /* << */),voba_make_tuple(apply_args_40));/* return value for apply */
        
            for_each_output_33 = apply_ret_39; /* match statement return value*/
            goto for_each_end_27; // match goto end
    
        }
        /* match pattern 1 end*/ 

    /*for body end*/
    for_each_end_27: /* end label for each iteration */
    for_final_29 = for_each_last_output_34;  /* assign the final value for `for' statement */
    goto for_each_begin_26; /* for goto begin */
    for_end_28:  /* end label `for' */
    if(0) goto for_end_28;  /* suppress warning `label at end of compound statement' */
    }
    voba_value_t apply_ret_43 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
    voba_value_t apply_args_44 [] = { 1 /* prepare arguments for apply */
         ,primes_110d586 /* primes */ /* argument 1 */
    };
    apply_ret_43 = voba_apply(voba_symbol_value(len_1112036 /* len */),voba_make_tuple(apply_args_44));/* return value for apply */
    voba_value_t apply_ret_41 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
    voba_value_t apply_args_42 [] = { 1 /* prepare arguments for apply */
         ,apply_ret_43 /* argument 1 */
    };
    apply_ret_41 = voba_apply(voba_symbol_value(print_1111f46 /* print */),voba_make_tuple(apply_args_42));/* return value for apply */
}

