#include <stdint.h>
#include <assert.h>
#define EXEC_ONCE_TU_NAME "tests/break.voba built at 2015-3-25 5:5:30."
#define EXEC_ONCE_DEPENDS {"voba.module"};
#include <voba/value.h>
#include <voba/core/builtin.h> // import builtin by default
#include <exec_once.h>
#include <voba/module.h>
#define voba_match_eq voba_eql
static voba_value_t gf_match __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t get_class_bc1426 /* get_class */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t str_bc1516 /* str */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t print_bc1616 /* print */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t len_bc1706 /* len */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t range_bc1546 /* range */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _2B_bc1906 /* + */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3E_bc19f6 /* > */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_bc1ae6 /* < */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3E_3D_bc1c66 /* >= */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_3D_bc1d56 /* <= */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3D_3D_bc1e46 /* == */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _25_bc1f36 /* % */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_3C_bc2026 /* << */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t array_bc2116 /* array */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t eq_bc2206 /* eq */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t i32_mod_bc22f6 /* i32_mod */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t eq_i32_mod_0_bc2476 /* eq_i32_mod_0 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i8_bc2566 /* cls_i8 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i16_bc2656 /* cls_i16 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i32_bc2746 /* cls_i32 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_u8_bc2836 /* cls_u8 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_u16_bc2926 /* cls_u16 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_u32_bc2a16 /* cls_u32 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_float_bc2b06 /* cls_float */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_str_bc2bf6 /* cls_str */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t array_2Diter_bc2ce6 /* array-iter */ __attribute__((unused)) = VOBA_UNDEF;
VOBA_FUNC voba_value_t fun_3 (voba_value_t self, voba_value_t fun_args);
VOBA_FUNC voba_value_t fun_3 (voba_value_t self, voba_value_t fun_args)
{
    voba_value_t apply_ret_6 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
        voba_value_t apply_args_7 [] = { 2 /* prepare arguments for apply */
             ,voba_tuple_at(fun_args,0) /* argument 1 */
             ,voba_make_i32(2) /* argument 2 */
        };
        apply_ret_6 = voba_apply(voba_symbol_value(_25_bc1f36 /* % */),voba_make_tuple(apply_args_7));/* return value for apply */
        voba_value_t apply_ret_4 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
        voba_value_t apply_args_5 [] = { 2 /* prepare arguments for apply */
             ,apply_ret_6 /* argument 1 */
             ,voba_make_i32(0) /* argument 2 */
        };
        apply_ret_4 = voba_apply(voba_symbol_value(_3D_3D_bc1e46 /* == */),voba_make_tuple(apply_args_5));/* return value for apply */
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
    get_class_bc1426 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("get_class")));
}
{
    str_bc1516 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("str")));
}
{
    print_bc1616 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("print")));
}
{
    len_bc1706 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("len")));
}
{
    range_bc1546 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("range")));
}
{
    _2B_bc1906 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("+")));
}
{
    _3E_bc19f6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr(">")));
}
{
    _3C_bc1ae6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("<")));
}
{
    _3E_3D_bc1c66 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr(">=")));
}
{
    _3C_3D_bc1d56 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("<=")));
}
{
    _3D_3D_bc1e46 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("==")));
}
{
    _25_bc1f36 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("%")));
}
{
    _3C_3C_bc2026 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("<<")));
}
{
    array_bc2116 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("array")));
}
{
    eq_bc2206 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("eq")));
}
{
    i32_mod_bc22f6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("i32_mod")));
}
{
    eq_i32_mod_0_bc2476 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("eq_i32_mod_0")));
}
{
    cls_i8_bc2566 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_i8")));
}
{
    cls_i16_bc2656 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_i16")));
}
{
    cls_i32_bc2746 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_i32")));
}
{
    cls_u8_bc2836 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_u8")));
}
{
    cls_u16_bc2926 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_u16")));
}
{
    cls_u32_bc2a16 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_u32")));
}
{
    cls_float_bc2b06 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_float")));
}
{
    cls_str_bc2bf6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_str")));
}
{
    array_2Diter_bc2ce6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("array-iter")));
}
    /*let env*/
    voba_value_t v_bbd3e6 /* v */ __attribute__((unused)) = VOBA_UNDEF;

    /*decl let return value*/
    voba_value_t let_ret_0 __attribute__((unused)) = VOBA_UNDEF;
    /*let body*/
    voba_value_t apply_ret_1 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
        voba_value_t apply_args_2 [] = { 2 /* prepare arguments for apply */
             ,voba_make_i32(0) /* argument 1 */
             ,voba_make_i32(10) /* argument 2 */
        };
        apply_ret_1 = voba_apply(voba_symbol_value(range_bc1546 /* range */),voba_make_tuple(apply_args_2));/* return value for apply */
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
        voba_value_t if_args_24 [] = {1, for_each_value_13}; /* args for `if', the filter*/
        voba_value_t if_value_25 = voba_apply(voba_make_func(fun_3), voba_make_tuple(if_args_24)); /* for-if */
        if(voba_is_false(if_value_25)){ /* skip this iteration, continue  */
            goto for_each_begin_8;/* for-if failed */
        }
        /*for body begin*/
        /* match pattern 1 start*/
            /*empty label*/ {
                voba_value_t v_bbe386 /* v */ __attribute__((unused)) = VOBA_UNDEF;
                /* start to match the single variable v_bbe386 */
                if(voba_eq(v_bbe386,VOBA_UNDEF)){
                    v_bbe386 = for_each_value_13; /* when v_bbe386 is unbound, bound it*/
                }else{
                     /* when v_bbe386 is already bound, try to test whether equal*/
                     if(!voba_match_eq(v_bbe386,for_each_value_13)){
                          goto match_label_next_19;/*if not equal goto the fail lable */
                     }
                }
                /* end to match the single variable v_bbe386*/
                voba_value_t apply_ret_20 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
                voba_value_t apply_args_21 [] = { 2 /* prepare arguments for apply */
                     ,v_bbe386 /* v */ /* argument 1 */
                     ,voba_make_i32(5) /* argument 2 */
                };
                apply_ret_20 = voba_apply(voba_symbol_value(_3E_bc19f6 /* > */),voba_make_tuple(apply_args_21));/* return value for apply */
                if(voba_eq(apply_ret_20,VOBA_FALSE)){/* if pattern guard failed */
                     goto match_label_next_19; /* goto the pattern failed label */
                }
                    for_final_11 = voba_make_string(voba_str_from_cstr("hello")); /* break the `for' loop */
                    goto for_end_10;
            
                for_each_output_15 = voba_make_string(voba_str_from_cstr("hello")); /* match statement return value*/
                goto for_each_end_9; // match goto end
        
            }
            /* match pattern 1 end*/ 
            /* match pattern 2 start*/
            match_label_next_19: {
                voba_value_t v_bbeae6 /* v */ __attribute__((unused)) = VOBA_UNDEF;
                /* start to match the single variable v_bbeae6 */
                if(voba_eq(v_bbeae6,VOBA_UNDEF)){
                    v_bbeae6 = for_each_value_13; /* when v_bbeae6 is unbound, bound it*/
                }else{
                     /* when v_bbeae6 is already bound, try to test whether equal*/
                     if(!voba_match_eq(v_bbeae6,for_each_value_13)){
                          goto for_each_end_9;/*if not equal goto the fail lable */
                     }
                }
                /* end to match the single variable v_bbeae6*/
                    voba_value_t apply_ret_22 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
                    voba_value_t apply_args_23 [] = { 1 /* prepare arguments for apply */
                         ,v_bbeae6 /* v */ /* argument 1 */
                    };
                    apply_ret_22 = voba_apply(voba_symbol_value(print_bc1616 /* print */),voba_make_tuple(apply_args_23));/* return value for apply */
            
                for_each_output_15 = v_bbeae6 /* v */; /* match statement return value*/
                goto for_each_end_9; // match goto end
        
            }
            /* match pattern 2 end*/ 
    
        /*for body end*/
        for_each_end_9: /* end label for each iteration */
        /* collect return value for `for' statement  */
        {voba_value_t acc_args_26 [] = {2, for_each_last_output_16, for_each_output_15}; /*arguments for accumulator*/
        for_each_last_output_16 = voba_apply(voba_symbol_value(_2B_bc1906 /* + */), voba_make_tuple(acc_args_26));}/* apply the accumulator */
        for_final_11 = for_each_last_output_16;  /* assign the final value for `for' statement */
        goto for_each_begin_8; /* for goto begin */
        for_end_10:  /* end label `for' */
        if(0) goto for_end_10;  /* suppress warning `label at end of compound statement' */
        }
        voba_value_t v_27 __attribute__((unused)) = VOBA_UNDEF;
        v_27 = for_final_11;/* value for set var*/
        v_bbd3e6 = v_27; /* set v */
        voba_value_t apply_ret_28 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
        voba_value_t apply_args_29 [] = { 1 /* prepare arguments for apply */
             ,v_bbd3e6 /* v */ /* argument 1 */
        };
        apply_ret_28 = voba_apply(voba_symbol_value(print_bc1616 /* print */),voba_make_tuple(apply_args_29));/* return value for apply */

    let_ret_0 = apply_ret_28; /* set letreturn value*/
}

