#include <stdint.h>
#include <assert.h>
#define EXEC_ONCE_TU_NAME "tests/addx.voba built at 2015-3-26 2:11:40."
#define EXEC_ONCE_DEPENDS {"voba.module"};
#include <voba/value.h>
#include <voba/core/builtin.h> // import builtin by default
#include <exec_once.h>
#include <voba/module.h>
#define voba_match_eq voba_eql
static voba_value_t gf_match __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t get_class_16c3656 /* get_class */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t str_16c3746 /* str */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t print_16c3846 /* print */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t len_16c3936 /* len */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t range_16c3776 /* range */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _2B_16c3b36 /* + */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3E_16c3c26 /* > */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_16c3d16 /* < */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3E_3D_16c3e96 /* >= */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_3D_16c3f86 /* <= */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3D_3D_16c4076 /* == */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _25_16c4166 /* % */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_3C_16c4256 /* << */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t array_16c4346 /* array */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t eq_16c4436 /* eq */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t i32_mod_16c4526 /* i32_mod */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t eq_i32_mod_0_16c46a6 /* eq_i32_mod_0 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i8_16c4796 /* cls_i8 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i16_16c4886 /* cls_i16 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i32_16c4976 /* cls_i32 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_u8_16c4a66 /* cls_u8 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_u16_16c4b56 /* cls_u16 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_u32_16c4c46 /* cls_u32 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_float_16c4d36 /* cls_float */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_str_16c4e26 /* cls_str */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t array_2Diter_16c4f16 /* array-iter */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t addx_16c0216 /* addx */ __attribute__((unused)) = VOBA_UNDEF;
VOBA_FUNC voba_value_t fun_1 (voba_value_t self, voba_value_t fun_args);
VOBA_FUNC voba_value_t addx_0 (voba_value_t self, voba_value_t fun_args);
VOBA_FUNC voba_value_t fun_1 (voba_value_t self, voba_value_t fun_args)
{
    voba_value_t apply_ret_2 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
        voba_value_t apply_args_3 [] = { 2 /* prepare arguments for apply */
             ,voba_tuple_at(self,0) /* argument 1 */
             ,voba_tuple_at(fun_args,0) /* argument 2 */
        };
        apply_ret_2 = voba_apply(voba_symbol_value(_2B_16c3b36 /* + */),voba_make_tuple(apply_args_3));/* return value for apply */
    return apply_ret_2; /* return fun_1 */
}
VOBA_FUNC voba_value_t addx_0 (voba_value_t self, voba_value_t fun_args)
{
    /* memory block for the closure */
        voba_value_t* p_for_closure_4  = voba_alloc(3);
        p_for_closure_4[0] = voba_make_func(fun_1);
        p_for_closure_4[1] = 3 - 2;
        p_for_closure_4[0+2] = voba_tuple_at(fun_args,0);
    return    voba_from_pointer((void*)p_for_closure_4,VOBA_TYPE_CLOSURE);
; /* return addx_0 */
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
    get_class_16c3656 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("get_class")));
}
{
    str_16c3746 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("str")));
}
{
    print_16c3846 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("print")));
}
{
    len_16c3936 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("len")));
}
{
    range_16c3776 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("range")));
}
{
    _2B_16c3b36 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("+")));
}
{
    _3E_16c3c26 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr(">")));
}
{
    _3C_16c3d16 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("<")));
}
{
    _3E_3D_16c3e96 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr(">=")));
}
{
    _3C_3D_16c3f86 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("<=")));
}
{
    _3D_3D_16c4076 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("==")));
}
{
    _25_16c4166 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("%")));
}
{
    _3C_3C_16c4256 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("<<")));
}
{
    array_16c4346 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("array")));
}
{
    eq_16c4436 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("eq")));
}
{
    i32_mod_16c4526 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("i32_mod")));
}
{
    eq_i32_mod_0_16c46a6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("eq_i32_mod_0")));
}
{
    cls_i8_16c4796 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_i8")));
}
{
    cls_i16_16c4886 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_i16")));
}
{
    cls_i32_16c4976 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_i32")));
}
{
    cls_u8_16c4a66 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_u8")));
}
{
    cls_u16_16c4b56 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_u16")));
}
{
    cls_u32_16c4c46 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_u32")));
}
{
    cls_float_16c4d36 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_float")));
}
{
    cls_str_16c4e26 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_str")));
}
{
    array_2Diter_16c4f16 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("array-iter")));
}
    voba_value_t addx_5 __attribute__((unused)) = VOBA_UNDEF;
    addx_5 = voba_make_func(addx_0);/* value for set var*/
    addx_16c0216 = addx_5; /* set addx */
    /*let env*/
    voba_value_t f_16c0ad6 /* f */ __attribute__((unused)) = VOBA_UNDEF;

    /*decl let return value*/
    voba_value_t let_ret_6 __attribute__((unused)) = VOBA_UNDEF;
    /*let body*/
    voba_value_t apply_ret_7 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
        voba_value_t apply_args_8 [] = { 1 /* prepare arguments for apply */
             ,voba_make_i32(10) /* argument 1 */
        };
        apply_ret_7 = voba_apply(addx_16c0216 /* addx */,voba_make_tuple(apply_args_8));/* return value for apply */
        voba_value_t f_9 __attribute__((unused)) = VOBA_UNDEF;
        f_9 = apply_ret_7;/* value for set var*/
        f_16c0ad6 = f_9; /* set f */
        voba_value_t apply_ret_12 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
        voba_value_t apply_args_13 [] = { 1 /* prepare arguments for apply */
             ,voba_make_i32(10) /* argument 1 */
        };
        apply_ret_12 = voba_apply(f_16c0ad6 /* f */,voba_make_tuple(apply_args_13));/* return value for apply */
        voba_value_t apply_ret_10 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
        voba_value_t apply_args_11 [] = { 1 /* prepare arguments for apply */
             ,apply_ret_12 /* argument 1 */
        };
        apply_ret_10 = voba_apply(voba_symbol_value(print_16c3846 /* print */),voba_make_tuple(apply_args_11));/* return value for apply */

    let_ret_6 = apply_ret_10; /* set letreturn value*/
}

