#include <stdint.h>
#include <assert.h>
#define EXEC_ONCE_TU_NAME "tests/break.voba built at 2015-5-2 13:9:8."
#define EXEC_ONCE_DEPENDS {"voba.module"};
#include <voba/value.h>
#include <voba/core/builtin.h> // import builtin by default
#include <exec_once.h>
#include <voba/module.h>
#define voba_match_eq voba_eql
    voba_value_t get_class_19bdfb6 /* get_class */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t str_19be0b6 /* str */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t print_19be1a6 /* print */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t len_19bdfe6 /* len */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t range_19be3a6 /* range */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _2B_19be496 /* + */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3E_19be586 /* > */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_19be706 /* < */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3E_3D_19be7f6 /* >= */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_3D_19be8e6 /* <= */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3D_3D_19be9d6 /* == */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _25_19beac6 /* % */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_3C_19bebb6 /* << */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t array_19beca6 /* array */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t eq_19bed96 /* eq */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t i32_mod_19bef16 /* i32_mod */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t eq_i32_mod_0_19bf006 /* eq_i32_mod_0 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i32_19bf0f6 /* cls_i32 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_float_19bf1e6 /* cls_float */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_str_19bf2d6 /* cls_str */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t array_2Diter_19bf3c6 /* array-iter */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t isa_19bf4b6 /* isa */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t match_2Dtuple_19bf5a6 /* match-tuple */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t tuple_19bf696 /* tuple */ __attribute__((unused)) = VOBA_UNDEF;
VOBA_FUNC voba_value_t fun_3 (voba_value_t fun, voba_value_t fun_args, voba_value_t* next_fun, voba_value_t next_args[]);
VOBA_FUNC voba_value_t fun_3 (voba_value_t fun, voba_value_t fun_args, voba_value_t* next_fun, voba_value_t next_args[])
{
    /* start of a match statement */
        voba_value_t match_ret_4 __attribute__((unused)) = VOBA_UNDEF; /* return value for match statement */
        /* match rule 1 start*/
        /*empty label*/ {
            voba_value_t x_19ba636 /* x */ __attribute__((unused)) = VOBA_UNDEF;
            /* evaluate first element of pattern */
            
            voba_value_t pattern_args_9 [] = {3, fun_args, voba_make_i32(-1), voba_make_i32(1), VOBA_BOX_END};
            voba_value_t pattern_ret_8 = voba_apply(voba_symbol_value(match_2Dtuple_19bf5a6 /* match-tuple */), voba_make_tuple(pattern_args_9));
            if(!voba_eq(VOBA_TRUE,pattern_ret_8)){
                goto match_label_failure_6; /* number of var does not match*/
            }
            /* extract 0 of 1 sub-value from the main value*/
            voba_value_t pattern_args_10 [] = {3, fun_args,voba_make_i32(0), voba_make_i32(1), VOBA_BOX_END};
            voba_value_t pattern_ret_11 = voba_apply(voba_symbol_value(match_2Dtuple_19bf5a6 /* match-tuple */),voba_make_tuple(pattern_args_10));/* the sub-value 0 of 1*/
            /* start to match the single variable x_19ba636 */
            if(voba_eq(x_19ba636,VOBA_UNDEF)){
                x_19ba636 = pattern_ret_11; /* when x_19ba636 is unbound, bound it*/
            }else{
                 /* when x_19ba636 is already bound, try to test whether equal*/
                 if(!voba_match_eq(x_19ba636,pattern_ret_11)){
                      goto match_label_failure_6;/*if not equal goto the fail lable */
                 }
            }
            /* end to match the single variable x_19ba636*/
                voba_value_t apply_ret_14 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
                voba_value_t apply_args_15 [] = { 2 /* prepare arguments for apply */
                     ,x_19ba636 /* x */ /* argument 1 */
                     ,voba_make_i32(2) /* argument 2 */
                , VOBA_BOX_END };
                apply_ret_14 = voba_apply(voba_symbol_value(_25_19beac6 /* % */),voba_make_tuple(apply_args_15));/* return value for apply */
                voba_value_t apply_ret_12 = VOBA_TAIL_CALL;/* tail call for `apply` */
                next_args[0] = 2;/* set the number of argument for tail call.*/
                *next_fun = voba_symbol_value(_3D_3D_19be9d6 /* == */);/*set the next function to call*/
                /* start to fill in argument for tail call */
                next_args[1] = apply_ret_14; /* argument 1 */
                next_args[2] = voba_make_i32(0); /* argument 2 */
                next_args[3] = VOBA_BOX_END; /* argument 3 */
        
            match_ret_4 = apply_ret_12; /* match statement return value*/
            goto match_label_success_5; // match goto end
    
        }
        /* match rule 1 end*/ 
        match_label_failure_6:if(0) goto match_label_failure_6;/*suppress warning*/; /* the whole match statement failed. */
        voba_throw_exception(voba_make_string(voba_str_from_cstr("no match")));
        match_label_success_5:; /* the whole match statement success */
        /* end of a match statement */
    return match_ret_4; /* return fun_3 */
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
    get_class_19bdfb6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("get_class")));
}
{
    str_19be0b6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("str")));
}
{
    print_19be1a6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("print")));
}
{
    len_19bdfe6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("len")));
}
{
    range_19be3a6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("range")));
}
{
    _2B_19be496 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("+")));
}
{
    _3E_19be586 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr(">")));
}
{
    _3C_19be706 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("<")));
}
{
    _3E_3D_19be7f6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr(">=")));
}
{
    _3C_3D_19be8e6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("<=")));
}
{
    _3D_3D_19be9d6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("==")));
}
{
    _25_19beac6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("%")));
}
{
    _3C_3C_19bebb6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("<<")));
}
{
    array_19beca6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("array")));
}
{
    eq_19bed96 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("eq")));
}
{
    i32_mod_19bef16 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("i32_mod")));
}
{
    eq_i32_mod_0_19bf006 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("eq_i32_mod_0")));
}
{
    cls_i32_19bf0f6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_i32")));
}
{
    cls_float_19bf1e6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_float")));
}
{
    cls_str_19bf2d6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_str")));
}
{
    array_2Diter_19bf3c6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("array-iter")));
}
{
    isa_19bf4b6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("isa")));
}
{
    match_2Dtuple_19bf5a6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("match-tuple")));
}
{
    tuple_19bf696 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("tuple")));
}
    /*let env*/
    voba_value_t v_19b9de6 /* v */ __attribute__((unused)) = VOBA_UNDEF;

    /*decl let return value*/
    voba_value_t let_ret_0 __attribute__((unused)) = VOBA_UNDEF;
    /*let body*/
    voba_value_t apply_ret_1 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
        voba_value_t apply_args_2 [] = { 2 /* prepare arguments for apply */
             ,voba_make_i32(0) /* argument 1 */
             ,voba_make_i32(10) /* argument 2 */
        , VOBA_BOX_END };
        apply_ret_1 = voba_apply(voba_symbol_value(range_19be3a6 /* range */),voba_make_tuple(apply_args_2));/* return value for apply */
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
        for_each_iter_22 = apply_ret_1;/* get for-each-iterator from for-each-value */
        for_each_last_output_26 = voba_make_i32(0) ; /* initialize the default initial value*/
        for_each_begin_16:{ /*prelude of `for' statement */
        for_each_input_21 = voba_apply(for_each_iter_22, voba_make_tuple(for_each_iter_args_27)); /*invoke the iterator to get the input value*/
        if(voba_eq(for_each_input_21,VOBA_DONE)){
            goto for_end_19;/* exit for loop */
        }
        /* try to apply for-if */
        voba_value_t if_args_34 [] = {1, for_each_input_21, VOBA_BOX_END}; /* args for `if', the filter*/
        voba_value_t if_value_35 = voba_apply(voba_make_func(fun_3), voba_make_tuple(if_args_34)); /* for-if */
        if(voba_is_false(if_value_35)){ /* skip this iteration, continue  */
            goto for_each_begin_16;/* for-if failed */
        }
        /*for body begin*/
        /* match rule 1 start*/
            /*empty label*/ {
                voba_value_t v_19bae06 /* v */ __attribute__((unused)) = VOBA_UNDEF;
                /* start to match the single variable v_19bae06 */
                if(voba_eq(v_19bae06,VOBA_UNDEF)){
                    v_19bae06 = for_each_input_21; /* when v_19bae06 is unbound, bound it*/
                }else{
                     /* when v_19bae06 is already bound, try to test whether equal*/
                     if(!voba_match_eq(v_19bae06,for_each_input_21)){
                          goto rule_label_0_29;/*if not equal goto the fail lable */
                     }
                }
                /* end to match the single variable v_19bae06*/
                voba_value_t apply_ret_30 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
                voba_value_t apply_args_31 [] = { 2 /* prepare arguments for apply */
                     ,v_19bae06 /* v */ /* argument 1 */
                     ,voba_make_i32(5) /* argument 2 */
                , VOBA_BOX_END };
                apply_ret_30 = voba_apply(voba_symbol_value(_3E_19be586 /* > */),voba_make_tuple(apply_args_31));/* return value for apply */
                if(voba_eq(apply_ret_30,VOBA_FALSE)){/* if pattern guard failed */
                     goto rule_label_0_29; /* goto the pattern failed label */
                }
                    for_ret_value_20 = voba_make_string(voba_str_from_cstr("hello")); /* break the `for' loop */
                    goto for_end_19;
            
                for_each_output_25 = voba_make_string(voba_str_from_cstr("hello")); /* match statement return value*/
                goto for_each_end_match_success_17; // match goto end
        
            }
            /* match rule 1 end*/ 
            /* match rule 2 start*/
            rule_label_0_29: {
                voba_value_t v_19bb556 /* v */ __attribute__((unused)) = VOBA_UNDEF;
                /* start to match the single variable v_19bb556 */
                if(voba_eq(v_19bb556,VOBA_UNDEF)){
                    v_19bb556 = for_each_input_21; /* when v_19bb556 is unbound, bound it*/
                }else{
                     /* when v_19bb556 is already bound, try to test whether equal*/
                     if(!voba_match_eq(v_19bb556,for_each_input_21)){
                          goto for_each_end_match_failure_18;/*if not equal goto the fail lable */
                     }
                }
                /* end to match the single variable v_19bb556*/
                    voba_value_t apply_ret_32 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
                    voba_value_t apply_args_33 [] = { 1 /* prepare arguments for apply */
                         ,v_19bb556 /* v */ /* argument 1 */
                    , VOBA_BOX_END };
                    apply_ret_32 = voba_apply(voba_symbol_value(print_19be1a6 /* print */),voba_make_tuple(apply_args_33));/* return value for apply */
            
                for_each_output_25 = v_19bb556 /* v */; /* match statement return value*/
                goto for_each_end_match_success_17; // match goto end
        
            }
            /* match rule 2 end*/ 
    
        /*for body end*/
        for_each_end_match_failure_18: /* end label for each iteration if match failure*/
        voba_throw_exception(voba_make_string(voba_str_from_cstr("no match")));
        for_each_end_match_success_17: /* end label for each iteration if match success*/
        /* collect return value for `for' statement  */
        {voba_value_t acc_args_36 [] = {2, for_each_last_output_26, for_each_output_25, VOBA_BOX_END}; /*arguments for accumulator*/
        for_each_last_output_26 = voba_apply(voba_symbol_value(_2B_19be496 /* + */), voba_make_tuple(acc_args_36));}/* apply the accumulator */
        for_ret_value_20 = for_each_last_output_26;  /* assign the final value for `for' statement */
        goto for_each_begin_16; /* for goto begin */
        for_end_19:  /* end label `for' */
        if(0) goto for_end_19;  /* suppress warning `label at end of compound statement' */
        }
        voba_value_t v_37 __attribute__((unused)) = VOBA_UNDEF;
        v_37 = for_ret_value_20;/* value for set var*/
        v_19b9de6 = v_37; /* set v */
        voba_value_t apply_ret_38 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
        voba_value_t apply_args_39 [] = { 1 /* prepare arguments for apply */
             ,v_19b9de6 /* v */ /* argument 1 */
        , VOBA_BOX_END };
        apply_ret_38 = voba_apply(voba_symbol_value(print_19be1a6 /* print */),voba_make_tuple(apply_args_39));/* return value for apply */

    let_ret_0 = apply_ret_38; /* set letreturn value*/
}

