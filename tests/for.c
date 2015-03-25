#include <stdint.h>
#include <assert.h>
#define EXEC_ONCE_TU_NAME "tests/for.voba built at 2015-3-25 5:5:30."
#define EXEC_ONCE_DEPENDS {"voba.module"};
#include <voba/value.h>
#include <voba/core/builtin.h> // import builtin by default
#include <exec_once.h>
#include <voba/module.h>
#define voba_match_eq voba_eql
static voba_value_t gf_match __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t get_class_fa3876 /* get_class */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t str_fa3966 /* str */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t print_fa3a66 /* print */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t len_fa3b56 /* len */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t range_fa3996 /* range */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _2B_fa3d56 /* + */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3E_fa3e46 /* > */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_fa3f36 /* < */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3E_3D_fa40b6 /* >= */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_3D_fa41a6 /* <= */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3D_3D_fa4296 /* == */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _25_fa4386 /* % */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_3C_fa4476 /* << */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t array_fa4566 /* array */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t eq_fa4656 /* eq */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t i32_mod_fa4746 /* i32_mod */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t eq_i32_mod_0_fa48c6 /* eq_i32_mod_0 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i8_fa49b6 /* cls_i8 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i16_fa4aa6 /* cls_i16 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i32_fa4b96 /* cls_i32 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_u8_fa4c86 /* cls_u8 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_u16_fa4d76 /* cls_u16 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_u32_fa4e66 /* cls_u32 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_float_fa4f56 /* cls_float */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_str_fa5046 /* cls_str */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t array_2Diter_fa5136 /* array-iter */ __attribute__((unused)) = VOBA_UNDEF;
VOBA_FUNC voba_value_t fun_3 (voba_value_t self, voba_value_t fun_args);
    voba_value_t const_array_29 __attribute__((unused)) = VOBA_UNDEF; /* var for constant*/
VOBA_FUNC voba_value_t fun_3 (voba_value_t self, voba_value_t fun_args)
{
    voba_value_t apply_ret_6 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
        voba_value_t apply_args_7 [] = { 2 /* prepare arguments for apply */
             ,voba_tuple_at(fun_args,0) /* argument 1 */
             ,voba_make_i32(2) /* argument 2 */
        };
        apply_ret_6 = voba_apply(voba_symbol_value(_25_fa4386 /* % */),voba_make_tuple(apply_args_7));/* return value for apply */
        voba_value_t apply_ret_4 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
        voba_value_t apply_args_5 [] = { 2 /* prepare arguments for apply */
             ,apply_ret_6 /* argument 1 */
             ,voba_make_i32(0) /* argument 2 */
        };
        apply_ret_4 = voba_apply(voba_symbol_value(_3D_3D_fa4296 /* == */),voba_make_tuple(apply_args_5));/* return value for apply */
    return apply_ret_4; /* return fun_3 */
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
    get_class_fa3876 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("get_class")));
}
{
    str_fa3966 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("str")));
}
{
    print_fa3a66 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("print")));
}
{
    len_fa3b56 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("len")));
}
{
    range_fa3996 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("range")));
}
{
    _2B_fa3d56 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("+")));
}
{
    _3E_fa3e46 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr(">")));
}
{
    _3C_fa3f36 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("<")));
}
{
    _3E_3D_fa40b6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr(">=")));
}
{
    _3C_3D_fa41a6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("<=")));
}
{
    _3D_3D_fa4296 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("==")));
}
{
    _25_fa4386 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("%")));
}
{
    _3C_3C_fa4476 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("<<")));
}
{
    array_fa4566 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("array")));
}
{
    eq_fa4656 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("eq")));
}
{
    i32_mod_fa4746 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("i32_mod")));
}
{
    eq_i32_mod_0_fa48c6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("eq_i32_mod_0")));
}
{
    cls_i8_fa49b6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_i8")));
}
{
    cls_i16_fa4aa6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_i16")));
}
{
    cls_i32_fa4b96 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_i32")));
}
{
    cls_u8_fa4c86 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_u8")));
}
{
    cls_u16_fa4d76 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_u16")));
}
{
    cls_u32_fa4e66 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_u32")));
}
{
    cls_float_fa4f56 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_float")));
}
{
    cls_str_fa5046 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_str")));
}
{
    array_2Diter_fa5136 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("array-iter")));
}
    /*let env*/
    voba_value_t v_f9f4f6 /* v */ __attribute__((unused)) = VOBA_UNDEF;

    /*decl let return value*/
    voba_value_t let_ret_0 __attribute__((unused)) = VOBA_UNDEF;
    /*let body*/
    voba_value_t apply_ret_1 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
        voba_value_t apply_args_2 [] = { 2 /* prepare arguments for apply */
             ,voba_make_i32(0) /* argument 1 */
             ,voba_make_i32(10) /* argument 2 */
        };
        apply_ret_1 = voba_apply(voba_symbol_value(range_fa3996 /* range */),voba_make_tuple(apply_args_2));/* return value for apply */
        voba_value_t for_final_11 __attribute__((unused)) = VOBA_UNDEF;/* return value for `for' statement */
        voba_value_t for_each_value_13 = VOBA_UNDEF;/* input value of each iteration  */
        voba_value_t for_each_output_15 __attribute__((unused)) = VOBA_UNDEF;/* output value of each iteration  */
        voba_value_t for_each_last_output_16 __attribute__((unused)) = VOBA_UNDEF;/* init value for `for' statement*/
        voba_value_t for_each_iter_14 __attribute__((unused)) = VOBA_UNDEF;/* tmp args for `for` each */
        //voba_value_t for_each_iter_args_17 [] = {0,};
        //for_each_iter_14 = voba_apply(apply_ret_1, voba_make_tuple(for_each_iter_args_17));
        for_each_iter_14 = apply_ret_1;/* get for-each-iterator from for-each-value */
        for_each_last_output_16 = voba_make_i32(0) ; /* initialize the default initial value*/
        for_each_begin_8:{ /*prelude of `for' statement */
        voba_value_t for_each_args_12 [] = {0}; /* args for iterator*/
        for_each_value_13 = voba_apply(for_each_iter_14,voba_make_tuple(for_each_args_12)); /*invoke the iterator*/
        if(voba_eq(for_each_value_13,VOBA_DONE)){
            goto for_end_10;/* exit for loop */
        }
        /* try to apply for-if */
        voba_value_t if_args_21 [] = {1, for_each_value_13}; /* args for `if', the filter*/
        voba_value_t if_value_22 = voba_apply(voba_make_func(fun_3), voba_make_tuple(if_args_21)); /* for-if */
        if(voba_is_false(if_value_22)){ /* skip this iteration, continue  */
            goto for_each_begin_8;/* for-if failed */
        }
        /*for body begin*/
        /* match pattern 1 start*/
            /*empty label*/ {
                voba_value_t v_fa0496 /* v */ __attribute__((unused)) = VOBA_UNDEF;
                /* start to match the single variable v_fa0496 */
                if(voba_eq(v_fa0496,VOBA_UNDEF)){
                    v_fa0496 = for_each_value_13; /* when v_fa0496 is unbound, bound it*/
                }else{
                     /* when v_fa0496 is already bound, try to test whether equal*/
                     if(!voba_match_eq(v_fa0496,for_each_value_13)){
                          goto for_each_end_9;/*if not equal goto the fail lable */
                     }
                }
                /* end to match the single variable v_fa0496*/
                    voba_value_t apply_ret_19 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
                    voba_value_t apply_args_20 [] = { 1 /* prepare arguments for apply */
                         ,v_fa0496 /* v */ /* argument 1 */
                    };
                    apply_ret_19 = voba_apply(voba_symbol_value(print_fa3a66 /* print */),voba_make_tuple(apply_args_20));/* return value for apply */
            
                for_each_output_15 = v_fa0496 /* v */; /* match statement return value*/
                goto for_each_end_9; // match goto end
        
            }
            /* match pattern 1 end*/ 
    
        /*for body end*/
        for_each_end_9: /* end label for each iteration */
        /* collect return value for `for' statement  */
        {voba_value_t acc_args_23 [] = {2, for_each_last_output_16, for_each_output_15}; /*arguments for accumulator*/
        for_each_last_output_16 = voba_apply(voba_symbol_value(_2B_fa3d56 /* + */), voba_make_tuple(acc_args_23));}/* apply the accumulator */
        for_final_11 = for_each_last_output_16;  /* assign the final value for `for' statement */
        goto for_each_begin_8; /* for goto begin */
        for_end_10:  /* end label `for' */
        if(0) goto for_end_10;  /* suppress warning `label at end of compound statement' */
        }
        voba_value_t v_24 __attribute__((unused)) = VOBA_UNDEF;
        v_24 = for_final_11;/* value for set var*/
        v_f9f4f6 = v_24; /* set v */
        voba_value_t apply_ret_25 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
        voba_value_t apply_args_26 [] = { 1 /* prepare arguments for apply */
             ,v_f9f4f6 /* v */ /* argument 1 */
        };
        apply_ret_25 = voba_apply(voba_symbol_value(print_fa3a66 /* print */),voba_make_tuple(apply_args_26));/* return value for apply */

    let_ret_0 = apply_ret_25; /* set letreturn value*/
    voba_value_t const_tuple_in_c_30 [] = { 3,voba_make_i32(1),voba_make_i32(2),voba_make_i32(3)};
    const_array_29 = voba_array_from_tuple(voba_make_tuple(const_tuple_in_c_30)); /* constant */
    voba_value_t apply_ret_27 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
    voba_value_t apply_args_28 [] = { 1 /* prepare arguments for apply */
         ,const_array_29 /* argument 1 */
    };
    apply_ret_27 = voba_apply(voba_symbol_value(array_2Diter_fa5136 /* array-iter */),voba_make_tuple(apply_args_28));/* return value for apply */
    voba_value_t for_final_34 __attribute__((unused)) = VOBA_UNDEF;/* return value for `for' statement */
    voba_value_t for_each_value_36 = VOBA_UNDEF;/* input value of each iteration  */
    voba_value_t for_each_output_38 __attribute__((unused)) = VOBA_UNDEF;/* output value of each iteration  */
    voba_value_t for_each_last_output_39 __attribute__((unused)) = VOBA_UNDEF;/* init value for `for' statement*/
    voba_value_t for_each_iter_37 __attribute__((unused)) = VOBA_UNDEF;/* tmp args for `for` each */
    //voba_value_t for_each_iter_args_40 [] = {0,};
    //for_each_iter_37 = voba_apply(apply_ret_27, voba_make_tuple(for_each_iter_args_40));
    for_each_iter_37 = apply_ret_27;/* get for-each-iterator from for-each-value */
    for_each_begin_31:{ /*prelude of `for' statement */
    voba_value_t for_each_args_35 [] = {0}; /* args for iterator*/
    for_each_value_36 = voba_apply(for_each_iter_37,voba_make_tuple(for_each_args_35)); /*invoke the iterator*/
    if(voba_eq(for_each_value_36,VOBA_DONE)){
        goto for_end_33;/* exit for loop */
    }
    /*for body begin*/
    /* match pattern 1 start*/
        /*empty label*/ {
            voba_value_t v_fa0df6 /* v */ __attribute__((unused)) = VOBA_UNDEF;
            /* start to match the single variable v_fa0df6 */
            if(voba_eq(v_fa0df6,VOBA_UNDEF)){
                v_fa0df6 = for_each_value_36; /* when v_fa0df6 is unbound, bound it*/
            }else{
                 /* when v_fa0df6 is already bound, try to test whether equal*/
                 if(!voba_match_eq(v_fa0df6,for_each_value_36)){
                      goto for_each_end_32;/*if not equal goto the fail lable */
                 }
            }
            /* end to match the single variable v_fa0df6*/
                voba_value_t apply_ret_42 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
                voba_value_t apply_args_43 [] = { 1 /* prepare arguments for apply */
                     ,v_fa0df6 /* v */ /* argument 1 */
                };
                apply_ret_42 = voba_apply(voba_symbol_value(print_fa3a66 /* print */),voba_make_tuple(apply_args_43));/* return value for apply */
        
            for_each_output_38 = apply_ret_42; /* match statement return value*/
            goto for_each_end_32; // match goto end
    
        }
        /* match pattern 1 end*/ 

    /*for body end*/
    for_each_end_32: /* end label for each iteration */
    for_final_34 = for_each_last_output_39;  /* assign the final value for `for' statement */
    goto for_each_begin_31; /* for goto begin */
    for_end_33:  /* end label `for' */
    if(0) goto for_end_33;  /* suppress warning `label at end of compound statement' */
    }
}

