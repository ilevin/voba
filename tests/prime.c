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
    voba_value_t get_class_1abce26 /* get_class */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t str_1abcf16 /* str */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t print_1abd016 /* print */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t len_1abd106 /* len */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t range_1abcf46 /* range */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _2B_1abd306 /* + */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3E_1abd3f6 /* > */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_1abd4e6 /* < */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3E_3D_1abd666 /* >= */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_3D_1abd756 /* <= */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3D_3D_1abd846 /* == */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _25_1abd936 /* % */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_3C_1abda26 /* << */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t array_1abdb16 /* array */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t eq_1abdc06 /* eq */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t i32_mod_1abdcf6 /* i32_mod */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t eq_i32_mod_0_1abde76 /* eq_i32_mod_0 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i8_1abdf66 /* cls_i8 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i16_1abe056 /* cls_i16 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i32_1abe146 /* cls_i32 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_u8_1abe236 /* cls_u8 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_u16_1abe326 /* cls_u16 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_u32_1abe416 /* cls_u32 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_float_1abe506 /* cls_float */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_str_1abe5f6 /* cls_str */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t primes_1ab8766 /* primes */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t is_2Dprime_1ab8d36 /* is-prime */ __attribute__((unused)) = VOBA_UNDEF;
VOBA_FUNC voba_value_t is_2Dprime_5 (voba_value_t self, voba_value_t fun_args);
VOBA_FUNC voba_value_t is_2Dprime_5 (voba_value_t self, voba_value_t fun_args)
{
    voba_value_t for_final_9 __attribute__((unused)) = VOBA_UNDEF;/* return value for `for' statement */
        voba_value_t for_each_value_11 = VOBA_UNDEF;/* input value of each iteration  */
        voba_value_t for_each_output_14 __attribute__((unused)) = VOBA_UNDEF;/* output value of each iteration  */
        voba_value_t for_each_last_output_15 __attribute__((unused)) = VOBA_UNDEF;/* init value for `for' statement*/
        voba_func_t  for_each_iter_f_13 = NULL;/* iter for `for' statement*/
        voba_value_t for_each_iter_12 __attribute__((unused)) = VOBA_UNDEF;/* tmp args for `for` each */
        for_each_iter_f_13 = voba_gf_lookup(voba_symbol_value(gf_iter), voba_get_class(primes_1ab8766 /* primes */)); /* initialized iterator */
        if(for_each_iter_f_13 == NULL){
             voba_throw_exception(voba_make_string(VOBA_CONST_CHAR("cannot find the iterator")));
        }
        voba_value_t for_each_iter_args_16 [] = {1, primes_1ab8766 /* primes */}; /* prepare to invoke the iterator*/
        for_each_iter_12 = for_each_iter_f_13(voba_make_func(for_each_iter_f_13),voba_make_tuple(for_each_iter_args_16)); /*get the iterator*/ 
        for_each_last_output_15 = VOBA_TRUE ; /* initialize the default initial value*/
        for_each_begin_6:{ /*prelude of `for' statement */
        voba_value_t for_each_args_10 [] = {1,primes_1ab8766 /* primes */}; /* args for iterator*/
        for_each_value_11 = voba_apply(for_each_iter_12,voba_make_tuple(for_each_args_10)); /*invoke the iterator*/
        if(voba_eq(for_each_value_11,VOBA_DONE)){
            goto for_end_8;/* exit for loop */
        }
        /*for body begin*/
        /* match pattern 1 start*/
            /*empty label*/ {
                voba_value_t v_1ab9416 /* v */ __attribute__((unused)) = VOBA_UNDEF;
                /* start to match the single variable v_1ab9416 */
                if(voba_eq(v_1ab9416,VOBA_UNDEF)){
                    v_1ab9416 = for_each_value_11; /* when v_1ab9416 is unbound, bound it*/
                }else{
                     /* when v_1ab9416 is already bound, try to test whether equal*/
                     if(!voba_match_eq(v_1ab9416,for_each_value_11)){
                          goto for_each_end_7;/*if not equal goto the fail lable */
                     }
                }
                /* end to match the single variable v_1ab9416*/
                voba_value_t apply_ret_20 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
                voba_value_t apply_args_21 [] = { 2 /* prepare arguments for apply */
                     ,voba_tuple_at(fun_args,0) /* argument 1 */
                     ,v_1ab9416 /* v */ /* argument 2 */
                };
                apply_ret_20 = voba_apply(voba_symbol_value(_25_1abd936 /* % */),voba_make_tuple(apply_args_21));/* return value for apply */
                voba_value_t apply_ret_18 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
                voba_value_t apply_args_19 [] = { 2 /* prepare arguments for apply */
                     ,apply_ret_20 /* argument 1 */
                     ,voba_make_i32(0) /* argument 2 */
                };
                apply_ret_18 = voba_apply(voba_symbol_value(_3D_3D_1abd846 /* == */),voba_make_tuple(apply_args_19));/* return value for apply */
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
    voba_import_module(name,id,symbols);
}
{
    gf_match = voba_module_var("__lang__","__lang__","__match__");
}
{
    gf_iter = voba_module_var("__lang__","__lang__","__iter__");
}
{
    get_class_1abce26 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","get_class");
}
{
    str_1abcf16 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","str");
}
{
    print_1abd016 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","print");
}
{
    len_1abd106 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","len");
}
{
    range_1abcf46 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","range");
}
{
    _2B_1abd306 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","+");
}
{
    _3E_1abd3f6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",">");
}
{
    _3C_1abd4e6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","<");
}
{
    _3E_3D_1abd666 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",">=");
}
{
    _3C_3D_1abd756 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","<=");
}
{
    _3D_3D_1abd846 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","==");
}
{
    _25_1abd936 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","%");
}
{
    _3C_3C_1abda26 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","<<");
}
{
    array_1abdb16 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","array");
}
{
    eq_1abdc06 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","eq");
}
{
    i32_mod_1abdcf6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","i32_mod");
}
{
    eq_i32_mod_0_1abde76 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","eq_i32_mod_0");
}
{
    cls_i8_1abdf66 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","cls_i8");
}
{
    cls_i16_1abe056 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","cls_i16");
}
{
    cls_i32_1abe146 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","cls_i32");
}
{
    cls_u8_1abe236 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","cls_u8");
}
{
    cls_u16_1abe326 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","cls_u16");
}
{
    cls_u32_1abe416 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","cls_u32");
}
{
    cls_float_1abe506 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","cls_float");
}
{
    cls_str_1abe5f6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","cls_str");
}
    voba_value_t apply_ret_0 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
    voba_value_t apply_args_1 [] = { 0 /* prepare arguments for apply */
    };
    apply_ret_0 = voba_apply(voba_symbol_value(array_1abdb16 /* array */),voba_make_tuple(apply_args_1));/* return value for apply */
    voba_value_t primes_2 __attribute__((unused)) = VOBA_UNDEF;
    primes_2 = apply_ret_0;/* value for set var*/
    primes_1ab8766 = primes_2; /* set primes */
    voba_value_t apply_ret_3 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
    voba_value_t apply_args_4 [] = { 2 /* prepare arguments for apply */
         ,primes_1ab8766 /* primes */ /* argument 1 */
         ,voba_make_i32(2) /* argument 2 */
    };
    apply_ret_3 = voba_apply(voba_symbol_value(_3C_3C_1abda26 /* << */),voba_make_tuple(apply_args_4));/* return value for apply */
    voba_value_t is_2Dprime_22 __attribute__((unused)) = VOBA_UNDEF;
    is_2Dprime_22 = voba_make_func(is_2Dprime_5);/* value for set var*/
    is_2Dprime_1ab8d36 = is_2Dprime_22; /* set is-prime */
    voba_value_t apply_ret_23 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
    voba_value_t apply_args_24 [] = { 2 /* prepare arguments for apply */
         ,voba_make_i32(2) /* argument 1 */
         ,voba_make_i32(10000) /* argument 2 */
    };
    apply_ret_23 = voba_apply(voba_symbol_value(range_1abcf46 /* range */),voba_make_tuple(apply_args_24));/* return value for apply */
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
            voba_value_t v_1ab9e86 /* v */ __attribute__((unused)) = VOBA_UNDEF;
            /* start to match the single variable v_1ab9e86 */
            if(voba_eq(v_1ab9e86,VOBA_UNDEF)){
                v_1ab9e86 = for_each_value_30; /* when v_1ab9e86 is unbound, bound it*/
            }else{
                 /* when v_1ab9e86 is already bound, try to test whether equal*/
                 if(!voba_match_eq(v_1ab9e86,for_each_value_30)){
                      goto for_each_end_26;/*if not equal goto the fail lable */
                 }
            }
            /* end to match the single variable v_1ab9e86*/
            voba_value_t apply_ret_37 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
            voba_value_t apply_args_38 [] = { 1 /* prepare arguments for apply */
                 ,v_1ab9e86 /* v */ /* argument 1 */
            };
            apply_ret_37 = voba_apply(is_2Dprime_1ab8d36 /* is-prime */,voba_make_tuple(apply_args_38));/* return value for apply */
            if(voba_eq(apply_ret_37,VOBA_FALSE)){/* if pattern guard failed */
                 goto for_each_end_26; /* goto the pattern failed label */
            }
                voba_value_t apply_ret_39 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
                voba_value_t apply_args_40 [] = { 2 /* prepare arguments for apply */
                     ,primes_1ab8766 /* primes */ /* argument 1 */
                     ,v_1ab9e86 /* v */ /* argument 2 */
                };
                apply_ret_39 = voba_apply(voba_symbol_value(_3C_3C_1abda26 /* << */),voba_make_tuple(apply_args_40));/* return value for apply */
        
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
         ,primes_1ab8766 /* primes */ /* argument 1 */
    };
    apply_ret_43 = voba_apply(voba_symbol_value(len_1abd106 /* len */),voba_make_tuple(apply_args_44));/* return value for apply */
    voba_value_t apply_ret_41 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
    voba_value_t apply_args_42 [] = { 1 /* prepare arguments for apply */
         ,apply_ret_43 /* argument 1 */
    };
    apply_ret_41 = voba_apply(voba_symbol_value(print_1abd016 /* print */),voba_make_tuple(apply_args_42));/* return value for apply */
}

