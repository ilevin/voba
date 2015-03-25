#include <stdint.h>
#include <assert.h>
#define EXEC_ONCE_TU_NAME "tests/generator.voba built at 2015-3-25 5:5:31."
#define EXEC_ONCE_DEPENDS {"voba.module"};
#include <voba/value.h>
#include <voba/core/builtin.h> // import builtin by default
#include <exec_once.h>
#include <voba/module.h>
#define voba_match_eq voba_eql
static voba_value_t gf_match __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t get_class_1c30766 /* get_class */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t str_1c30856 /* str */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t print_1c30956 /* print */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t len_1c30a46 /* len */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t range_1c30886 /* range */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _2B_1c30c46 /* + */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3E_1c30d36 /* > */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_1c30e26 /* < */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3E_3D_1c30fa6 /* >= */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_3D_1c31096 /* <= */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3D_3D_1c31186 /* == */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _25_1c31276 /* % */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_3C_1c31366 /* << */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t array_1c31456 /* array */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t eq_1c31546 /* eq */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t i32_mod_1c31636 /* i32_mod */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t eq_i32_mod_0_1c317b6 /* eq_i32_mod_0 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i8_1c318a6 /* cls_i8 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i16_1c31996 /* cls_i16 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i32_1c31a86 /* cls_i32 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_u8_1c31b76 /* cls_u8 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_u16_1c31c66 /* cls_u16 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_u32_1c31d56 /* cls_u32 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_float_1c31e46 /* cls_float */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_str_1c31f36 /* cls_str */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t array_2Diter_1c32026 /* array-iter */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t return1_1c2b526 /* return1 */ __attribute__((unused)) = VOBA_UNDEF;
VOBA_FUNC voba_value_t return1_0 (voba_value_t self, voba_value_t fun_args);
VOBA_FUNC voba_value_t return1_0_17 (voba_value_t self, voba_value_t fun_args);
VOBA_FUNC voba_value_t return1_0 (voba_value_t self, voba_value_t fun_args)
{
    voba_value_t apply_ret_1 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
        voba_value_t apply_args_2 [] = { 2 /* prepare arguments for apply */
             ,voba_make_string(voba_str_from_cstr("hello")) /* argument 1 */
             ,voba_tuple_at(fun_args,0) /* argument 2 */
        };
        apply_ret_1 = voba_apply(voba_symbol_value(print_1c30956 /* print */),voba_make_tuple(apply_args_2));/* return value for apply */
        /*let env*/
        voba_value_t b_1c2bab6 /* b */ __attribute__((unused)) = VOBA_UNDEF;
    
        /*decl let return value*/
        voba_value_t let_ret_3 __attribute__((unused)) = VOBA_UNDEF;
        /*let body*/
        voba_value_t apply_ret_4 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
            voba_value_t apply_args_5 [] = { 2 /* prepare arguments for apply */
                 ,voba_make_i32(1) /* argument 1 */
                 ,voba_tuple_at(fun_args,0) /* argument 2 */
            };
            apply_ret_4 = voba_apply(voba_symbol_value(_2B_1c30c46 /* + */),voba_make_tuple(apply_args_5));/* return value for apply */
            voba_value_t yield_ret_val_6 __attribute__((unused)) = 0;
            yield_ret_val_6 = cg_yield(__builtin_frame_address(0), apply_ret_4);
            voba_value_t b_7 __attribute__((unused)) = VOBA_UNDEF;
            b_7 = yield_ret_val_6;/* value for set var*/
            b_1c2bab6 = b_7; /* set b */
            voba_value_t apply_ret_12 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
            voba_value_t apply_args_13 [] = { 2 /* prepare arguments for apply */
                 ,voba_make_i32(1) /* argument 1 */
                 ,b_1c2bab6 /* b */ /* argument 2 */
            };
            apply_ret_12 = voba_apply(voba_symbol_value(_2B_1c30c46 /* + */),voba_make_tuple(apply_args_13));/* return value for apply */
            voba_value_t yield_ret_val_14 __attribute__((unused)) = 0;
            yield_ret_val_14 = cg_yield(__builtin_frame_address(0), apply_ret_12);
            voba_value_t apply_ret_10 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
            voba_value_t apply_args_11 [] = { 2 /* prepare arguments for apply */
                 ,voba_make_string(voba_str_from_cstr("yield return ")) /* argument 1 */
                 ,yield_ret_val_14 /* argument 2 */
            };
            apply_ret_10 = voba_apply(voba_symbol_value(array_1c31456 /* array */),voba_make_tuple(apply_args_11));/* return value for apply */
            voba_value_t apply_ret_8 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
            voba_value_t apply_args_9 [] = { 1 /* prepare arguments for apply */
                 ,apply_ret_10 /* argument 1 */
            };
            apply_ret_8 = voba_apply(voba_symbol_value(print_1c30956 /* print */),voba_make_tuple(apply_args_9));/* return value for apply */
    
        let_ret_3 = apply_ret_8; /* set letreturn value*/
        voba_value_t apply_ret_15 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
        voba_value_t apply_args_16 [] = { 1 /* prepare arguments for apply */
             ,voba_make_string(voba_str_from_cstr("world")) /* argument 1 */
        };
        apply_ret_15 = voba_apply(voba_symbol_value(print_1c30956 /* print */),voba_make_tuple(apply_args_16));/* return value for apply */
    return voba_make_i32(6); /* return return1_0 */
}
VOBA_FUNC voba_value_t return1_0_17 (voba_value_t self, voba_value_t fun_args)
{
 /* a bridge to create a generator */
    return voba_make_generator(return1_0, self, fun_args);
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
    get_class_1c30766 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("get_class")));
}
{
    str_1c30856 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("str")));
}
{
    print_1c30956 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("print")));
}
{
    len_1c30a46 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("len")));
}
{
    range_1c30886 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("range")));
}
{
    _2B_1c30c46 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("+")));
}
{
    _3E_1c30d36 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr(">")));
}
{
    _3C_1c30e26 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("<")));
}
{
    _3E_3D_1c30fa6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr(">=")));
}
{
    _3C_3D_1c31096 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("<=")));
}
{
    _3D_3D_1c31186 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("==")));
}
{
    _25_1c31276 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("%")));
}
{
    _3C_3C_1c31366 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("<<")));
}
{
    array_1c31456 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("array")));
}
{
    eq_1c31546 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("eq")));
}
{
    i32_mod_1c31636 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("i32_mod")));
}
{
    eq_i32_mod_0_1c317b6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("eq_i32_mod_0")));
}
{
    cls_i8_1c318a6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_i8")));
}
{
    cls_i16_1c31996 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_i16")));
}
{
    cls_i32_1c31a86 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_i32")));
}
{
    cls_u8_1c31b76 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_u8")));
}
{
    cls_u16_1c31c66 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_u16")));
}
{
    cls_u32_1c31d56 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_u32")));
}
{
    cls_float_1c31e46 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_float")));
}
{
    cls_str_1c31f36 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_str")));
}
{
    array_2Diter_1c32026 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("array-iter")));
}
    voba_value_t return1_18 __attribute__((unused)) = VOBA_UNDEF;
    return1_18 = voba_make_func(return1_0_17);/* value for set var*/
    return1_1c2b526 = return1_18; /* set return1 */
    /*let env*/
    voba_value_t g_1c2ca76 /* g */ __attribute__((unused)) = VOBA_UNDEF;
        voba_value_t r1_1c2cda6 /* r1 */ __attribute__((unused)) = VOBA_UNDEF;
        voba_value_t r2_1c2d066 /* r2 */ __attribute__((unused)) = VOBA_UNDEF;
        voba_value_t r3_1c2d616 /* r3 */ __attribute__((unused)) = VOBA_UNDEF;
        voba_value_t r4_1c2d016 /* r4 */ __attribute__((unused)) = VOBA_UNDEF;

    /*decl let return value*/
    voba_value_t let_ret_19 __attribute__((unused)) = VOBA_UNDEF;
    /*let body*/
    voba_value_t apply_ret_20 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
        voba_value_t apply_args_21 [] = { 1 /* prepare arguments for apply */
             ,voba_make_i32(0) /* argument 1 */
        };
        apply_ret_20 = voba_apply(return1_1c2b526 /* return1 */,voba_make_tuple(apply_args_21));/* return value for apply */
        voba_value_t g_22 __attribute__((unused)) = VOBA_UNDEF;
        g_22 = apply_ret_20;/* value for set var*/
        g_1c2ca76 = g_22; /* set g */
        voba_value_t apply_ret_23 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
        voba_value_t apply_args_24 [] = { 1 /* prepare arguments for apply */
             ,voba_make_i32(1) /* argument 1 */
        };
        apply_ret_23 = voba_apply(g_1c2ca76 /* g */,voba_make_tuple(apply_args_24));/* return value for apply */
        voba_value_t r1_25 __attribute__((unused)) = VOBA_UNDEF;
        r1_25 = apply_ret_23;/* value for set var*/
        r1_1c2cda6 = r1_25; /* set r1 */
        voba_value_t apply_ret_28 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
        voba_value_t apply_args_29 [] = { 2 /* prepare arguments for apply */
             ,voba_make_i32(1) /* argument 1 */
             ,r1_1c2cda6 /* r1 */ /* argument 2 */
        };
        apply_ret_28 = voba_apply(voba_symbol_value(_2B_1c30c46 /* + */),voba_make_tuple(apply_args_29));/* return value for apply */
        voba_value_t apply_ret_26 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
        voba_value_t apply_args_27 [] = { 1 /* prepare arguments for apply */
             ,apply_ret_28 /* argument 1 */
        };
        apply_ret_26 = voba_apply(g_1c2ca76 /* g */,voba_make_tuple(apply_args_27));/* return value for apply */
        voba_value_t r2_30 __attribute__((unused)) = VOBA_UNDEF;
        r2_30 = apply_ret_26;/* value for set var*/
        r2_1c2d066 = r2_30; /* set r2 */
        voba_value_t apply_ret_33 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
        voba_value_t apply_args_34 [] = { 2 /* prepare arguments for apply */
             ,voba_make_i32(1) /* argument 1 */
             ,r2_1c2d066 /* r2 */ /* argument 2 */
        };
        apply_ret_33 = voba_apply(voba_symbol_value(_2B_1c30c46 /* + */),voba_make_tuple(apply_args_34));/* return value for apply */
        voba_value_t apply_ret_31 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
        voba_value_t apply_args_32 [] = { 1 /* prepare arguments for apply */
             ,apply_ret_33 /* argument 1 */
        };
        apply_ret_31 = voba_apply(g_1c2ca76 /* g */,voba_make_tuple(apply_args_32));/* return value for apply */
        voba_value_t r3_35 __attribute__((unused)) = VOBA_UNDEF;
        r3_35 = apply_ret_31;/* value for set var*/
        r3_1c2d616 = r3_35; /* set r3 */
        voba_value_t apply_ret_38 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
        voba_value_t apply_args_39 [] = { 2 /* prepare arguments for apply */
             ,voba_make_i32(1) /* argument 1 */
             ,r3_1c2d616 /* r3 */ /* argument 2 */
        };
        apply_ret_38 = voba_apply(voba_symbol_value(_2B_1c30c46 /* + */),voba_make_tuple(apply_args_39));/* return value for apply */
        voba_value_t apply_ret_36 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
        voba_value_t apply_args_37 [] = { 1 /* prepare arguments for apply */
             ,apply_ret_38 /* argument 1 */
        };
        apply_ret_36 = voba_apply(g_1c2ca76 /* g */,voba_make_tuple(apply_args_37));/* return value for apply */
        voba_value_t r4_40 __attribute__((unused)) = VOBA_UNDEF;
        r4_40 = apply_ret_36;/* value for set var*/
        r4_1c2d016 = r4_40; /* set r4 */
        voba_value_t apply_ret_43 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
        voba_value_t apply_args_44 [] = { 4 /* prepare arguments for apply */
             ,r1_1c2cda6 /* r1 */ /* argument 1 */
             ,r2_1c2d066 /* r2 */ /* argument 2 */
             ,r3_1c2d616 /* r3 */ /* argument 3 */
             ,r4_1c2d016 /* r4 */ /* argument 4 */
        };
        apply_ret_43 = voba_apply(voba_symbol_value(array_1c31456 /* array */),voba_make_tuple(apply_args_44));/* return value for apply */
        voba_value_t apply_ret_41 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
        voba_value_t apply_args_42 [] = { 1 /* prepare arguments for apply */
             ,apply_ret_43 /* argument 1 */
        };
        apply_ret_41 = voba_apply(voba_symbol_value(print_1c30956 /* print */),voba_make_tuple(apply_args_42));/* return value for apply */

    let_ret_19 = apply_ret_41; /* set letreturn value*/
}

