#include <stdint.h>
#include <assert.h>
#define EXEC_ONCE_TU_NAME "tests/prime.voba built at 2015-5-2 13:9:9."
#define EXEC_ONCE_DEPENDS {"voba.module"};
#include <voba/value.h>
#include <voba/core/builtin.h> // import builtin by default
#include <exec_once.h>
#include <voba/module.h>
#define voba_match_eq voba_eql
    voba_value_t get_class_11b0c26 /* get_class */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t str_11b0d26 /* str */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t print_11b0e16 /* print */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t len_11b0c56 /* len */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t range_11b1016 /* range */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _2B_11b1106 /* + */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3E_11b11f6 /* > */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_11b1376 /* < */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3E_3D_11b1466 /* >= */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_3D_11b1556 /* <= */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3D_3D_11b1646 /* == */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _25_11b1736 /* % */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_3C_11b1826 /* << */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t array_11b1916 /* array */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t eq_11b1a06 /* eq */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t i32_mod_11b1b86 /* i32_mod */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t eq_i32_mod_0_11b1c76 /* eq_i32_mod_0 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i32_11b1d66 /* cls_i32 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_float_11b1e56 /* cls_float */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_str_11b1f46 /* cls_str */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t array_2Diter_11b2036 /* array-iter */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t isa_11b2126 /* isa */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t match_2Dtuple_11b2216 /* match-tuple */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t tuple_11b2306 /* tuple */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t primes_11ac106 /* primes */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t is_2Dprime_11ac7a6 /* is-prime */ __attribute__((unused)) = VOBA_UNDEF;
VOBA_FUNC voba_value_t def_5 (voba_value_t fun, voba_value_t fun_args, voba_value_t* next_fun, voba_value_t next_args[]);
VOBA_FUNC voba_value_t def_5 (voba_value_t fun, voba_value_t fun_args, voba_value_t* next_fun, voba_value_t next_args[])
{
    /* start of a match statement */
        voba_value_t match_ret_6 __attribute__((unused)) = VOBA_UNDEF; /* return value for match statement */
        /* match rule 1 start*/
        /*empty label*/ {
            voba_value_t x_11ac8d6 /* x */ __attribute__((unused)) = VOBA_UNDEF;
            /* evaluate first element of pattern */
            
            voba_value_t pattern_args_11 [] = {3, fun_args, voba_make_i32(-1), voba_make_i32(1), VOBA_BOX_END};
            voba_value_t pattern_ret_10 = voba_apply(voba_symbol_value(match_2Dtuple_11b2216 /* match-tuple */), voba_make_tuple(pattern_args_11));
            if(!voba_eq(VOBA_TRUE,pattern_ret_10)){
                goto match_label_failure_8; /* number of var does not match*/
            }
            /* extract 0 of 1 sub-value from the main value*/
            voba_value_t pattern_args_12 [] = {3, fun_args,voba_make_i32(0), voba_make_i32(1), VOBA_BOX_END};
            voba_value_t pattern_ret_13 = voba_apply(voba_symbol_value(match_2Dtuple_11b2216 /* match-tuple */),voba_make_tuple(pattern_args_12));/* the sub-value 0 of 1*/
            /* start to match the single variable x_11ac8d6 */
            if(voba_eq(x_11ac8d6,VOBA_UNDEF)){
                x_11ac8d6 = pattern_ret_13; /* when x_11ac8d6 is unbound, bound it*/
            }else{
                 /* when x_11ac8d6 is already bound, try to test whether equal*/
                 if(!voba_match_eq(x_11ac8d6,pattern_ret_13)){
                      goto match_label_failure_8;/*if not equal goto the fail lable */
                 }
            }
            /* end to match the single variable x_11ac8d6*/
                voba_value_t apply_ret_14 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
                voba_value_t apply_args_15 [] = { 1 /* prepare arguments for apply */
                     ,primes_11ac106 /* primes */ /* argument 1 */
                , VOBA_BOX_END };
                apply_ret_14 = voba_apply(voba_symbol_value(array_2Diter_11b2036 /* array-iter */),voba_make_tuple(apply_args_15));/* return value for apply */
                /* return value for `for' statement */
                voba_value_t for_ret_value_20 __attribute__((unused)) = VOBA_UNDEF;
                /* output value of each iteration */
                voba_value_t for_each_output_25 __attribute__((unused)) = VOBA_UNDEF;
                /* value specified by :init keyword */
                voba_value_t for_each_last_output_26 __attribute__((unused)) = VOBA_UNDEF;
                /* for-each-iterator, specified by :each keyword*/
                voba_value_t for_each_iter_22 __attribute__((unused)) = VOBA_UNDEF;/* */
                /* arguments for for-each-iterator to get for-each-input*/
                voba_value_t for_each_iter_args_27 [] __attribute__((unused)) = {1,VOBA_NIL,VOBA_BOX_END};
                /* function pointer of for-each-iterator */
                voba_func_t for_each_iter_f_23 __attribute__((unused)) = NULL;
                /* function self of for-each-iterator */
                voba_value_t for_each_iter_self_24 __attribute__((unused)) = VOBA_NIL;
                /* for-each-input, the return value of for-each-iterator.*/
                voba_value_t for_each_input_21 __attribute__((unused)) = VOBA_NIL;
                for_each_iter_22 = apply_ret_14;/* get for-each-iterator from for-each-value */
                for_each_last_output_26 = VOBA_TRUE ; /* initialize the default initial value*/
                for_each_begin_16:{ /*prelude of `for' statement */
                for_each_input_21 = voba_apply(for_each_iter_22, voba_make_tuple(for_each_iter_args_27)); /*invoke the iterator to get the input value*/
                if(voba_eq(for_each_input_21,VOBA_DONE)){
                    goto for_end_19;/* exit for loop */
                }
                /*for body begin*/
                /* match rule 1 start*/
                    /*empty label*/ {
                        voba_value_t v_11acf36 /* v */ __attribute__((unused)) = VOBA_UNDEF;
                        /* start to match the single variable v_11acf36 */
                        if(voba_eq(v_11acf36,VOBA_UNDEF)){
                            v_11acf36 = for_each_input_21; /* when v_11acf36 is unbound, bound it*/
                        }else{
                             /* when v_11acf36 is already bound, try to test whether equal*/
                             if(!voba_match_eq(v_11acf36,for_each_input_21)){
                                  goto rule_label_0_29;/*if not equal goto the fail lable */
                             }
                        }
                        /* end to match the single variable v_11acf36*/
                        voba_value_t apply_ret_32 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
                        voba_value_t apply_args_33 [] = { 2 /* prepare arguments for apply */
                             ,x_11ac8d6 /* x */ /* argument 1 */
                             ,v_11acf36 /* v */ /* argument 2 */
                        , VOBA_BOX_END };
                        apply_ret_32 = voba_apply(voba_symbol_value(_25_11b1736 /* % */),voba_make_tuple(apply_args_33));/* return value for apply */
                        voba_value_t apply_ret_30 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
                        voba_value_t apply_args_31 [] = { 2 /* prepare arguments for apply */
                             ,apply_ret_32 /* argument 1 */
                             ,voba_make_i32(0) /* argument 2 */
                        , VOBA_BOX_END };
                        apply_ret_30 = voba_apply(voba_symbol_value(_3D_3D_11b1646 /* == */),voba_make_tuple(apply_args_31));/* return value for apply */
                        if(voba_eq(apply_ret_30,VOBA_FALSE)){/* if pattern guard failed */
                             goto rule_label_0_29; /* goto the pattern failed label */
                        }
                            for_ret_value_20 = VOBA_FALSE; /* break the `for' loop */
                            goto for_end_19;
                    
                        for_each_output_25 = VOBA_FALSE; /* match statement return value*/
                        goto for_each_end_match_success_17; // match goto end
                
                    }
                    /* match rule 1 end*/ 
                    /* match rule 2 start*/
                    rule_label_0_29: {
                        voba_value_t else_11ad936 /* else */ __attribute__((unused)) = VOBA_UNDEF;
                        /* start to match the single variable else_11ad936 */
                        if(voba_eq(else_11ad936,VOBA_UNDEF)){
                            else_11ad936 = for_each_input_21; /* when else_11ad936 is unbound, bound it*/
                        }else{
                             /* when else_11ad936 is already bound, try to test whether equal*/
                             if(!voba_match_eq(else_11ad936,for_each_input_21)){
                                  goto for_each_end_match_failure_18;/*if not equal goto the fail lable */
                             }
                        }
                        /* end to match the single variable else_11ad936*/
                        
                        for_each_output_25 = VOBA_TRUE; /* match statement return value*/
                        goto for_each_end_match_success_17; // match goto end
                
                    }
                    /* match rule 2 end*/ 
            
                /*for body end*/
                for_each_end_match_failure_18: /* end label for each iteration if match failure*/
                voba_throw_exception(voba_make_string(voba_str_from_cstr("no match")));
                for_each_end_match_success_17: /* end label for each iteration if match success*/
                for_ret_value_20 = for_each_last_output_26;  /* assign the final value for `for' statement */
                goto for_each_begin_16; /* for goto begin */
                for_end_19:  /* end label `for' */
                if(0) goto for_end_19;  /* suppress warning `label at end of compound statement' */
                }
        
            match_ret_6 = for_ret_value_20; /* match statement return value*/
            goto match_label_success_7; // match goto end
    
        }
        /* match rule 1 end*/ 
        match_label_failure_8:if(0) goto match_label_failure_8;/*suppress warning*/; /* the whole match statement failed. */
        voba_throw_exception(voba_make_string(voba_str_from_cstr("no match")));
        match_label_success_7:; /* the whole match statement success */
        /* end of a match statement */
    return match_ret_6; /* return def_5 */
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
    get_class_11b0c26 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("get_class")));
}
{
    str_11b0d26 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("str")));
}
{
    print_11b0e16 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("print")));
}
{
    len_11b0c56 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("len")));
}
{
    range_11b1016 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("range")));
}
{
    _2B_11b1106 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("+")));
}
{
    _3E_11b11f6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr(">")));
}
{
    _3C_11b1376 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("<")));
}
{
    _3E_3D_11b1466 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr(">=")));
}
{
    _3C_3D_11b1556 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("<=")));
}
{
    _3D_3D_11b1646 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("==")));
}
{
    _25_11b1736 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("%")));
}
{
    _3C_3C_11b1826 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("<<")));
}
{
    array_11b1916 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("array")));
}
{
    eq_11b1a06 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("eq")));
}
{
    i32_mod_11b1b86 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("i32_mod")));
}
{
    eq_i32_mod_0_11b1c76 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("eq_i32_mod_0")));
}
{
    cls_i32_11b1d66 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_i32")));
}
{
    cls_float_11b1e56 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_float")));
}
{
    cls_str_11b1f46 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_str")));
}
{
    array_2Diter_11b2036 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("array-iter")));
}
{
    isa_11b2126 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("isa")));
}
{
    match_2Dtuple_11b2216 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("match-tuple")));
}
{
    tuple_11b2306 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("tuple")));
}
    voba_value_t apply_ret_0 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
    voba_value_t apply_args_1 [] = { 0 /* prepare arguments for apply */
    , VOBA_BOX_END };
    apply_ret_0 = voba_apply(voba_symbol_value(array_11b1916 /* array */),voba_make_tuple(apply_args_1));/* return value for apply */
    voba_value_t primes_2 __attribute__((unused)) = VOBA_UNDEF;
    primes_2 = apply_ret_0;/* value for set var*/
    primes_11ac106 = primes_2; /* set primes */
    voba_value_t apply_ret_3 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
    voba_value_t apply_args_4 [] = { 2 /* prepare arguments for apply */
         ,primes_11ac106 /* primes */ /* argument 1 */
         ,voba_make_i32(2) /* argument 2 */
    , VOBA_BOX_END };
    apply_ret_3 = voba_apply(voba_symbol_value(_3C_3C_11b1826 /* << */),voba_make_tuple(apply_args_4));/* return value for apply */
    voba_value_t is_2Dprime_34 __attribute__((unused)) = VOBA_UNDEF;
    is_2Dprime_34 = voba_make_func(def_5);/* value for set var*/
    is_2Dprime_11ac7a6 = is_2Dprime_34; /* set is-prime */
    voba_value_t apply_ret_35 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
    voba_value_t apply_args_36 [] = { 2 /* prepare arguments for apply */
         ,voba_make_i32(2) /* argument 1 */
         ,voba_make_i32(100000) /* argument 2 */
    , VOBA_BOX_END };
    apply_ret_35 = voba_apply(voba_symbol_value(range_11b1016 /* range */),voba_make_tuple(apply_args_36));/* return value for apply */
    /* return value for `for' statement */
    voba_value_t for_ret_value_41 __attribute__((unused)) = VOBA_UNDEF;
    /* output value of each iteration */
    voba_value_t for_each_output_46 __attribute__((unused)) = VOBA_UNDEF;
    /* value specified by :init keyword */
    voba_value_t for_each_last_output_47 __attribute__((unused)) = VOBA_UNDEF;
    /* for-each-iterator, specified by :each keyword*/
    voba_value_t for_each_iter_43 __attribute__((unused)) = VOBA_UNDEF;/* */
    /* arguments for for-each-iterator to get for-each-input*/
    voba_value_t for_each_iter_args_48 [] __attribute__((unused)) = {1,VOBA_NIL,VOBA_BOX_END};
    /* function pointer of for-each-iterator */
    voba_func_t for_each_iter_f_44 __attribute__((unused)) = NULL;
    /* function self of for-each-iterator */
    voba_value_t for_each_iter_self_45 __attribute__((unused)) = VOBA_NIL;
    /* for-each-input, the return value of for-each-iterator.*/
    voba_value_t for_each_input_42 __attribute__((unused)) = VOBA_NIL;
    for_each_iter_43 = apply_ret_35;/* get for-each-iterator from for-each-value */
    for_each_begin_37:{ /*prelude of `for' statement */
    for_each_input_42 = voba_apply(for_each_iter_43, voba_make_tuple(for_each_iter_args_48)); /*invoke the iterator to get the input value*/
    if(voba_eq(for_each_input_42,VOBA_DONE)){
        goto for_end_40;/* exit for loop */
    }
    /*for body begin*/
    /* match rule 1 start*/
        /*empty label*/ {
            voba_value_t v_11add66 /* v */ __attribute__((unused)) = VOBA_UNDEF;
            /* start to match the single variable v_11add66 */
            if(voba_eq(v_11add66,VOBA_UNDEF)){
                v_11add66 = for_each_input_42; /* when v_11add66 is unbound, bound it*/
            }else{
                 /* when v_11add66 is already bound, try to test whether equal*/
                 if(!voba_match_eq(v_11add66,for_each_input_42)){
                      goto rule_label_0_50;/*if not equal goto the fail lable */
                 }
            }
            /* end to match the single variable v_11add66*/
            voba_value_t apply_ret_51 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
            voba_value_t apply_args_52 [] = { 1 /* prepare arguments for apply */
                 ,v_11add66 /* v */ /* argument 1 */
            , VOBA_BOX_END };
            apply_ret_51 = voba_apply(is_2Dprime_11ac7a6 /* is-prime */,voba_make_tuple(apply_args_52));/* return value for apply */
            if(voba_eq(apply_ret_51,VOBA_FALSE)){/* if pattern guard failed */
                 goto rule_label_0_50; /* goto the pattern failed label */
            }
                voba_value_t apply_ret_53 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
                voba_value_t apply_args_54 [] = { 2 /* prepare arguments for apply */
                     ,primes_11ac106 /* primes */ /* argument 1 */
                     ,v_11add66 /* v */ /* argument 2 */
                , VOBA_BOX_END };
                apply_ret_53 = voba_apply(voba_symbol_value(_3C_3C_11b1826 /* << */),voba_make_tuple(apply_args_54));/* return value for apply */
        
            for_each_output_46 = apply_ret_53; /* match statement return value*/
            goto for_each_end_match_success_38; // match goto end
    
        }
        /* match rule 1 end*/ 
        /* match rule 2 start*/
        rule_label_0_50: {
            voba_value_t else_11ae666 /* else */ __attribute__((unused)) = VOBA_UNDEF;
            /* start to match the single variable else_11ae666 */
            if(voba_eq(else_11ae666,VOBA_UNDEF)){
                else_11ae666 = for_each_input_42; /* when else_11ae666 is unbound, bound it*/
            }else{
                 /* when else_11ae666 is already bound, try to test whether equal*/
                 if(!voba_match_eq(else_11ae666,for_each_input_42)){
                      goto for_each_end_match_failure_39;/*if not equal goto the fail lable */
                 }
            }
            /* end to match the single variable else_11ae666*/
            
            for_each_output_46 = VOBA_NIL; /* match statement return value*/
            goto for_each_end_match_success_38; // match goto end
    
        }
        /* match rule 2 end*/ 

    /*for body end*/
    for_each_end_match_failure_39: /* end label for each iteration if match failure*/
    voba_throw_exception(voba_make_string(voba_str_from_cstr("no match")));
    for_each_end_match_success_38: /* end label for each iteration if match success*/
    for_ret_value_41 = for_each_last_output_47;  /* assign the final value for `for' statement */
    goto for_each_begin_37; /* for goto begin */
    for_end_40:  /* end label `for' */
    if(0) goto for_end_40;  /* suppress warning `label at end of compound statement' */
    }
    voba_value_t apply_ret_57 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
    voba_value_t apply_args_58 [] = { 1 /* prepare arguments for apply */
         ,primes_11ac106 /* primes */ /* argument 1 */
    , VOBA_BOX_END };
    apply_ret_57 = voba_apply(voba_symbol_value(len_11b0c56 /* len */),voba_make_tuple(apply_args_58));/* return value for apply */
    voba_value_t apply_ret_55 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
    voba_value_t apply_args_56 [] = { 1 /* prepare arguments for apply */
         ,apply_ret_57 /* argument 1 */
    , VOBA_BOX_END };
    apply_ret_55 = voba_apply(voba_symbol_value(print_11b0e16 /* print */),voba_make_tuple(apply_args_56));/* return value for apply */
}

