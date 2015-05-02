#include <stdint.h>
#include <assert.h>
#define EXEC_ONCE_TU_NAME "tests/match.voba built at 2015-5-2 13:9:9."
#define EXEC_ONCE_DEPENDS {"voba.module"};
#include <voba/value.h>
#include <voba/core/builtin.h> // import builtin by default
#include <exec_once.h>
#include <voba/module.h>
#define voba_match_eq voba_eql
    voba_value_t get_class_17d1976 /* get_class */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t str_17d1a76 /* str */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t print_17d1b66 /* print */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t len_17d19a6 /* len */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t range_17d1d66 /* range */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _2B_17d1e56 /* + */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3E_17d1f46 /* > */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_17d20c6 /* < */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3E_3D_17d21b6 /* >= */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_3D_17d22a6 /* <= */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3D_3D_17d2396 /* == */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _25_17d2486 /* % */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_3C_17d2576 /* << */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t array_17d2666 /* array */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t eq_17d2756 /* eq */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t i32_mod_17d28d6 /* i32_mod */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t eq_i32_mod_0_17d29c6 /* eq_i32_mod_0 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i32_17d2ab6 /* cls_i32 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_float_17d2ba6 /* cls_float */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_str_17d2c96 /* cls_str */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t array_2Diter_17d2d86 /* array-iter */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t isa_17d2e76 /* isa */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t match_2Dtuple_17d2f66 /* match-tuple */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t tuple_17d3056 /* tuple */ __attribute__((unused)) = VOBA_UNDEF;
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
    get_class_17d1976 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("get_class")));
}
{
    str_17d1a76 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("str")));
}
{
    print_17d1b66 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("print")));
}
{
    len_17d19a6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("len")));
}
{
    range_17d1d66 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("range")));
}
{
    _2B_17d1e56 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("+")));
}
{
    _3E_17d1f46 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr(">")));
}
{
    _3C_17d20c6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("<")));
}
{
    _3E_3D_17d21b6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr(">=")));
}
{
    _3C_3D_17d22a6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("<=")));
}
{
    _3D_3D_17d2396 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("==")));
}
{
    _25_17d2486 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("%")));
}
{
    _3C_3C_17d2576 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("<<")));
}
{
    array_17d2666 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("array")));
}
{
    eq_17d2756 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("eq")));
}
{
    i32_mod_17d28d6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("i32_mod")));
}
{
    eq_i32_mod_0_17d29c6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("eq_i32_mod_0")));
}
{
    cls_i32_17d2ab6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_i32")));
}
{
    cls_float_17d2ba6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_float")));
}
{
    cls_str_17d2c96 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_str")));
}
{
    array_2Diter_17d2d86 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("array-iter")));
}
{
    isa_17d2e76 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("isa")));
}
{
    match_2Dtuple_17d2f66 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("match-tuple")));
}
{
    tuple_17d3056 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("tuple")));
}
    /* start of a match statement */
    voba_value_t match_ret_2 __attribute__((unused)) = VOBA_UNDEF; /* return value for match statement */
    /* match rule 1 start*/
    /*empty label*/ {
        voba_value_t v_17cede6 /* v */ __attribute__((unused)) = VOBA_UNDEF;
        /* start to match the single variable v_17cede6 */
        if(voba_eq(v_17cede6,VOBA_UNDEF)){
            v_17cede6 = voba_make_i32(1); /* when v_17cede6 is unbound, bound it*/
        }else{
             /* when v_17cede6 is already bound, try to test whether equal*/
             if(!voba_match_eq(v_17cede6,voba_make_i32(1))){
                  goto match_label_failure_4;/*if not equal goto the fail lable */
             }
        }
        /* end to match the single variable v_17cede6*/
        voba_value_t apply_ret_6 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
        voba_value_t apply_args_7 [] = { 2 /* prepare arguments for apply */
             ,voba_make_i32(1) /* argument 1 */
             ,v_17cede6 /* v */ /* argument 2 */
        , VOBA_BOX_END };
        apply_ret_6 = voba_apply(voba_symbol_value(_3D_3D_17d2396 /* == */),voba_make_tuple(apply_args_7));/* return value for apply */
        if(voba_eq(apply_ret_6,VOBA_FALSE)){/* if pattern guard failed */
             goto match_label_failure_4; /* goto the pattern failed label */
        }
        
        match_ret_2 = voba_make_string(voba_str_from_cstr("good")); /* match statement return value*/
        goto match_label_success_3; // match goto end

    }
    /* match rule 1 end*/ 
    match_label_failure_4:if(0) goto match_label_failure_4;/*suppress warning*/; /* the whole match statement failed. */
    voba_throw_exception(voba_make_string(voba_str_from_cstr("no match")));
    match_label_success_3:; /* the whole match statement success */
    /* end of a match statement */
    voba_value_t apply_ret_0 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
    voba_value_t apply_args_1 [] = { 1 /* prepare arguments for apply */
         ,match_ret_2 /* argument 1 */
    , VOBA_BOX_END };
    apply_ret_0 = voba_apply(voba_symbol_value(print_17d1b66 /* print */),voba_make_tuple(apply_args_1));/* return value for apply */
}

