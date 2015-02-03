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
    voba_value_t get_class_c0b1a6 /* get_class */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t str_c0b296 /* str */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t print_c0b396 /* print */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t len_c0b486 /* len */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t range_c0b2c6 /* range */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _2B_c0b686 /* + */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3E_c0b776 /* > */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_c0b866 /* < */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3E_3D_c0b9e6 /* >= */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_3D_c0bad6 /* <= */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3D_3D_c0bbc6 /* == */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _25_c0bcb6 /* % */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_3C_c0bda6 /* << */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t array_c0be96 /* array */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t eq_c0bf86 /* eq */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t i32_mod_c0c076 /* i32_mod */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t eq_i32_mod_0_c0c1f6 /* eq_i32_mod_0 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i8_c0c2e6 /* cls_i8 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i16_c0c3d6 /* cls_i16 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i32_c0c4c6 /* cls_i32 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_u8_c0c5b6 /* cls_u8 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_u16_c0c6a6 /* cls_u16 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_u32_c0c796 /* cls_u32 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_float_c0c886 /* cls_float */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_str_c0c976 /* cls_str */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t const_array_2 __attribute__((unused)) = VOBA_UNDEF; /* var for constant*/
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
    get_class_c0b1a6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","get_class");
}
{
    str_c0b296 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","str");
}
{
    print_c0b396 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","print");
}
{
    len_c0b486 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","len");
}
{
    range_c0b2c6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","range");
}
{
    _2B_c0b686 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","+");
}
{
    _3E_c0b776 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",">");
}
{
    _3C_c0b866 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","<");
}
{
    _3E_3D_c0b9e6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",">=");
}
{
    _3C_3D_c0bad6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","<=");
}
{
    _3D_3D_c0bbc6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","==");
}
{
    _25_c0bcb6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","%");
}
{
    _3C_3C_c0bda6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","<<");
}
{
    array_c0be96 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","array");
}
{
    eq_c0bf86 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","eq");
}
{
    i32_mod_c0c076 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","i32_mod");
}
{
    eq_i32_mod_0_c0c1f6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","eq_i32_mod_0");
}
{
    cls_i8_c0c2e6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","cls_i8");
}
{
    cls_i16_c0c3d6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","cls_i16");
}
{
    cls_i32_c0c4c6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","cls_i32");
}
{
    cls_u8_c0c5b6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","cls_u8");
}
{
    cls_u16_c0c6a6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","cls_u16");
}
{
    cls_u32_c0c796 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","cls_u32");
}
{
    cls_float_c0c886 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","cls_float");
}
{
    cls_str_c0c976 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a","cls_str");
}
    voba_value_t const_tuple_in_c_3 [] = { 3,voba_make_i32(1),voba_make_i32(2),voba_make_i32(3)};
    const_array_2 = voba_array_from_tuple(voba_make_tuple(const_tuple_in_c_3)); /* constant */
    voba_value_t apply_ret_0 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
    voba_value_t apply_args_1 [] = { 0 /* prepare arguments for apply */
    };
    apply_ret_0 = voba_apply(const_array_2,voba_make_tuple(apply_args_1));/* return value for apply */
    voba_value_t for_final_7 __attribute__((unused)) = VOBA_UNDEF;/* return value for `for' statement */
    voba_value_t for_each_value_9 = VOBA_UNDEF;/* input value of each iteration  */
    voba_value_t for_each_output_12 __attribute__((unused)) = VOBA_UNDEF;/* output value of each iteration  */
    voba_value_t for_each_last_output_13 __attribute__((unused)) = VOBA_UNDEF;/* init value for `for' statement*/
    voba_func_t  for_each_iter_f_11 = NULL;/* iter for `for' statement*/
    voba_value_t for_each_iter_10 __attribute__((unused)) = VOBA_UNDEF;/* tmp args for `for` each */
    for_each_iter_f_11 = voba_gf_lookup(voba_symbol_value(gf_iter), voba_get_class(apply_ret_0)); /* initialized iterator */
    if(for_each_iter_f_11 == NULL){
         voba_throw_exception(voba_make_string(VOBA_CONST_CHAR("cannot find the iterator")));
    }
    voba_value_t for_each_iter_args_14 [] = {1, apply_ret_0}; /* prepare to invoke the iterator*/
    for_each_iter_10 = for_each_iter_f_11(voba_make_func(for_each_iter_f_11),voba_make_tuple(for_each_iter_args_14)); /*get the iterator*/ 
    for_each_begin_4:{ /*prelude of `for' statement */
    voba_value_t for_each_args_8 [] = {1,apply_ret_0}; /* args for iterator*/
    for_each_value_9 = voba_apply(for_each_iter_10,voba_make_tuple(for_each_args_8)); /*invoke the iterator*/
    if(voba_eq(for_each_value_9,VOBA_DONE)){
        goto for_end_6;/* exit for loop */
    }
    /*for body begin*/
    /* match pattern 1 start*/
        /*empty label*/ {
            voba_value_t v_c08486 /* v */ __attribute__((unused)) = VOBA_UNDEF;
            /* start to match the single variable v_c08486 */
            if(voba_eq(v_c08486,VOBA_UNDEF)){
                v_c08486 = for_each_value_9; /* when v_c08486 is unbound, bound it*/
            }else{
                 /* when v_c08486 is already bound, try to test whether equal*/
                 if(!voba_match_eq(v_c08486,for_each_value_9)){
                      goto for_each_end_5;/*if not equal goto the fail lable */
                 }
            }
            /* end to match the single variable v_c08486*/
                voba_value_t apply_ret_16 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
                voba_value_t apply_args_17 [] = { 1 /* prepare arguments for apply */
                     ,v_c08486 /* v */ /* argument 1 */
                };
                apply_ret_16 = voba_apply(voba_symbol_value(print_c0b396 /* print */),voba_make_tuple(apply_args_17));/* return value for apply */
        
            for_each_output_12 = apply_ret_16; /* match statement return value*/
            goto for_each_end_5; // match goto end
    
        }
        /* match pattern 1 end*/ 

    /*for body end*/
    for_each_end_5: /* end label for each iteration */
    for_final_7 = for_each_last_output_13;  /* assign the final value for `for' statement */
    goto for_each_begin_4; /* for goto begin */
    for_end_6:  /* end label `for' */
    if(0) goto for_end_6;  /* suppress warning `label at end of compound statement' */
    }
}

