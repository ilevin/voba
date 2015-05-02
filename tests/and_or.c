#include <stdint.h>
#include <assert.h>
#define EXEC_ONCE_TU_NAME "tests/and_or.voba built at 2015-5-2 13:9:7."
#define EXEC_ONCE_DEPENDS {"voba.module"};
#include <voba/value.h>
#include <voba/core/builtin.h> // import builtin by default
#include <exec_once.h>
#include <voba/module.h>
#define voba_match_eq voba_eql
    voba_value_t get_class_f6b846 /* get_class */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t str_f6b946 /* str */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t print_f6ba36 /* print */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t len_f6b876 /* len */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t range_f6bc36 /* range */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _2B_f6bd26 /* + */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3E_f6be16 /* > */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_f6bf96 /* < */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3E_3D_f6c086 /* >= */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_3D_f6c176 /* <= */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3D_3D_f6c266 /* == */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _25_f6c356 /* % */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_3C_f6c446 /* << */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t array_f6c536 /* array */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t eq_f6c626 /* eq */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t i32_mod_f6c7a6 /* i32_mod */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t eq_i32_mod_0_f6c896 /* eq_i32_mod_0 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i32_f6c986 /* cls_i32 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_float_f6ca76 /* cls_float */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_str_f6cb66 /* cls_str */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t array_2Diter_f6cc56 /* array-iter */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t isa_f6cd46 /* isa */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t match_2Dtuple_f6ce36 /* match-tuple */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t tuple_f6cf26 /* tuple */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t v_f68ce6 /* v */ __attribute__((unused)) = VOBA_UNDEF;
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
    get_class_f6b846 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("get_class")));
}
{
    str_f6b946 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("str")));
}
{
    print_f6ba36 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("print")));
}
{
    len_f6b876 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("len")));
}
{
    range_f6bc36 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("range")));
}
{
    _2B_f6bd26 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("+")));
}
{
    _3E_f6be16 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr(">")));
}
{
    _3C_f6bf96 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("<")));
}
{
    _3E_3D_f6c086 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr(">=")));
}
{
    _3C_3D_f6c176 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("<=")));
}
{
    _3D_3D_f6c266 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("==")));
}
{
    _25_f6c356 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("%")));
}
{
    _3C_3C_f6c446 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("<<")));
}
{
    array_f6c536 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("array")));
}
{
    eq_f6c626 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("eq")));
}
{
    i32_mod_f6c7a6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("i32_mod")));
}
{
    eq_i32_mod_0_f6c896 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("eq_i32_mod_0")));
}
{
    cls_i32_f6c986 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_i32")));
}
{
    cls_float_f6ca76 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_float")));
}
{
    cls_str_f6cb66 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_str")));
}
{
    array_2Diter_f6cc56 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("array-iter")));
}
{
    isa_f6cd46 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("isa")));
}
{
    match_2Dtuple_f6ce36 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("match-tuple")));
}
{
    tuple_f6cf26 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("tuple")));
}
    voba_value_t v_0 __attribute__((unused)) = VOBA_UNDEF;
    v_0 = VOBA_FALSE;/* value for set var*/
    v_f68ce6 = v_0; /* set v */
       voba_value_t or_ret_val_1 = VOBA_UNDEF;/* return value for `or' statement */
    or_ret_val_1 = v_f68ce6 /* v */; /*set return value for `or'*/
    if(!voba_eq(or_ret_val_1,VOBA_FALSE)){/* if any Ok, jump to end*/
        goto or_end_2; /* skip following exprs in `or' */
    }
    voba_value_t apply_ret_3 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
    voba_value_t apply_args_4 [] = { 1 /* prepare arguments for apply */
         ,voba_make_i32(1)/*it*/ /* argument 1 */
    , VOBA_BOX_END };
    apply_ret_3 = voba_apply(voba_symbol_value(print_f6ba36 /* print */),voba_make_tuple(apply_args_4));/* return value for apply */
    or_ret_val_1 = apply_ret_3; /*set return value for `or'*/
    if(!voba_eq(or_ret_val_1,VOBA_FALSE)){/* if any Ok, jump to end*/
        goto or_end_2; /* skip following exprs in `or' */
    }
    or_end_2: if(0) goto or_end_2; /* `or` statement end here, suppress warning message */
}

