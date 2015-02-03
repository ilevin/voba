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
    voba_value_t get_class_2585f26 /* get_class */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t str_2586016 /* str */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t print_2586116 /* print */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t len_2586206 /* len */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t range_2586046 /* range */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _2B_2586406 /* + */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3E_25864f6 /* > */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_25865e6 /* < */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3E_3D_2586766 /* >= */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_3D_2586856 /* <= */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3D_3D_2586946 /* == */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _25_2586a36 /* % */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_3C_2586b26 /* << */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t array_2586c16 /* array */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t eq_2586d06 /* eq */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t i32_mod_2586df6 /* i32_mod */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t eq_i32_mod_0_2586f76 /* eq_i32_mod_0 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i8_2587066 /* cls_i8 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i16_2587156 /* cls_i16 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i32_2587246 /* cls_i32 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_u8_2587336 /* cls_u8 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_u16_2587426 /* cls_u16 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_u32_2587516 /* cls_u32 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_float_2587606 /* cls_float */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_str_25876f6 /* cls_str */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t primes_2581866 /* primes */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t is_2Dprime_2581e36 /* is-prime */ __attribute__((unused)) = VOBA_UNDEF;
VOBA_FUNC voba_value_t is_2Dprime_5 (voba_value_t self, voba_value_t fun_args);
VOBA_FUNC voba_value_t is_2Dprime_5 (voba_value_t self, voba_value_t fun_args)
{
    voba_value_t for_final_9 __attribute__((unused)) = VOBA_UNDEF;/* return value for `for' statement */
        voba_value_t for_each_value_11 = VOBA_UNDEF;/* input value of each iteration  */
        voba_value_t for_each_output_14 __attribute__((unused)) = VOBA_UNDEF;/* output value of each iteration  */
        voba_value_t for_each_last_output_15 __attribute__((unused)) = VOBA_UNDEF;/* init value for `for' statement*/
        voba_func_t  for_each_iter_f_13 = NULL;/* iter for `for' statement*/
        voba_value_t for_each_iter_12 __attribute__((unused)) = VOBA_UNDEF;/* tmp args for `for` each */
        for_each_iter_f_13 = voba_gf_lookup(voba_symbol_value(gf_iter), voba_get_class(primes_2581866 /* primes */)); /* initialized iterator */
        if(for_each_iter_f_13 == NULL){
             voba_throw_exception(voba_make_string(VOBA_CONST_CHAR("cannot find the iterator")));
        }
        voba_value_t for_each_iter_args_16 [] = {1, primes_2581866 /* primes */}; /* prepare to invoke the iterator*/
        for_each_iter_12 = for_each_iter_f_13(voba_make_func(for_each_iter_f_13),voba_make_tuple(for_each_iter_args_16)); /*get the iterator*/ 
        for_each_last_output_15 = VOBA_TRUE ; /* initialize the default initial value*/
        for_each_begin_6:{ /*prelude of `for' statement */
        voba_value_t for_each_args_10 [] = {1,primes_2581866 /* primes */}; /* args for iterator*/
        for_each_value_11 = voba_apply(for_each_iter_12,voba_make_tuple(for_each_args_10)); /*invoke the iterator*/
        if(voba_eq(for_each_value_11,VOBA_DONE)){
            goto for_end_8;/* exit for loop */
        }
        /*for body begin*/
        /* match pattern 1 start*/
            /*empty label*/ {
                voba_value_t v_2582516 /* v */ __attribute__((unused)) = VOBA_UNDEF;
                /* start to match the single variable v_2582516 */
                if(voba_eq(v_2582516,VOBA_UNDEF)){
                    v_2582516 = for_each_value_11; /* when v_2582516 is unbound, bound it*/
                }else{
                     /* when v_2582516 is already bound, try to test whether equal*/
                     if(!voba_match_eq(v_2582516,for_each_value_11)){
                          goto for_each_end_7;/*if not equal goto the fail lable */
                     }
                }
                /* end to match the single variable v_2582516*/
                voba_value_t apply_ret_20 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
                voba_value_t apply_args_21 [] = { 2 /* prepare arguments for apply */
                     ,voba_tuple_at(fun_args,0) /* argument 1 */
                     ,v_2582516 /* v */ /* argument 2 */
                };
                apply_ret_20 = voba_apply(voba_symbol_value(_25_2586a36 /* % */),voba_make_tuple(apply_args_21));/* return value for apply */
                voba_value_t apply_ret_18 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
                voba_value_t apply_args_19 [] = { 2 /* prepare arguments for apply */
                     ,apply_ret_20 /* argument 1 */
                     ,voba_make_i32(0) /* argument 2 */
                };
                apply_ret_18 = voba_apply(voba_symbol_value(_3D_3D_2586946 /* == */),voba_make_tuple(apply_args_19));/* return value for apply */
                if(voba_eq(apply_ret_18,VOBA_FALSE)){/* if pattern guard failed */
                     goto for_each_end_7; /* goto the pattern failed label */
                }
                    for_final_9 = VOBA_FALSE; /* break the `for' loop */
                    goto for_end_8;
            
                for_each_output_14 = VOBA_FALSE; /* match statement return value*/
                goto for_each_end_7; // match goto end
        
            }
            /* match pattern 1 end*/ 
    
        /*for body end*/
        for_each_end_7: /* end label for each iteration */
        for_final_9 = for_each_last_output_15;  /* assign the final value for `for' statement */
        goto for_each_begin_6; /* for goto begin */
        for_end_8:  /* end label `for' */
        if(0) goto for_end_8;  /* suppress warning `label at end of compound statement' */
        }
    return for_final_9; /* return is_2Dprime_5 */
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
    get_class_2585f26 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("get_class")));
}
{
    str_2586016 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("str")));
}
{
    print_2586116 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("print")));
}
{
    len_2586206 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("len")));
}
{
    range_2586046 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("range")));
}
{
    _2B_2586406 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("+")));
}
{
    _3E_25864f6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr(">")));
}
{
    _3C_25865e6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("<")));
}
{
    _3E_3D_2586766 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr(">=")));
}
{
    _3C_3D_2586856 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("<=")));
}
{
    _3D_3D_2586946 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("==")));
}
{
    _25_2586a36 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("%")));
}
{
    _3C_3C_2586b26 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("<<")));
}
{
    array_2586c16 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("array")));
}
{
    eq_2586d06 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("eq")));
}
{
    i32_mod_2586df6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("i32_mod")));
}
{
    eq_i32_mod_0_2586f76 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("eq_i32_mod_0")));
}
{
    cls_i8_2587066 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_i8")));
}
{
    cls_i16_2587156 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_i16")));
}
{
    cls_i32_2587246 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_i32")));
}
{
    cls_u8_2587336 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_u8")));
}
{
    cls_u16_2587426 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_u16")));
}
{
    cls_u32_2587516 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_u32")));
}
{
    cls_float_2587606 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_float")));
}
{
    cls_str_25876f6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_str")));
}
    voba_value_t apply_ret_0 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
    voba_value_t apply_args_1 [] = { 0 /* prepare arguments for apply */
    };
    apply_ret_0 = voba_apply(voba_symbol_value(array_2586c16 /* array */),voba_make_tuple(apply_args_1));/* return value for apply */
    voba_value_t primes_2 __attribute__((unused)) = VOBA_UNDEF;
    primes_2 = apply_ret_0;/* value for set var*/
    primes_2581866 = primes_2; /* set primes */
    voba_value_t apply_ret_3 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
    voba_value_t apply_args_4 [] = { 2 /* prepare arguments for apply */
         ,primes_2581866 /* primes */ /* argument 1 */
         ,voba_make_i32(2) /* argument 2 */
    };
    apply_ret_3 = voba_apply(voba_symbol_value(_3C_3C_2586b26 /* << */),voba_make_tuple(apply_args_4));/* return value for apply */
    voba_value_t is_2Dprime_22 __attribute__((unused)) = VOBA_UNDEF;
    is_2Dprime_22 = voba_make_func(is_2Dprime_5);/* value for set var*/
    is_2Dprime_2581e36 = is_2Dprime_22; /* set is-prime */
    voba_value_t apply_ret_23 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
    voba_value_t apply_args_24 [] = { 2 /* prepare arguments for apply */
         ,voba_make_i32(2) /* argument 1 */
         ,voba_make_i32(10000) /* argument 2 */
    };
    apply_ret_23 = voba_apply(voba_symbol_value(range_2586046 /* range */),voba_make_tuple(apply_args_24));/* return value for apply */
    voba_value_t for_final_28 __attribute__((unused)) = VOBA_UNDEF;/* return value for `for' statement */
    voba_value_t for_each_value_30 = VOBA_UNDEF;/* input value of each iteration  */
    voba_value_t for_each_output_33 __attribute__((unused)) = VOBA_UNDEF;/* output value of each iteration  */
    voba_value_t for_each_last_output_34 __attribute__((unused)) = VOBA_UNDEF;/* init value for `for' statement*/
    voba_func_t  for_each_iter_f_32 = NULL;/* iter for `for' statement*/
    voba_value_t for_each_iter_31 __attribute__((unused)) = VOBA_UNDEF;/* tmp args for `for` each */
    for_each_iter_f_32 = voba_gf_lookup(voba_symbol_value(gf_iter), voba_get_class(apply_ret_23)); /* initialized iterator */
    if(for_each_iter_f_32 == NULL){
         voba_throw_exception(voba_make_string(VOBA_CONST_CHAR("cannot find the iterator")));
    }
    voba_value_t for_each_iter_args_35 [] = {1, apply_ret_23}; /* prepare to invoke the iterator*/
    for_each_iter_31 = for_each_iter_f_32(voba_make_func(for_each_iter_f_32),voba_make_tuple(for_each_iter_args_35)); /*get the iterator*/ 
    for_each_begin_25:{ /*prelude of `for' statement */
    voba_value_t for_each_args_29 [] = {1,apply_ret_23}; /* args for iterator*/
    for_each_value_30 = voba_apply(for_each_iter_31,voba_make_tuple(for_each_args_29)); /*invoke the iterator*/
    if(voba_eq(for_each_value_30,VOBA_DONE)){
        goto for_end_27;/* exit for loop */
    }
    /*for body begin*/
    /* match pattern 1 start*/
        /*empty label*/ {
            voba_value_t v_2582f86 /* v */ __attribute__((unused)) = VOBA_UNDEF;
            /* start to match the single variable v_2582f86 */
            if(voba_eq(v_2582f86,VOBA_UNDEF)){
                v_2582f86 = for_each_value_30; /* when v_2582f86 is unbound, bound it*/
            }else{
                 /* when v_2582f86 is already bound, try to test whether equal*/
                 if(!voba_match_eq(v_2582f86,for_each_value_30)){
                      goto for_each_end_26;/*if not equal goto the fail lable */
                 }
            }
            /* end to match the single variable v_2582f86*/
            voba_value_t apply_ret_37 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
            voba_value_t apply_args_38 [] = { 1 /* prepare arguments for apply */
                 ,v_2582f86 /* v */ /* argument 1 */
            };
            apply_ret_37 = voba_apply(is_2Dprime_2581e36 /* is-prime */,voba_make_tuple(apply_args_38));/* return value for apply */
            if(voba_eq(apply_ret_37,VOBA_FALSE)){/* if pattern guard failed */
                 goto for_each_end_26; /* goto the pattern failed label */
            }
                voba_value_t apply_ret_39 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
                voba_value_t apply_args_40 [] = { 2 /* prepare arguments for apply */
                     ,primes_2581866 /* primes */ /* argument 1 */
                     ,v_2582f86 /* v */ /* argument 2 */
                };
                apply_ret_39 = voba_apply(voba_symbol_value(_3C_3C_2586b26 /* << */),voba_make_tuple(apply_args_40));/* return value for apply */
        
            for_each_output_33 = apply_ret_39; /* match statement return value*/
            goto for_each_end_26; // match goto end
    
        }
        /* match pattern 1 end*/ 

    /*for body end*/
    for_each_end_26: /* end label for each iteration */
    for_final_28 = for_each_last_output_34;  /* assign the final value for `for' statement */
    goto for_each_begin_25; /* for goto begin */
    for_end_27:  /* end label `for' */
    if(0) goto for_end_27;  /* suppress warning `label at end of compound statement' */
    }
    voba_value_t apply_ret_43 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
    voba_value_t apply_args_44 [] = { 1 /* prepare arguments for apply */
         ,primes_2581866 /* primes */ /* argument 1 */
    };
    apply_ret_43 = voba_apply(voba_symbol_value(len_2586206 /* len */),voba_make_tuple(apply_args_44));/* return value for apply */
    voba_value_t apply_ret_41 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
    voba_value_t apply_args_42 [] = { 1 /* prepare arguments for apply */
         ,apply_ret_43 /* argument 1 */
    };
    apply_ret_41 = voba_apply(voba_symbol_value(print_2586116 /* print */),voba_make_tuple(apply_args_42));/* return value for apply */
}

