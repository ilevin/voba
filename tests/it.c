#include <stdint.h>
#include <assert.h>
#define EXEC_ONCE_TU_NAME "tests/it.voba built at 2015-5-2 13:9:8."
#define EXEC_ONCE_DEPENDS {"voba.module"};
#include <voba/value.h>
#include <voba/core/builtin.h> // import builtin by default
#include <exec_once.h>
#include <voba/module.h>
#define voba_match_eq voba_eql
    voba_value_t get_class_df92e6 /* get_class */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t str_df93e6 /* str */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t print_df94d6 /* print */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t len_df9316 /* len */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t range_df96d6 /* range */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _2B_df97c6 /* + */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3E_df98b6 /* > */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_df9a36 /* < */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3E_3D_df9b26 /* >= */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_3D_df9c16 /* <= */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3D_3D_df9d06 /* == */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _25_df9df6 /* % */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_3C_df9ee6 /* << */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t array_df9fd6 /* array */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t eq_dfa0c6 /* eq */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t i32_mod_dfa246 /* i32_mod */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t eq_i32_mod_0_dfa336 /* eq_i32_mod_0 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i32_dfa426 /* cls_i32 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_float_dfa516 /* cls_float */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_str_dfa606 /* cls_str */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t array_2Diter_dfa6f6 /* array-iter */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t isa_dfa7e6 /* isa */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t match_2Dtuple_dfa8d6 /* match-tuple */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t tuple_dfa9c6 /* tuple */ __attribute__((unused)) = VOBA_UNDEF;
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
    get_class_df92e6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("get_class")));
}
{
    str_df93e6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("str")));
}
{
    print_df94d6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("print")));
}
{
    len_df9316 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("len")));
}
{
    range_df96d6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("range")));
}
{
    _2B_df97c6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("+")));
}
{
    _3E_df98b6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr(">")));
}
{
    _3C_df9a36 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("<")));
}
{
    _3E_3D_df9b26 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr(">=")));
}
{
    _3C_3D_df9c16 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("<=")));
}
{
    _3D_3D_df9d06 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("==")));
}
{
    _25_df9df6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("%")));
}
{
    _3C_3C_df9ee6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("<<")));
}
{
    array_df9fd6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("array")));
}
{
    eq_dfa0c6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("eq")));
}
{
    i32_mod_dfa246 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("i32_mod")));
}
{
    eq_i32_mod_0_dfa336 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("eq_i32_mod_0")));
}
{
    cls_i32_dfa426 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_i32")));
}
{
    cls_float_dfa516 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_float")));
}
{
    cls_str_dfa606 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_str")));
}
{
    array_2Diter_dfa6f6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("array-iter")));
}
{
    isa_dfa7e6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("isa")));
}
{
    match_2Dtuple_dfa8d6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("match-tuple")));
}
{
    tuple_dfa9c6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("tuple")));
}
    voba_value_t apply_ret_2 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
    voba_value_t apply_args_3 [] = { 2 /* prepare arguments for apply */
         ,voba_make_i32(1)/*it*/ /* argument 1 */
         ,voba_make_i32(1) /* argument 2 */
    , VOBA_BOX_END };
    apply_ret_2 = voba_apply(voba_symbol_value(_2B_df97c6 /* + */),voba_make_tuple(apply_args_3));/* return value for apply */
    voba_value_t apply_ret_4 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
    voba_value_t apply_args_5 [] = { 2 /* prepare arguments for apply */
         ,apply_ret_2/*it*/ /* argument 1 */
         ,voba_make_i32(2) /* argument 2 */
    , VOBA_BOX_END };
    apply_ret_4 = voba_apply(voba_symbol_value(_2B_df97c6 /* + */),voba_make_tuple(apply_args_5));/* return value for apply */
    voba_value_t apply_ret_0 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
    voba_value_t apply_args_1 [] = { 2 /* prepare arguments for apply */
         ,apply_ret_2 /* argument 1 */
         ,apply_ret_4 /* argument 2 */
    , VOBA_BOX_END };
    apply_ret_0 = voba_apply(voba_symbol_value(print_df94d6 /* print */),voba_make_tuple(apply_args_1));/* return value for apply */
    /*let env*/
    voba_value_t a_df6466 /* a */ __attribute__((unused)) = VOBA_UNDEF;

    /*decl let return value*/
    voba_value_t let_ret_6 __attribute__((unused)) = VOBA_UNDEF;
    /*let body*/
    voba_value_t a_7 __attribute__((unused)) = VOBA_UNDEF;
        a_7 = voba_make_i32(2)/*it*/;/* value for set var*/
        a_df6466 = a_7; /* set a */
        voba_value_t apply_ret_8 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
        voba_value_t apply_args_9 [] = { 2 /* prepare arguments for apply */
             ,a_7/*it*/ /* argument 1 */
             ,voba_make_i32(2) /* argument 2 */
        , VOBA_BOX_END };
        apply_ret_8 = voba_apply(voba_symbol_value(_2B_df97c6 /* + */),voba_make_tuple(apply_args_9));/* return value for apply */
        voba_value_t apply_ret_10 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
        voba_value_t apply_args_11 [] = { 2 /* prepare arguments for apply */
             ,apply_ret_8/*it*/ /* argument 1 */
             ,voba_make_i32(19) /* argument 2 */
        , VOBA_BOX_END };
        apply_ret_10 = voba_apply(voba_symbol_value(_2B_df97c6 /* + */),voba_make_tuple(apply_args_11));/* return value for apply */

    let_ret_6 = apply_ret_10; /* set letreturn value*/
    voba_value_t apply_ret_12 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
    voba_value_t apply_args_13 [] = { 2 /* prepare arguments for apply */
         ,let_ret_6/*it*/ /* argument 1 */
         ,voba_make_string(voba_str_from_cstr("good")) /* argument 2 */
    , VOBA_BOX_END };
    apply_ret_12 = voba_apply(voba_symbol_value(print_df94d6 /* print */),voba_make_tuple(apply_args_13));/* return value for apply */
}

