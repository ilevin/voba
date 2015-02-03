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
    voba_value_t get_class_e13986 /* get_class */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t str_e13a76 /* str */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t print_e13b76 /* print */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t len_e13c66 /* len */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t range_e13aa6 /* range */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _2B_e13e66 /* + */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3E_e13f56 /* > */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_e14046 /* < */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3E_3D_e141c6 /* >= */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_3D_e142b6 /* <= */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3D_3D_e143a6 /* == */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _25_e14496 /* % */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_3C_e14586 /* << */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t array_e14676 /* array */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t eq_e14766 /* eq */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t i32_mod_e14856 /* i32_mod */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t eq_i32_mod_0_e149d6 /* eq_i32_mod_0 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i8_e14ac6 /* cls_i8 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i16_e14bb6 /* cls_i16 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i32_e14ca6 /* cls_i32 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_u8_e14d96 /* cls_u8 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_u16_e14e86 /* cls_u16 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_u32_e14f76 /* cls_u32 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_float_e15066 /* cls_float */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_str_e15156 /* cls_str */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t return1_e0e716 /* return1 */ __attribute__((unused)) = VOBA_UNDEF;
VOBA_FUNC voba_value_t return1_0 (voba_value_t self, voba_value_t fun_args);
VOBA_FUNC voba_value_t return1_0_17 (voba_value_t self, voba_value_t fun_args);
VOBA_FUNC voba_value_t return1_0 (voba_value_t self, voba_value_t fun_args)
{
    voba_value_t apply_ret_1 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
        voba_value_t apply_args_2 [] = { 2 /* prepare arguments for apply */
             ,voba_make_string(voba_str_from_cstr("hello")) /* argument 1 */
             ,voba_tuple_at(fun_args,0) /* argument 2 */
        };
        apply_ret_1 = voba_apply(voba_symbol_value(print_e13b76 /* print */),voba_make_tuple(apply_args_2));/* return value for apply */
        /*let env*/
        voba_value_t b_e0eca6 /* b */ __attribute__((unused)) = VOBA_UNDEF;
    
        /*decl let return value*/
        voba_value_t let_ret_3 __attribute__((unused)) = VOBA_UNDEF;
        /*let body*/
        voba_value_t apply_ret_4 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
            voba_value_t apply_args_5 [] = { 2 /* prepare arguments for apply */
                 ,voba_make_i32(1) /* argument 1 */
                 ,voba_tuple_at(fun_args,0) /* argument 2 */
            };
            apply_ret_4 = voba_apply(voba_symbol_value(_2B_e13e66 /* + */),voba_make_tuple(apply_args_5));/* return value for apply */
            voba_value_t yield_ret_val_6 __attribute__((unused)) = 0;
            yield_ret_val_6 = cg_yield(__builtin_frame_address(0), apply_ret_4);
            voba_value_t b_7 __attribute__((unused)) = VOBA_UNDEF;
            b_7 = yield_ret_val_6;/* value for set var*/
            b_e0eca6 = b_7; /* set b */
            voba_value_t apply_ret_12 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
            voba_value_t apply_args_13 [] = { 2 /* prepare arguments for apply */
                 ,voba_make_i32(1) /* argument 1 */
                 ,b_e0eca6 /* b */ /* argument 2 */
            };
            apply_ret_12 = voba_apply(voba_symbol_value(_2B_e13e66 /* + */),voba_make_tuple(apply_args_13));/* return value for apply */
            voba_value_t yield_ret_val_14 __attribute__((unused)) = 0;
            yield_ret_val_14 = cg_yield(__builtin_frame_address(0), apply_ret_12);
            voba_value_t apply_ret_10 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
            voba_value_t apply_args_11 [] = { 2 /* prepare arguments for apply */
                 ,voba_make_string(voba_str_from_cstr("yield return ")) /* argument 1 */
                 ,yield_ret_val_14 /* argument 2 */
            };
            apply_ret_10 = voba_apply(voba_symbol_value(array_e14676 /* array */),voba_make_tuple(apply_args_11));/* return value for apply */
            voba_value_t apply_ret_8 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
            voba_value_t apply_args_9 [] = { 1 /* prepare arguments for apply */
                 ,apply_ret_10 /* argument 1 */
            };
            apply_ret_8 = voba_apply(voba_symbol_value(print_e13b76 /* print */),voba_make_tuple(apply_args_9));/* return value for apply */
    
        let_ret_3 = apply_ret_8; /* set letreturn value*/
        voba_value_t apply_ret_15 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
        voba_value_t apply_args_16 [] = { 1 /* prepare arguments for apply */
             ,voba_make_string(voba_str_from_cstr("world")) /* argument 1 */
        };
        apply_ret_15 = voba_apply(voba_symbol_value(print_e13b76 /* print */),voba_make_tuple(apply_args_16));/* return value for apply */
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
    get_class_e13986 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","get_class");
}
{
    str_e13a76 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","str");
}
{
    print_e13b76 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","print");
}
{
    len_e13c66 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","len");
}
{
    range_e13aa6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","range");
}
{
    _2B_e13e66 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","+");
}
{
    _3E_e13f56 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",">");
}
{
    _3C_e14046 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","<");
}
{
    _3E_3D_e141c6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",">=");
}
{
    _3C_3D_e142b6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","<=");
}
{
    _3D_3D_e143a6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","==");
}
{
    _25_e14496 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","%");
}
{
    _3C_3C_e14586 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","<<");
}
{
    array_e14676 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","array");
}
{
    eq_e14766 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","eq");
}
{
    i32_mod_e14856 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","i32_mod");
}
{
    eq_i32_mod_0_e149d6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","eq_i32_mod_0");
}
{
    cls_i8_e14ac6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","cls_i8");
}
{
    cls_i16_e14bb6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","cls_i16");
}
{
    cls_i32_e14ca6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","cls_i32");
}
{
    cls_u8_e14d96 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","cls_u8");
}
{
    cls_u16_e14e86 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","cls_u16");
}
{
    cls_u32_e14f76 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","cls_u32");
}
{
    cls_float_e15066 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","cls_float");
}
{
    cls_str_e15156 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","cls_str");
}
    voba_value_t return1_18 __attribute__((unused)) = VOBA_UNDEF;
    return1_18 = voba_make_func(return1_0_17);/* value for set var*/
    return1_e0e716 = return1_18; /* set return1 */
    /*let env*/
    voba_value_t g_e0fc66 /* g */ __attribute__((unused)) = VOBA_UNDEF;
        voba_value_t r1_e0ff96 /* r1 */ __attribute__((unused)) = VOBA_UNDEF;
        voba_value_t r2_e10256 /* r2 */ __attribute__((unused)) = VOBA_UNDEF;
        voba_value_t r3_e10806 /* r3 */ __attribute__((unused)) = VOBA_UNDEF;
        voba_value_t r4_e10206 /* r4 */ __attribute__((unused)) = VOBA_UNDEF;

    /*decl let return value*/
    voba_value_t let_ret_19 __attribute__((unused)) = VOBA_UNDEF;
    /*let body*/
    voba_value_t apply_ret_20 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
        voba_value_t apply_args_21 [] = { 1 /* prepare arguments for apply */
             ,voba_make_i32(0) /* argument 1 */
        };
        apply_ret_20 = voba_apply(return1_e0e716 /* return1 */,voba_make_tuple(apply_args_21));/* return value for apply */
        voba_value_t g_22 __attribute__((unused)) = VOBA_UNDEF;
        g_22 = apply_ret_20;/* value for set var*/
        g_e0fc66 = g_22; /* set g */
        voba_value_t apply_ret_23 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
        voba_value_t apply_args_24 [] = { 1 /* prepare arguments for apply */
             ,voba_make_i32(1) /* argument 1 */
        };
        apply_ret_23 = voba_apply(g_e0fc66 /* g */,voba_make_tuple(apply_args_24));/* return value for apply */
        voba_value_t r1_25 __attribute__((unused)) = VOBA_UNDEF;
        r1_25 = apply_ret_23;/* value for set var*/
        r1_e0ff96 = r1_25; /* set r1 */
        voba_value_t apply_ret_28 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
        voba_value_t apply_args_29 [] = { 2 /* prepare arguments for apply */
             ,voba_make_i32(1) /* argument 1 */
             ,r1_e0ff96 /* r1 */ /* argument 2 */
        };
        apply_ret_28 = voba_apply(voba_symbol_value(_2B_e13e66 /* + */),voba_make_tuple(apply_args_29));/* return value for apply */
        voba_value_t apply_ret_26 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
        voba_value_t apply_args_27 [] = { 1 /* prepare arguments for apply */
             ,apply_ret_28 /* argument 1 */
        };
        apply_ret_26 = voba_apply(g_e0fc66 /* g */,voba_make_tuple(apply_args_27));/* return value for apply */
        voba_value_t r2_30 __attribute__((unused)) = VOBA_UNDEF;
        r2_30 = apply_ret_26;/* value for set var*/
        r2_e10256 = r2_30; /* set r2 */
        voba_value_t apply_ret_33 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
        voba_value_t apply_args_34 [] = { 2 /* prepare arguments for apply */
             ,voba_make_i32(1) /* argument 1 */
             ,r2_e10256 /* r2 */ /* argument 2 */
        };
        apply_ret_33 = voba_apply(voba_symbol_value(_2B_e13e66 /* + */),voba_make_tuple(apply_args_34));/* return value for apply */
        voba_value_t apply_ret_31 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
        voba_value_t apply_args_32 [] = { 1 /* prepare arguments for apply */
             ,apply_ret_33 /* argument 1 */
        };
        apply_ret_31 = voba_apply(g_e0fc66 /* g */,voba_make_tuple(apply_args_32));/* return value for apply */
        voba_value_t r3_35 __attribute__((unused)) = VOBA_UNDEF;
        r3_35 = apply_ret_31;/* value for set var*/
        r3_e10806 = r3_35; /* set r3 */
        voba_value_t apply_ret_38 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
        voba_value_t apply_args_39 [] = { 2 /* prepare arguments for apply */
             ,voba_make_i32(1) /* argument 1 */
             ,r3_e10806 /* r3 */ /* argument 2 */
        };
        apply_ret_38 = voba_apply(voba_symbol_value(_2B_e13e66 /* + */),voba_make_tuple(apply_args_39));/* return value for apply */
        voba_value_t apply_ret_36 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
        voba_value_t apply_args_37 [] = { 1 /* prepare arguments for apply */
             ,apply_ret_38 /* argument 1 */
        };
        apply_ret_36 = voba_apply(g_e0fc66 /* g */,voba_make_tuple(apply_args_37));/* return value for apply */
        voba_value_t r4_40 __attribute__((unused)) = VOBA_UNDEF;
        r4_40 = apply_ret_36;/* value for set var*/
        r4_e10206 = r4_40; /* set r4 */
        voba_value_t apply_ret_43 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
        voba_value_t apply_args_44 [] = { 4 /* prepare arguments for apply */
             ,r1_e0ff96 /* r1 */ /* argument 1 */
             ,r2_e10256 /* r2 */ /* argument 2 */
             ,r3_e10806 /* r3 */ /* argument 3 */
             ,r4_e10206 /* r4 */ /* argument 4 */
        };
        apply_ret_43 = voba_apply(voba_symbol_value(array_e14676 /* array */),voba_make_tuple(apply_args_44));/* return value for apply */
        voba_value_t apply_ret_41 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
        voba_value_t apply_args_42 [] = { 1 /* prepare arguments for apply */
             ,apply_ret_43 /* argument 1 */
        };
        apply_ret_41 = voba_apply(voba_symbol_value(print_e13b76 /* print */),voba_make_tuple(apply_args_42));/* return value for apply */

    let_ret_19 = apply_ret_41; /* set letreturn value*/
}

