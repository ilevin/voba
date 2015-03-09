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
    voba_value_t get_class_1df06a6 /* get_class */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t str_1df0796 /* str */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t print_1df0896 /* print */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t len_1df0986 /* len */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t range_1df07c6 /* range */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _2B_1df0b86 /* + */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3E_1df0c76 /* > */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_1df0d66 /* < */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3E_3D_1df0ee6 /* >= */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_3D_1df0fd6 /* <= */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3D_3D_1df10c6 /* == */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _25_1df11b6 /* % */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_3C_1df12a6 /* << */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t array_1df1396 /* array */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t eq_1df1486 /* eq */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t i32_mod_1df1576 /* i32_mod */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t eq_i32_mod_0_1df16f6 /* eq_i32_mod_0 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i8_1df17e6 /* cls_i8 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i16_1df18d6 /* cls_i16 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i32_1df19c6 /* cls_i32 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_u8_1df1ab6 /* cls_u8 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_u16_1df1ba6 /* cls_u16 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_u32_1df1c96 /* cls_u32 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_float_1df1d86 /* cls_float */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_str_1df1e76 /* cls_str */ __attribute__((unused)) = VOBA_UNDEF;
VOBA_FUNC voba_value_t fun_3 (voba_value_t self, voba_value_t fun_args);
    voba_value_t const_array_28 __attribute__((unused)) = VOBA_UNDEF; /* var for constant*/
VOBA_FUNC voba_value_t fun_3 (voba_value_t self, voba_value_t fun_args)
{
    voba_value_t apply_ret_6 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
        voba_value_t apply_args_7 [] = { 2 /* prepare arguments for apply */
             ,voba_tuple_at(fun_args,0) /* argument 1 */
             ,voba_make_i32(2) /* argument 2 */
        };
        apply_ret_6 = voba_apply(voba_symbol_value(_25_1df11b6 /* % */),voba_make_tuple(apply_args_7));/* return value for apply */
        voba_value_t apply_ret_4 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
        voba_value_t apply_args_5 [] = { 2 /* prepare arguments for apply */
             ,apply_ret_6 /* argument 1 */
             ,voba_make_i32(0) /* argument 2 */
        };
        apply_ret_4 = voba_apply(voba_symbol_value(_3D_3D_1df10c6 /* == */),voba_make_tuple(apply_args_5));/* return value for apply */
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
    get_class_1df06a6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("get_class")));
}
{
    str_1df0796 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("str")));
}
{
    print_1df0896 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("print")));
}
{
    len_1df0986 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("len")));
}
{
    range_1df07c6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("range")));
}
{
    _2B_1df0b86 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("+")));
}
{
    _3E_1df0c76 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr(">")));
}
{
    _3C_1df0d66 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("<")));
}
{
    _3E_3D_1df0ee6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr(">=")));
}
{
    _3C_3D_1df0fd6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("<=")));
}
{
    _3D_3D_1df10c6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("==")));
}
{
    _25_1df11b6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("%")));
}
{
    _3C_3C_1df12a6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("<<")));
}
{
    array_1df1396 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("array")));
}
{
    eq_1df1486 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("eq")));
}
{
    i32_mod_1df1576 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("i32_mod")));
}
{
    eq_i32_mod_0_1df16f6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("eq_i32_mod_0")));
}
{
    cls_i8_1df17e6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_i8")));
}
{
    cls_i16_1df18d6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_i16")));
}
{
    cls_i32_1df19c6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_i32")));
}
{
    cls_u8_1df1ab6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_u8")));
}
{
    cls_u16_1df1ba6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_u16")));
}
{
    cls_u32_1df1c96 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_u32")));
}
{
    cls_float_1df1d86 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_float")));
}
{
    cls_str_1df1e76 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_str")));
}
    /*let env*/
    voba_value_t v_1dec436 /* v */ __attribute__((unused)) = VOBA_UNDEF;

    /*decl let return value*/
    voba_value_t let_ret_0 __attribute__((unused)) = VOBA_UNDEF;
    /*let body*/
    voba_value_t apply_ret_1 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
        voba_value_t apply_args_2 [] = { 2 /* prepare arguments for apply */
             ,voba_make_i32(0) /* argument 1 */
             ,voba_make_i32(10) /* argument 2 */
        };
        apply_ret_1 = voba_apply(voba_symbol_value(range_1df07c6 /* range */),voba_make_tuple(apply_args_2));/* return value for apply */
        voba_value_t for_final_11 __attribute__((unused)) = VOBA_UNDEF;/* return value for `for' statement */
        voba_value_t for_each_value_13 = VOBA_UNDEF;/* input value of each iteration  */
        voba_value_t for_each_output_16 __attribute__((unused)) = VOBA_UNDEF;/* output value of each iteration  */
        voba_value_t for_each_last_output_17 __attribute__((unused)) = VOBA_UNDEF;/* init value for `for' statement*/
        voba_func_t  for_each_iter_f_15 = NULL;/* iter for `for' statement*/
        voba_value_t for_each_iter_14 __attribute__((unused)) = VOBA_UNDEF;/* tmp args for `for` each */
        for_each_iter_f_15 = voba_gf_lookup(voba_symbol_value(gf_iter), voba_get_class(apply_ret_1)); /* initialized iterator */
        if(for_each_iter_f_15 == NULL){
             voba_throw_exception(voba_make_string(VOBA_CONST_CHAR("cannot find the iterator")));
        }
        voba_value_t for_each_iter_args_18 [] = {1, apply_ret_1}; /* prepare to invoke the iterator*/
        for_each_iter_14 = for_each_iter_f_15(voba_make_func(for_each_iter_f_15),voba_make_tuple(for_each_iter_args_18)); /*get the iterator*/ 
        for_each_last_output_17 = voba_make_i32(0) ; /* initialize the default initial value*/
        for_each_begin_8:{ /*prelude of `for' statement */
        voba_value_t for_each_args_12 [] = {1,apply_ret_1}; /* args for iterator*/
        for_each_value_13 = voba_apply(for_each_iter_14,voba_make_tuple(for_each_args_12)); /*invoke the iterator*/
        if(voba_eq(for_each_value_13,VOBA_DONE)){
            goto for_end_10;/* exit for loop */
        }
        /* try to apply for-if */
        voba_value_t if_args_22 [] = {1, for_each_value_13}; /* args for `if', the filter*/
        voba_value_t if_value_23 = voba_apply(voba_make_func(fun_3), voba_make_tuple(if_args_22)); /* for-if */
        if(voba_is_false(if_value_23)){ /* skip this iteration, continue  */
            goto for_each_begin_8;/* for-if failed */
        }
        /*for body begin*/
        /* match pattern 1 start*/
            /*empty label*/ {
                voba_value_t v_1ded3d6 /* v */ __attribute__((unused)) = VOBA_UNDEF;
                /* start to match the single variable v_1ded3d6 */
                if(voba_eq(v_1ded3d6,VOBA_UNDEF)){
                    v_1ded3d6 = for_each_value_13; /* when v_1ded3d6 is unbound, bound it*/
                }else{
                     /* when v_1ded3d6 is already bound, try to test whether equal*/
                     if(!voba_match_eq(v_1ded3d6,for_each_value_13)){
                          goto for_each_end_9;/*if not equal goto the fail lable */
                     }
                }
                /* end to match the single variable v_1ded3d6*/
                    voba_value_t apply_ret_20 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
                    voba_value_t apply_args_21 [] = { 1 /* prepare arguments for apply */
                         ,v_1ded3d6 /* v */ /* argument 1 */
                    };
                    apply_ret_20 = voba_apply(voba_symbol_value(print_1df0896 /* print */),voba_make_tuple(apply_args_21));/* return value for apply */
            
                for_each_output_16 = v_1ded3d6 /* v */; /* match statement return value*/
                goto for_each_end_9; // match goto end
        
            }
            /* match pattern 1 end*/ 
    
        /*for body end*/
        for_each_end_9: /* end label for each iteration */
        /* collect return value for `for' statement  */
        {voba_value_t acc_args_24 [] = {2, for_each_last_output_17, for_each_output_16}; /*arguments for accumulator*/
        for_each_last_output_17 = voba_apply(voba_symbol_value(_2B_1df0b86 /* + */), voba_make_tuple(acc_args_24));}/* apply the accumulator */
        for_final_11 = for_each_last_output_17;  /* assign the final value for `for' statement */
        goto for_each_begin_8; /* for goto begin */
        for_end_10:  /* end label `for' */
        if(0) goto for_end_10;  /* suppress warning `label at end of compound statement' */
        }
        voba_value_t v_25 __attribute__((unused)) = VOBA_UNDEF;
        v_25 = for_final_11;/* value for set var*/
        v_1dec436 = v_25; /* set v */
        voba_value_t apply_ret_26 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
        voba_value_t apply_args_27 [] = { 1 /* prepare arguments for apply */
             ,v_1dec436 /* v */ /* argument 1 */
        };
        apply_ret_26 = voba_apply(voba_symbol_value(print_1df0896 /* print */),voba_make_tuple(apply_args_27));/* return value for apply */

    let_ret_0 = apply_ret_26; /* set letreturn value*/
    voba_value_t const_tuple_in_c_29 [] = { 3,voba_make_i32(1),voba_make_i32(2),voba_make_i32(3)};
    const_array_28 = voba_array_from_tuple(voba_make_tuple(const_tuple_in_c_29)); /* constant */
    voba_value_t for_final_33 __attribute__((unused)) = VOBA_UNDEF;/* return value for `for' statement */
    voba_value_t for_each_value_35 = VOBA_UNDEF;/* input value of each iteration  */
    voba_value_t for_each_output_38 __attribute__((unused)) = VOBA_UNDEF;/* output value of each iteration  */
    voba_value_t for_each_last_output_39 __attribute__((unused)) = VOBA_UNDEF;/* init value for `for' statement*/
    voba_func_t  for_each_iter_f_37 = NULL;/* iter for `for' statement*/
    voba_value_t for_each_iter_36 __attribute__((unused)) = VOBA_UNDEF;/* tmp args for `for` each */
    for_each_iter_f_37 = voba_gf_lookup(voba_symbol_value(gf_iter), voba_get_class(const_array_28)); /* initialized iterator */
    if(for_each_iter_f_37 == NULL){
         voba_throw_exception(voba_make_string(VOBA_CONST_CHAR("cannot find the iterator")));
    }
    voba_value_t for_each_iter_args_40 [] = {1, const_array_28}; /* prepare to invoke the iterator*/
    for_each_iter_36 = for_each_iter_f_37(voba_make_func(for_each_iter_f_37),voba_make_tuple(for_each_iter_args_40)); /*get the iterator*/ 
    for_each_begin_30:{ /*prelude of `for' statement */
    voba_value_t for_each_args_34 [] = {1,const_array_28}; /* args for iterator*/
    for_each_value_35 = voba_apply(for_each_iter_36,voba_make_tuple(for_each_args_34)); /*invoke the iterator*/
    if(voba_eq(for_each_value_35,VOBA_DONE)){
        goto for_end_32;/* exit for loop */
    }
    /*for body begin*/
    /* match pattern 1 start*/
        /*empty label*/ {
            voba_value_t v_1dedd36 /* v */ __attribute__((unused)) = VOBA_UNDEF;
            /* start to match the single variable v_1dedd36 */
            if(voba_eq(v_1dedd36,VOBA_UNDEF)){
                v_1dedd36 = for_each_value_35; /* when v_1dedd36 is unbound, bound it*/
            }else{
                 /* when v_1dedd36 is already bound, try to test whether equal*/
                 if(!voba_match_eq(v_1dedd36,for_each_value_35)){
                      goto for_each_end_31;/*if not equal goto the fail lable */
                 }
            }
            /* end to match the single variable v_1dedd36*/
                voba_value_t apply_ret_42 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
                voba_value_t apply_args_43 [] = { 1 /* prepare arguments for apply */
                     ,v_1dedd36 /* v */ /* argument 1 */
                };
                apply_ret_42 = voba_apply(voba_symbol_value(print_1df0896 /* print */),voba_make_tuple(apply_args_43));/* return value for apply */
        
            for_each_output_38 = apply_ret_42; /* match statement return value*/
            goto for_each_end_31; // match goto end
    
        }
        /* match pattern 1 end*/ 

    /*for body end*/
    for_each_end_31: /* end label for each iteration */
    for_final_33 = for_each_last_output_39;  /* assign the final value for `for' statement */
    goto for_each_begin_30; /* for goto begin */
    for_end_32:  /* end label `for' */
    if(0) goto for_end_32;  /* suppress warning `label at end of compound statement' */
    }
}

