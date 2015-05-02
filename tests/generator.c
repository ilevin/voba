#include <stdint.h>
#include <assert.h>
#define EXEC_ONCE_TU_NAME "tests/generator.voba built at 2015-5-2 13:9:8."
#define EXEC_ONCE_DEPENDS {"voba.module"};
#include <voba/value.h>
#include <voba/core/builtin.h> // import builtin by default
#include <exec_once.h>
#include <voba/module.h>
#define voba_match_eq voba_eql
    voba_value_t get_class_205b316 /* get_class */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t str_205b416 /* str */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t print_205b506 /* print */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t len_205b346 /* len */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t range_205b706 /* range */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _2B_205b7f6 /* + */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3E_205b8e6 /* > */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_205ba66 /* < */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3E_3D_205bb56 /* >= */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_3D_205bc46 /* <= */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3D_3D_205bd36 /* == */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _25_205be26 /* % */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_3C_205bf16 /* << */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t array_205c006 /* array */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t eq_205c0f6 /* eq */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t i32_mod_205c276 /* i32_mod */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t eq_i32_mod_0_205c366 /* eq_i32_mod_0 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i32_205c456 /* cls_i32 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_float_205c546 /* cls_float */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_str_205c636 /* cls_str */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t array_2Diter_205c726 /* array-iter */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t isa_205c816 /* isa */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t match_2Dtuple_205c906 /* match-tuple */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t tuple_205c9f6 /* tuple */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t return1_2055f26 /* return1 */ __attribute__((unused)) = VOBA_UNDEF;
VOBA_FUNC voba_value_t def_0 (voba_value_t fun, voba_value_t fun_args);
VOBA_FUNC voba_value_t def_0_25 (voba_value_t fun, voba_value_t fun_args, voba_value_t* next_fun, voba_value_t next_args[]);
VOBA_FUNC voba_value_t def_0 (voba_value_t fun, voba_value_t fun_args)
{
    /* start of a match statement */
        voba_value_t match_ret_1 __attribute__((unused)) = VOBA_UNDEF; /* return value for match statement */
        /* match rule 1 start*/
        /*empty label*/ {
            voba_value_t a_2056056 /* a */ __attribute__((unused)) = VOBA_UNDEF;
            /* evaluate first element of pattern */
            
            voba_value_t pattern_args_6 [] = {3, fun_args, voba_make_i32(-1), voba_make_i32(1), VOBA_BOX_END};
            voba_value_t pattern_ret_5 = voba_apply(voba_symbol_value(match_2Dtuple_205c906 /* match-tuple */), voba_make_tuple(pattern_args_6));
            if(!voba_eq(VOBA_TRUE,pattern_ret_5)){
                goto match_label_failure_3; /* number of var does not match*/
            }
            /* extract 0 of 1 sub-value from the main value*/
            voba_value_t pattern_args_7 [] = {3, fun_args,voba_make_i32(0), voba_make_i32(1), VOBA_BOX_END};
            voba_value_t pattern_ret_8 = voba_apply(voba_symbol_value(match_2Dtuple_205c906 /* match-tuple */),voba_make_tuple(pattern_args_7));/* the sub-value 0 of 1*/
            /* start to match the single variable a_2056056 */
            if(voba_eq(a_2056056,VOBA_UNDEF)){
                a_2056056 = pattern_ret_8; /* when a_2056056 is unbound, bound it*/
            }else{
                 /* when a_2056056 is already bound, try to test whether equal*/
                 if(!voba_match_eq(a_2056056,pattern_ret_8)){
                      goto match_label_failure_3;/*if not equal goto the fail lable */
                 }
            }
            /* end to match the single variable a_2056056*/
                voba_value_t apply_ret_9 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
                voba_value_t apply_args_10 [] = { 2 /* prepare arguments for apply */
                     ,voba_make_string(voba_str_from_cstr("hello")) /* argument 1 */
                     ,a_2056056 /* a */ /* argument 2 */
                , VOBA_BOX_END };
                apply_ret_9 = voba_apply(voba_symbol_value(print_205b506 /* print */),voba_make_tuple(apply_args_10));/* return value for apply */
                /*let env*/
                voba_value_t b_20564f6 /* b */ __attribute__((unused)) = VOBA_UNDEF;
            
                /*decl let return value*/
                voba_value_t let_ret_11 __attribute__((unused)) = VOBA_UNDEF;
                /*let body*/
                voba_value_t apply_ret_12 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
                    voba_value_t apply_args_13 [] = { 2 /* prepare arguments for apply */
                         ,voba_make_i32(1) /* argument 1 */
                         ,a_2056056 /* a */ /* argument 2 */
                    , VOBA_BOX_END };
                    apply_ret_12 = voba_apply(voba_symbol_value(_2B_205b7f6 /* + */),voba_make_tuple(apply_args_13));/* return value for apply */
                    voba_value_t yield_ret_val_14 __attribute__((unused)) = 0;
                    yield_ret_val_14 = cg_yield(__builtin_frame_address(0), apply_ret_12);
                    voba_value_t b_15 __attribute__((unused)) = VOBA_UNDEF;
                    b_15 = yield_ret_val_14;/* value for set var*/
                    b_20564f6 = b_15; /* set b */
                    voba_value_t apply_ret_20 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
                    voba_value_t apply_args_21 [] = { 2 /* prepare arguments for apply */
                         ,voba_make_i32(1) /* argument 1 */
                         ,b_20564f6 /* b */ /* argument 2 */
                    , VOBA_BOX_END };
                    apply_ret_20 = voba_apply(voba_symbol_value(_2B_205b7f6 /* + */),voba_make_tuple(apply_args_21));/* return value for apply */
                    voba_value_t yield_ret_val_22 __attribute__((unused)) = 0;
                    yield_ret_val_22 = cg_yield(__builtin_frame_address(0), apply_ret_20);
                    voba_value_t apply_ret_18 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
                    voba_value_t apply_args_19 [] = { 2 /* prepare arguments for apply */
                         ,voba_make_string(voba_str_from_cstr("yield return ")) /* argument 1 */
                         ,yield_ret_val_22 /* argument 2 */
                    , VOBA_BOX_END };
                    apply_ret_18 = voba_apply(voba_symbol_value(array_205c006 /* array */),voba_make_tuple(apply_args_19));/* return value for apply */
                    voba_value_t apply_ret_16 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
                    voba_value_t apply_args_17 [] = { 1 /* prepare arguments for apply */
                         ,apply_ret_18 /* argument 1 */
                    , VOBA_BOX_END };
                    apply_ret_16 = voba_apply(voba_symbol_value(print_205b506 /* print */),voba_make_tuple(apply_args_17));/* return value for apply */
            
                let_ret_11 = apply_ret_16; /* set letreturn value*/
                voba_value_t apply_ret_23 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
                voba_value_t apply_args_24 [] = { 1 /* prepare arguments for apply */
                     ,voba_make_string(voba_str_from_cstr("world")) /* argument 1 */
                , VOBA_BOX_END };
                apply_ret_23 = voba_apply(voba_symbol_value(print_205b506 /* print */),voba_make_tuple(apply_args_24));/* return value for apply */
        
            match_ret_1 = voba_make_i32(6); /* match statement return value*/
            goto match_label_success_2; // match goto end
    
        }
        /* match rule 1 end*/ 
        match_label_failure_3:if(0) goto match_label_failure_3;/*suppress warning*/; /* the whole match statement failed. */
        voba_throw_exception(voba_make_string(voba_str_from_cstr("no match")));
        match_label_success_2:; /* the whole match statement success */
        /* end of a match statement */
    return match_ret_1; /* return def_0 */
}
VOBA_FUNC voba_value_t def_0_25 (voba_value_t fun, voba_value_t fun_args, voba_value_t* next_fun, voba_value_t next_args[])
{
 /* a bridge to create a generator */
    return voba_make_generator(def_0, fun, voba_tuple_copy(fun_args));
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
    get_class_205b316 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("get_class")));
}
{
    str_205b416 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("str")));
}
{
    print_205b506 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("print")));
}
{
    len_205b346 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("len")));
}
{
    range_205b706 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("range")));
}
{
    _2B_205b7f6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("+")));
}
{
    _3E_205b8e6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr(">")));
}
{
    _3C_205ba66 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("<")));
}
{
    _3E_3D_205bb56 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr(">=")));
}
{
    _3C_3D_205bc46 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("<=")));
}
{
    _3D_3D_205bd36 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("==")));
}
{
    _25_205be26 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("%")));
}
{
    _3C_3C_205bf16 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("<<")));
}
{
    array_205c006 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("array")));
}
{
    eq_205c0f6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("eq")));
}
{
    i32_mod_205c276 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("i32_mod")));
}
{
    eq_i32_mod_0_205c366 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("eq_i32_mod_0")));
}
{
    cls_i32_205c456 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_i32")));
}
{
    cls_float_205c546 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_float")));
}
{
    cls_str_205c636 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_str")));
}
{
    array_2Diter_205c726 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("array-iter")));
}
{
    isa_205c816 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("isa")));
}
{
    match_2Dtuple_205c906 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("match-tuple")));
}
{
    tuple_205c9f6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("tuple")));
}
    voba_value_t return1_26 __attribute__((unused)) = VOBA_UNDEF;
    return1_26 = voba_make_func(def_0_25);/* value for set var*/
    return1_2055f26 = return1_26; /* set return1 */
    /*let env*/
    voba_value_t g_2057516 /* g */ __attribute__((unused)) = VOBA_UNDEF;
        voba_value_t r1_2057846 /* r1 */ __attribute__((unused)) = VOBA_UNDEF;
        voba_value_t r2_2057b06 /* r2 */ __attribute__((unused)) = VOBA_UNDEF;
        voba_value_t r3_2057ab6 /* r3 */ __attribute__((unused)) = VOBA_UNDEF;
        voba_value_t r4_20585b6 /* r4 */ __attribute__((unused)) = VOBA_UNDEF;

    /*decl let return value*/
    voba_value_t let_ret_27 __attribute__((unused)) = VOBA_UNDEF;
    /*let body*/
    voba_value_t apply_ret_28 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
        voba_value_t apply_args_29 [] = { 1 /* prepare arguments for apply */
             ,voba_make_i32(0) /* argument 1 */
        , VOBA_BOX_END };
        apply_ret_28 = voba_apply(return1_2055f26 /* return1 */,voba_make_tuple(apply_args_29));/* return value for apply */
        voba_value_t g_30 __attribute__((unused)) = VOBA_UNDEF;
        g_30 = apply_ret_28;/* value for set var*/
        g_2057516 = g_30; /* set g */
        voba_value_t apply_ret_31 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
        voba_value_t apply_args_32 [] = { 1 /* prepare arguments for apply */
             ,voba_make_i32(1) /* argument 1 */
        , VOBA_BOX_END };
        apply_ret_31 = voba_apply(g_2057516 /* g */,voba_make_tuple(apply_args_32));/* return value for apply */
        voba_value_t r1_33 __attribute__((unused)) = VOBA_UNDEF;
        r1_33 = apply_ret_31;/* value for set var*/
        r1_2057846 = r1_33; /* set r1 */
        voba_value_t apply_ret_36 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
        voba_value_t apply_args_37 [] = { 2 /* prepare arguments for apply */
             ,voba_make_i32(1) /* argument 1 */
             ,r1_2057846 /* r1 */ /* argument 2 */
        , VOBA_BOX_END };
        apply_ret_36 = voba_apply(voba_symbol_value(_2B_205b7f6 /* + */),voba_make_tuple(apply_args_37));/* return value for apply */
        voba_value_t apply_ret_34 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
        voba_value_t apply_args_35 [] = { 1 /* prepare arguments for apply */
             ,apply_ret_36 /* argument 1 */
        , VOBA_BOX_END };
        apply_ret_34 = voba_apply(g_2057516 /* g */,voba_make_tuple(apply_args_35));/* return value for apply */
        voba_value_t r2_38 __attribute__((unused)) = VOBA_UNDEF;
        r2_38 = apply_ret_34;/* value for set var*/
        r2_2057b06 = r2_38; /* set r2 */
        voba_value_t apply_ret_41 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
        voba_value_t apply_args_42 [] = { 2 /* prepare arguments for apply */
             ,voba_make_i32(1) /* argument 1 */
             ,r2_2057b06 /* r2 */ /* argument 2 */
        , VOBA_BOX_END };
        apply_ret_41 = voba_apply(voba_symbol_value(_2B_205b7f6 /* + */),voba_make_tuple(apply_args_42));/* return value for apply */
        voba_value_t apply_ret_39 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
        voba_value_t apply_args_40 [] = { 1 /* prepare arguments for apply */
             ,apply_ret_41 /* argument 1 */
        , VOBA_BOX_END };
        apply_ret_39 = voba_apply(g_2057516 /* g */,voba_make_tuple(apply_args_40));/* return value for apply */
        voba_value_t r3_43 __attribute__((unused)) = VOBA_UNDEF;
        r3_43 = apply_ret_39;/* value for set var*/
        r3_2057ab6 = r3_43; /* set r3 */
        voba_value_t apply_ret_46 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
        voba_value_t apply_args_47 [] = { 2 /* prepare arguments for apply */
             ,voba_make_i32(1) /* argument 1 */
             ,r3_2057ab6 /* r3 */ /* argument 2 */
        , VOBA_BOX_END };
        apply_ret_46 = voba_apply(voba_symbol_value(_2B_205b7f6 /* + */),voba_make_tuple(apply_args_47));/* return value for apply */
        voba_value_t apply_ret_44 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
        voba_value_t apply_args_45 [] = { 1 /* prepare arguments for apply */
             ,apply_ret_46 /* argument 1 */
        , VOBA_BOX_END };
        apply_ret_44 = voba_apply(g_2057516 /* g */,voba_make_tuple(apply_args_45));/* return value for apply */
        voba_value_t r4_48 __attribute__((unused)) = VOBA_UNDEF;
        r4_48 = apply_ret_44;/* value for set var*/
        r4_20585b6 = r4_48; /* set r4 */
        voba_value_t apply_ret_51 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
        voba_value_t apply_args_52 [] = { 4 /* prepare arguments for apply */
             ,r1_2057846 /* r1 */ /* argument 1 */
             ,r2_2057b06 /* r2 */ /* argument 2 */
             ,r3_2057ab6 /* r3 */ /* argument 3 */
             ,r4_20585b6 /* r4 */ /* argument 4 */
        , VOBA_BOX_END };
        apply_ret_51 = voba_apply(voba_symbol_value(array_205c006 /* array */),voba_make_tuple(apply_args_52));/* return value for apply */
        voba_value_t apply_ret_49 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
        voba_value_t apply_args_50 [] = { 1 /* prepare arguments for apply */
             ,apply_ret_51 /* argument 1 */
        , VOBA_BOX_END };
        apply_ret_49 = voba_apply(voba_symbol_value(print_205b506 /* print */),voba_make_tuple(apply_args_50));/* return value for apply */

    let_ret_27 = apply_ret_49; /* set letreturn value*/
}

