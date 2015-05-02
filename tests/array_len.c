#include <stdint.h>
#include <assert.h>
#define EXEC_ONCE_TU_NAME "tests/array_len.voba built at 2015-5-2 13:20:39."
#define EXEC_ONCE_DEPENDS {"voba.module"};
#include <voba/value.h>
#include <voba/core/builtin.h> // import builtin by default
#include <exec_once.h>
#include <voba/module.h>
#define voba_match_eq voba_eql
    voba_value_t get_class_8e9b66 /* get_class */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t str_8e9c66 /* str */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t print_8e9d56 /* print */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t len_8e9b96 /* len */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t range_8e9f56 /* range */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _2B_8ea046 /* + */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3E_8ea136 /* > */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_8ea2b6 /* < */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3E_3D_8ea3a6 /* >= */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_3D_8ea496 /* <= */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3D_3D_8ea586 /* == */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _25_8ea676 /* % */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_3C_8ea766 /* << */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t array_8ea856 /* array */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t eq_8ea946 /* eq */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t i32_mod_8eaac6 /* i32_mod */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t eq_i32_mod_0_8eabb6 /* eq_i32_mod_0 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i32_8eaca6 /* cls_i32 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_float_8ead96 /* cls_float */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_str_8eae86 /* cls_str */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t array_2Diter_8eaf76 /* array-iter */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t isa_8eb066 /* isa */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t match_2Dtuple_8eb156 /* match-tuple */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t tuple_8eb246 /* tuple */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t match_2Dbox_8eb336 /* match-box */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t mylen1_8e5da6 /* mylen1 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t mylen_8e6d96 /* mylen */ __attribute__((unused)) = VOBA_UNDEF;
VOBA_FUNC voba_value_t def_0 (voba_value_t fun, voba_value_t fun_args, voba_value_t* next_fun, voba_value_t next_args[]);
VOBA_FUNC voba_value_t def_29 (voba_value_t fun, voba_value_t fun_args, voba_value_t* next_fun, voba_value_t next_args[]);
VOBA_FUNC voba_value_t def_0 (voba_value_t fun, voba_value_t fun_args, voba_value_t* next_fun, voba_value_t next_args[])
{
    /* start of a match statement */
        voba_value_t match_ret_1 __attribute__((unused)) = VOBA_UNDEF; /* return value for match statement */
        /* match rule 1 start*/
        /*empty label*/ {
            voba_value_t len_8e5f16 /* len */ __attribute__((unused)) = VOBA_UNDEF;
            /* evaluate first element of pattern */
            
            voba_value_t pattern_args_7 [] = {3, fun_args, voba_make_i32(-1), voba_make_i32(2), VOBA_BOX_END};
            voba_value_t pattern_ret_6 = voba_apply(voba_symbol_value(match_2Dtuple_8eb156 /* match-tuple */), voba_make_tuple(pattern_args_7));
            if(!voba_eq(VOBA_TRUE,pattern_ret_6)){
                goto rule_label_0_5; /* number of var does not match*/
            }
            /* extract 0 of 2 sub-value from the main value*/
            voba_value_t pattern_args_8 [] = {3, fun_args,voba_make_i32(0), voba_make_i32(2), VOBA_BOX_END};
            voba_value_t pattern_ret_9 = voba_apply(voba_symbol_value(match_2Dtuple_8eb156 /* match-tuple */),voba_make_tuple(pattern_args_8));/* the sub-value 0 of 2*/
             if(!voba_match_eq(pattern_ret_9,VOBA_NIL)){
                 goto rule_label_0_5; /* match failed */
             }
            /* extract 1 of 2 sub-value from the main value*/
            voba_value_t pattern_args_10 [] = {3, fun_args,voba_make_i32(1), voba_make_i32(2), VOBA_BOX_END};
            voba_value_t pattern_ret_11 = voba_apply(voba_symbol_value(match_2Dtuple_8eb156 /* match-tuple */),voba_make_tuple(pattern_args_10));/* the sub-value 1 of 2*/
            /* start to match the single variable len_8e5f16 */
            if(voba_eq(len_8e5f16,VOBA_UNDEF)){
                len_8e5f16 = pattern_ret_11; /* when len_8e5f16 is unbound, bound it*/
            }else{
                 /* when len_8e5f16 is already bound, try to test whether equal*/
                 if(!voba_match_eq(len_8e5f16,pattern_ret_11)){
                      goto rule_label_0_5;/*if not equal goto the fail lable */
                 }
            }
            /* end to match the single variable len_8e5f16*/
            
            match_ret_1 = len_8e5f16 /* len */; /* match statement return value*/
            goto match_label_success_2; // match goto end
    
        }
        /* match rule 1 end*/ 
        /* match rule 2 start*/
        rule_label_0_5: {
            voba_value_t x_8e64d6 /* x */ __attribute__((unused)) = VOBA_UNDEF;
            voba_value_t b_8e6596 /* b */ __attribute__((unused)) = VOBA_UNDEF;
            voba_value_t len_8e6676 /* len */ __attribute__((unused)) = VOBA_UNDEF;
            /* evaluate first element of pattern */
            
            voba_value_t pattern_args_13 [] = {3, fun_args, voba_make_i32(-1), voba_make_i32(2), VOBA_BOX_END};
            voba_value_t pattern_ret_12 = voba_apply(voba_symbol_value(match_2Dtuple_8eb156 /* match-tuple */), voba_make_tuple(pattern_args_13));
            if(!voba_eq(VOBA_TRUE,pattern_ret_12)){
                goto match_label_failure_3; /* number of var does not match*/
            }
            /* extract 0 of 2 sub-value from the main value*/
            voba_value_t pattern_args_14 [] = {3, fun_args,voba_make_i32(0), voba_make_i32(2), VOBA_BOX_END};
            voba_value_t pattern_ret_15 = voba_apply(voba_symbol_value(match_2Dtuple_8eb156 /* match-tuple */),voba_make_tuple(pattern_args_14));/* the sub-value 0 of 2*/
            /* evaluate first element of pattern */
            
            voba_value_t pattern_args_17 [] = {3, pattern_ret_15, voba_make_i32(-1), voba_make_i32(2), VOBA_BOX_END};
            voba_value_t pattern_ret_16 = voba_apply(voba_symbol_value(match_2Dbox_8eb336 /* match-box */), voba_make_tuple(pattern_args_17));
            if(!voba_eq(VOBA_TRUE,pattern_ret_16)){
                goto match_label_failure_3; /* number of var does not match*/
            }
            /* extract 0 of 2 sub-value from the main value*/
            voba_value_t pattern_args_18 [] = {3, pattern_ret_15,voba_make_i32(0), voba_make_i32(2), VOBA_BOX_END};
            voba_value_t pattern_ret_19 = voba_apply(voba_symbol_value(match_2Dbox_8eb336 /* match-box */),voba_make_tuple(pattern_args_18));/* the sub-value 0 of 2*/
            /* start to match the single variable x_8e64d6 */
            if(voba_eq(x_8e64d6,VOBA_UNDEF)){
                x_8e64d6 = pattern_ret_19; /* when x_8e64d6 is unbound, bound it*/
            }else{
                 /* when x_8e64d6 is already bound, try to test whether equal*/
                 if(!voba_match_eq(x_8e64d6,pattern_ret_19)){
                      goto match_label_failure_3;/*if not equal goto the fail lable */
                 }
            }
            /* end to match the single variable x_8e64d6*/
            /* extract 1 of 2 sub-value from the main value*/
            voba_value_t pattern_args_20 [] = {3, pattern_ret_15,voba_make_i32(1), voba_make_i32(2), VOBA_BOX_END};
            voba_value_t pattern_ret_21 = voba_apply(voba_symbol_value(match_2Dbox_8eb336 /* match-box */),voba_make_tuple(pattern_args_20));/* the sub-value 1 of 2*/
            /* start to match the single variable b_8e6596 */
            if(voba_eq(b_8e6596,VOBA_UNDEF)){
                b_8e6596 = pattern_ret_21; /* when b_8e6596 is unbound, bound it*/
            }else{
                 /* when b_8e6596 is already bound, try to test whether equal*/
                 if(!voba_match_eq(b_8e6596,pattern_ret_21)){
                      goto match_label_failure_3;/*if not equal goto the fail lable */
                 }
            }
            /* end to match the single variable b_8e6596*/
            /* extract 1 of 2 sub-value from the main value*/
            voba_value_t pattern_args_22 [] = {3, fun_args,voba_make_i32(1), voba_make_i32(2), VOBA_BOX_END};
            voba_value_t pattern_ret_23 = voba_apply(voba_symbol_value(match_2Dtuple_8eb156 /* match-tuple */),voba_make_tuple(pattern_args_22));/* the sub-value 1 of 2*/
            /* start to match the single variable len_8e6676 */
            if(voba_eq(len_8e6676,VOBA_UNDEF)){
                len_8e6676 = pattern_ret_23; /* when len_8e6676 is unbound, bound it*/
            }else{
                 /* when len_8e6676 is already bound, try to test whether equal*/
                 if(!voba_match_eq(len_8e6676,pattern_ret_23)){
                      goto match_label_failure_3;/*if not equal goto the fail lable */
                 }
            }
            /* end to match the single variable len_8e6676*/
                voba_value_t apply_ret_26 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
                voba_value_t apply_args_27 [] = { 2 /* prepare arguments for apply */
                     ,voba_make_i32(1) /* argument 1 */
                     ,len_8e6676 /* len */ /* argument 2 */
                , VOBA_BOX_END };
                apply_ret_26 = voba_apply(voba_symbol_value(_2B_8ea046 /* + */),voba_make_tuple(apply_args_27));/* return value for apply */
                voba_value_t apply_ret_24 = VOBA_TAIL_CALL;/* tail call for `apply` */
                next_args[0] = 2;/* set the number of argument for tail call.*/
                *next_fun = mylen1_8e5da6 /* mylen1 */;/*set the next function to call*/
                /* start to fill in argument for tail call */
                next_args[1] = b_8e6596 /* b */; /* argument 1 */
                next_args[2] = apply_ret_26; /* argument 2 */
                next_args[3] = VOBA_BOX_END; /* argument 3 */
        
            match_ret_1 = apply_ret_24; /* match statement return value*/
            goto match_label_success_2; // match goto end
    
        }
        /* match rule 2 end*/ 
        match_label_failure_3:if(0) goto match_label_failure_3;/*suppress warning*/; /* the whole match statement failed. */
        voba_throw_exception(voba_make_string(voba_str_from_cstr("no match")));
        match_label_success_2:; /* the whole match statement success */
        /* end of a match statement */
    return match_ret_1; /* return def_0 */
}
VOBA_FUNC voba_value_t def_29 (voba_value_t fun, voba_value_t fun_args, voba_value_t* next_fun, voba_value_t next_args[])
{
    /* start of a match statement */
        voba_value_t match_ret_30 __attribute__((unused)) = VOBA_UNDEF; /* return value for match statement */
        /* match rule 1 start*/
        /*empty label*/ {
            voba_value_t x_8e6ec6 /* x */ __attribute__((unused)) = VOBA_UNDEF;
            /* evaluate first element of pattern */
            
            voba_value_t pattern_args_35 [] = {3, fun_args, voba_make_i32(-1), voba_make_i32(1), VOBA_BOX_END};
            voba_value_t pattern_ret_34 = voba_apply(voba_symbol_value(match_2Dtuple_8eb156 /* match-tuple */), voba_make_tuple(pattern_args_35));
            if(!voba_eq(VOBA_TRUE,pattern_ret_34)){
                goto match_label_failure_32; /* number of var does not match*/
            }
            /* extract 0 of 1 sub-value from the main value*/
            voba_value_t pattern_args_36 [] = {3, fun_args,voba_make_i32(0), voba_make_i32(1), VOBA_BOX_END};
            voba_value_t pattern_ret_37 = voba_apply(voba_symbol_value(match_2Dtuple_8eb156 /* match-tuple */),voba_make_tuple(pattern_args_36));/* the sub-value 0 of 1*/
            /* start to match the single variable x_8e6ec6 */
            if(voba_eq(x_8e6ec6,VOBA_UNDEF)){
                x_8e6ec6 = pattern_ret_37; /* when x_8e6ec6 is unbound, bound it*/
            }else{
                 /* when x_8e6ec6 is already bound, try to test whether equal*/
                 if(!voba_match_eq(x_8e6ec6,pattern_ret_37)){
                      goto match_label_failure_32;/*if not equal goto the fail lable */
                 }
            }
            /* end to match the single variable x_8e6ec6*/
                voba_value_t apply_ret_38 = VOBA_TAIL_CALL;/* tail call for `apply` */
                next_args[0] = 2;/* set the number of argument for tail call.*/
                *next_fun = mylen1_8e5da6 /* mylen1 */;/*set the next function to call*/
                /* start to fill in argument for tail call */
                next_args[1] = x_8e6ec6 /* x */; /* argument 1 */
                next_args[2] = voba_make_i32(0); /* argument 2 */
                next_args[3] = VOBA_BOX_END; /* argument 3 */
        
            match_ret_30 = apply_ret_38; /* match statement return value*/
            goto match_label_success_31; // match goto end
    
        }
        /* match rule 1 end*/ 
        match_label_failure_32:if(0) goto match_label_failure_32;/*suppress warning*/; /* the whole match statement failed. */
        voba_throw_exception(voba_make_string(voba_str_from_cstr("no match")));
        match_label_success_31:; /* the whole match statement success */
        /* end of a match statement */
    return match_ret_30; /* return def_29 */
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
         "match-box",
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
    get_class_8e9b66 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("get_class")));
}
{
    str_8e9c66 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("str")));
}
{
    print_8e9d56 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("print")));
}
{
    len_8e9b96 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("len")));
}
{
    range_8e9f56 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("range")));
}
{
    _2B_8ea046 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("+")));
}
{
    _3E_8ea136 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr(">")));
}
{
    _3C_8ea2b6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("<")));
}
{
    _3E_3D_8ea3a6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr(">=")));
}
{
    _3C_3D_8ea496 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("<=")));
}
{
    _3D_3D_8ea586 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("==")));
}
{
    _25_8ea676 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("%")));
}
{
    _3C_3C_8ea766 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("<<")));
}
{
    array_8ea856 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("array")));
}
{
    eq_8ea946 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("eq")));
}
{
    i32_mod_8eaac6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("i32_mod")));
}
{
    eq_i32_mod_0_8eabb6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("eq_i32_mod_0")));
}
{
    cls_i32_8eaca6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_i32")));
}
{
    cls_float_8ead96 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_float")));
}
{
    cls_str_8eae86 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_str")));
}
{
    array_2Diter_8eaf76 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("array-iter")));
}
{
    isa_8eb066 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("isa")));
}
{
    match_2Dtuple_8eb156 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("match-tuple")));
}
{
    tuple_8eb246 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("tuple")));
}
{
    match_2Dbox_8eb336 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("match-box")));
}
    voba_value_t mylen1_28 __attribute__((unused)) = VOBA_UNDEF;
    mylen1_28 = voba_make_func(def_0);/* value for set var*/
    mylen1_8e5da6 = mylen1_28; /* set mylen1 */
    voba_value_t mylen_40 __attribute__((unused)) = VOBA_UNDEF;
    mylen_40 = voba_make_func(def_29);/* value for set var*/
    mylen_8e6d96 = mylen_40; /* set mylen */
    voba_value_t apply_ret_45 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
    voba_value_t apply_args_46 [] = { 4 /* prepare arguments for apply */
         ,voba_make_i32(1) /* argument 1 */
         ,voba_make_i32(2) /* argument 2 */
         ,voba_make_i32(3) /* argument 3 */
         ,VOBA_NIL /* argument 4 */
    , VOBA_BOX_END };
    apply_ret_45 = voba_apply(voba_symbol_value(array_8ea856 /* array */),voba_make_tuple(apply_args_46));/* return value for apply */
    voba_value_t apply_ret_43 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
    voba_value_t apply_args_44 [] = { 1 /* prepare arguments for apply */
         ,apply_ret_45 /* argument 1 */
    , VOBA_BOX_END };
    apply_ret_43 = voba_apply(mylen_8e6d96 /* mylen */,voba_make_tuple(apply_args_44));/* return value for apply */
    voba_value_t apply_ret_41 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
    voba_value_t apply_args_42 [] = { 1 /* prepare arguments for apply */
         ,apply_ret_43 /* argument 1 */
    , VOBA_BOX_END };
    apply_ret_41 = voba_apply(voba_symbol_value(print_8e9d56 /* print */),voba_make_tuple(apply_args_42));/* return value for apply */
}

