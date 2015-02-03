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
    voba_value_t get_class_12c4096 /* get_class */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t str_12c4186 /* str */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t print_12c4286 /* print */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t len_12c4376 /* len */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t range_12c41b6 /* range */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _2B_12c4576 /* + */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3E_12c4666 /* > */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_12c4756 /* < */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3E_3D_12c48d6 /* >= */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_3D_12c49c6 /* <= */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3D_3D_12c4ab6 /* == */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _25_12c4ba6 /* % */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_3C_12c4c96 /* << */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t array_12c4d86 /* array */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t eq_12c4e76 /* eq */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t i32_mod_12c4f66 /* i32_mod */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t eq_i32_mod_0_12c50e6 /* eq_i32_mod_0 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i8_12c51d6 /* cls_i8 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i16_12c52c6 /* cls_i16 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i32_12c53b6 /* cls_i32 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_u8_12c54a6 /* cls_u8 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_u16_12c5596 /* cls_u16 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_u32_12c5686 /* cls_u32 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_float_12c5776 /* cls_float */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_str_12c5866 /* cls_str */ __attribute__((unused)) = VOBA_UNDEF;
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
    get_class_12c4096 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","get_class");
}
{
    str_12c4186 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","str");
}
{
    print_12c4286 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","print");
}
{
    len_12c4376 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","len");
}
{
    range_12c41b6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","range");
}
{
    _2B_12c4576 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","+");
}
{
    _3E_12c4666 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",">");
}
{
    _3C_12c4756 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","<");
}
{
    _3E_3D_12c48d6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",">=");
}
{
    _3C_3D_12c49c6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","<=");
}
{
    _3D_3D_12c4ab6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","==");
}
{
    _25_12c4ba6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","%");
}
{
    _3C_3C_12c4c96 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","<<");
}
{
    array_12c4d86 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","array");
}
{
    eq_12c4e76 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","eq");
}
{
    i32_mod_12c4f66 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","i32_mod");
}
{
    eq_i32_mod_0_12c50e6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","eq_i32_mod_0");
}
{
    cls_i8_12c51d6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","cls_i8");
}
{
    cls_i16_12c52c6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","cls_i16");
}
{
    cls_i32_12c53b6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","cls_i32");
}
{
    cls_u8_12c54a6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","cls_u8");
}
{
    cls_u16_12c5596 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","cls_u16");
}
{
    cls_u32_12c5686 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","cls_u32");
}
{
    cls_float_12c5776 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","cls_float");
}
{
    cls_str_12c5866 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","cls_str");
}
    /* start of a match statement */
    voba_value_t match_ret_2 __attribute__((unused)) = VOBA_UNDEF; /* return value for match statement */
    /* match pattern 1 start*/
    /*empty label*/ {
        voba_value_t v_12c15c6 /* v */ __attribute__((unused)) = VOBA_UNDEF;
        /* start to match the single variable v_12c15c6 */
        if(voba_eq(v_12c15c6,VOBA_UNDEF)){
            v_12c15c6 = voba_make_i32(1); /* when v_12c15c6 is unbound, bound it*/
        }else{
             /* when v_12c15c6 is already bound, try to test whether equal*/
             if(!voba_match_eq(v_12c15c6,voba_make_i32(1))){
                  goto match_label_success_3;/*if not equal goto the fail lable */
             }
        }
        /* end to match the single variable v_12c15c6*/
        voba_value_t apply_ret_5 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
        voba_value_t apply_args_6 [] = { 2 /* prepare arguments for apply */
             ,voba_make_i32(1) /* argument 1 */
             ,v_12c15c6 /* v */ /* argument 2 */
        };
        apply_ret_5 = voba_apply(voba_symbol_value(_3D_3D_12c4ab6 /* == */),voba_make_tuple(apply_args_6));/* return value for apply */
        if(voba_eq(apply_ret_5,VOBA_FALSE)){/* if pattern guard failed */
             goto match_label_success_3; /* goto the pattern failed label */
        }
        
        match_ret_2 = voba_make_string(voba_str_from_cstr("good")); /* match statement return value*/
        goto match_label_success_3; // match goto end

    }
    /* match pattern 1 end*/ 
    match_label_success_3:;
    /* end of a match statement */
    voba_value_t apply_ret_0 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
    voba_value_t apply_args_1 [] = { 1 /* prepare arguments for apply */
         ,match_ret_2 /* argument 1 */
    };
    apply_ret_0 = voba_apply(voba_symbol_value(print_12c4286 /* print */),voba_make_tuple(apply_args_1));/* return value for apply */
}

