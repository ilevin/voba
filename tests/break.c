#include <stdint.h>
#include <assert.h>
#define EXEC_ONCE_TU_NAME "TODO ADD "
#define EXEC_ONCE_DEPENDS {"voba.module",NULL};
#include <voba/value.h>
#include <voba/core/builtin.h> // import builtin by default
#include <exec_once.h>
#include <voba/module.h>
#define voba_match_eq voba_eql
static voba_value_t gf_match __attribute__((unused)) = VOBA_UNDEF;
static voba_value_t gf_iter __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t get_class_213e666 /* get_class */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t str_213e756 /* str */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t print_213e856 /* print */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t len_213e946 /* len */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t range_213e786 /* range */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _2B_213eb46 /* + */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3E_213ec36 /* > */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_213ed26 /* < */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3E_3D_213eea6 /* >= */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_3D_213ef96 /* <= */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3D_3D_213f086 /* == */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _25_213f176 /* % */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_3C_213f266 /* << */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t array_213f356 /* array */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t eq_213f446 /* eq */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t i32_mod_213f536 /* i32_mod */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t eq_i32_mod_0_213f6b6 /* eq_i32_mod_0 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i8_213f7a6 /* cls_i8 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i16_213f896 /* cls_i16 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i32_213f986 /* cls_i32 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_u8_213fa76 /* cls_u8 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_u16_213fb66 /* cls_u16 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_u32_213fc56 /* cls_u32 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_float_213fd46 /* cls_float */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_str_213fe36 /* cls_str */ __attribute__((unused)) = VOBA_UNDEF;
VOBA_FUNC voba_value_t fun_3 (voba_value_t self, voba_value_t fun_args);
VOBA_FUNC voba_value_t fun_3 (voba_value_t self, voba_value_t fun_args)
{
    voba_value_t apply_ret_6 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
        voba_value_t apply_args_7 [] = { 2 /* prepare arguments for apply */
             ,voba_tuple_at(fun_args,0) /* argument 1 */
             ,voba_make_i32(2) /* argument 2 */
        };
        apply_ret_6 = voba_apply(voba_symbol_value(_25_213f176 /* % */),voba_make_tuple(apply_args_7));/* return value for apply */
        voba_value_t apply_ret_4 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
        voba_value_t apply_args_5 [] = { 2 /* prepare arguments for apply */
             ,apply_ret_6 /* argument 1 */
             ,voba_make_i32(0) /* argument 2 */
        };
        apply_ret_4 = voba_apply(voba_symbol_value(_3D_3D_213f086 /* == */),voba_make_tuple(apply_args_5));/* return value for apply */
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
    voba_import_module(name,id,symbols);
}
{
    gf_match = voba_module_var("__lang__","__lang__","__match__");
}
{
    gf_iter = voba_module_var("__lang__","__lang__","__iter__");
}
{
    get_class_213e666 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","get_class");
}
{
    str_213e756 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","str");
}
{
    print_213e856 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","print");
}
{
    len_213e946 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","len");
}
{
    range_213e786 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","range");
}
{
    _2B_213eb46 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","+");
}
{
    _3E_213ec36 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",">");
}
{
    _3C_213ed26 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","<");
}
{
    _3E_3D_213eea6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",">=");
}
{
    _3C_3D_213ef96 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","<=");
}
{
    _3D_3D_213f086 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","==");
}
{
    _25_213f176 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","%");
}
{
    _3C_3C_213f266 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","<<");
}
{
    array_213f356 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","array");
}
{
    eq_213f446 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","eq");
}
{
    i32_mod_213f536 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","i32_mod");
}
{
    eq_i32_mod_0_213f6b6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","eq_i32_mod_0");
}
{
    cls_i8_213f7a6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","cls_i8");
}
{
    cls_i16_213f896 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","cls_i16");
}
{
    cls_i32_213f986 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","cls_i32");
}
{
    cls_u8_213fa76 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","cls_u8");
}
{
    cls_u16_213fb66 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","cls_u16");
}
{
    cls_u32_213fc56 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","cls_u32");
}
{
    cls_float_213fd46 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","cls_float");
}
{
    cls_str_213fe36 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","cls_str");
}
    /*let env*/
    voba_value_t v_213a5d6 /* v */ __attribute__((unused)) = VOBA_UNDEF;

    /*decl let return value*/
    voba_value_t let_ret_0 __attribute__((unused)) = VOBA_UNDEF;
    /*let body*/
    voba_value_t apply_ret_1 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
        voba_value_t apply_args_2 [] = { 2 /* prepare arguments for apply */
             ,voba_make_i32(0) /* argument 1 */
             ,voba_make_i32(10) /* argument 2 */
        };
        apply_ret_1 = voba_apply(voba_symbol_value(range_213e786 /* range */),voba_make_tuple(apply_args_2));/* return value for apply */
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
        voba_value_t if_args_25 [] = {1, for_each_value_13}; /* args for `if', the filter*/
        voba_value_t if_value_26 = voba_apply(voba_make_func(fun_3), voba_make_tuple(if_args_25)); /* for-if */
        if(voba_is_false(if_value_26)){ /* skip this iteration, continue  */
            goto for_each_begin_8;/* for-if failed */
        }
        /*for body begin*/
        /* match pattern 1 start*/
            /*empty label*/ {
                voba_value_t v_213b576 /* v */ __attribute__((unused)) = VOBA_UNDEF;
                /* start to match the single variable v_213b576 */
                if(voba_eq(v_213b576,VOBA_UNDEF)){
                    v_213b576 = for_each_value_13; /* when v_213b576 is unbound, bound it*/
                }else{
                     /* when v_213b576 is already bound, try to test whether equal*/
                     if(!voba_match_eq(v_213b576,for_each_value_13)){
                          goto match_label_next_20;/*if not equal goto the fail lable */
                     }
                }
                /* end to match the single variable v_213b576*/
                voba_value_t apply_ret_21 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
                voba_value_t apply_args_22 [] = { 2 /* prepare arguments for apply */
                     ,v_213b576 /* v */ /* argument 1 */
                     ,voba_make_i32(5) /* argument 2 */
                };
                apply_ret_21 = voba_apply(voba_symbol_value(_3E_213ec36 /* > */),voba_make_tuple(apply_args_22));/* return value for apply */
                if(voba_eq(apply_ret_21,VOBA_FALSE)){/* if pattern guard failed */
                     goto match_label_next_20; /* goto the pattern failed label */
                }
                    for_final_11 = voba_make_string(voba_str_from_cstr("hello")); /* break the `for' loop */
                    goto for_end_10;
            
                for_each_output_16 = voba_make_string(voba_str_from_cstr("hello")); /* match statement return value*/
                goto for_each_end_9; // match goto end
        
            }
            /* match pattern 1 end*/ 
            /* match pattern 2 start*/
            match_label_next_20: {
                voba_value_t v_213bcd6 /* v */ __attribute__((unused)) = VOBA_UNDEF;
                /* start to match the single variable v_213bcd6 */
                if(voba_eq(v_213bcd6,VOBA_UNDEF)){
                    v_213bcd6 = for_each_value_13; /* when v_213bcd6 is unbound, bound it*/
                }else{
                     /* when v_213bcd6 is already bound, try to test whether equal*/
                     if(!voba_match_eq(v_213bcd6,for_each_value_13)){
                          goto for_each_end_9;/*if not equal goto the fail lable */
                     }
                }
                /* end to match the single variable v_213bcd6*/
                    voba_value_t apply_ret_23 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
                    voba_value_t apply_args_24 [] = { 1 /* prepare arguments for apply */
                         ,v_213bcd6 /* v */ /* argument 1 */
                    };
                    apply_ret_23 = voba_apply(voba_symbol_value(print_213e856 /* print */),voba_make_tuple(apply_args_24));/* return value for apply */
            
                for_each_output_16 = v_213bcd6 /* v */; /* match statement return value*/
                goto for_each_end_9; // match goto end
        
            }
            /* match pattern 2 end*/ 
    
        /*for body end*/
        for_each_end_9: /* end label for each iteration */
        /* collect return value for `for' statement  */
        {voba_value_t acc_args_27 [] = {2, for_each_last_output_17, for_each_output_16}; /*arguments for accumulator*/
        for_each_last_output_17 = voba_apply(voba_symbol_value(_2B_213eb46 /* + */), voba_make_tuple(acc_args_27));}/* apply the accumulator */
        for_final_11 = for_each_last_output_17;  /* assign the final value for `for' statement */
        goto for_each_begin_8; /* for goto begin */
        for_end_10:  /* end label `for' */
        if(0) goto for_end_10;  /* suppress warning `label at end of compound statement' */
        }
        voba_value_t v_28 __attribute__((unused)) = VOBA_UNDEF;
        v_28 = for_final_11;/* value for set var*/
        v_213a5d6 = v_28; /* set v */
        voba_value_t apply_ret_29 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
        voba_value_t apply_args_30 [] = { 1 /* prepare arguments for apply */
             ,v_213a5d6 /* v */ /* argument 1 */
        };
        apply_ret_29 = voba_apply(voba_symbol_value(print_213e856 /* print */),voba_make_tuple(apply_args_30));/* return value for apply */

    let_ret_0 = apply_ret_29; /* set letreturn value*/
}
