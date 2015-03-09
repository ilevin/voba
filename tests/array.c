#include <stdint.h>
#include <assert.h>
#define EXEC_ONCE_TU_NAME "TODO ADD "
#define EXEC_ONCE_DEPENDS {"voba.module"};
#include <voba/value.h>
#include <voba/core/builtin.h> // import builtin by default
#include <exec_once.h>
#include <voba/module.h>
#define voba_match_eq voba_eql
static voba_value_t gf_match __attribute__((unused)) = VOBA_UNDEF;
static voba_value_t gf_iter __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t get_class_119bff6 /* get_class */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t str_119c0e6 /* str */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t print_119c1e6 /* print */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t len_119c2d6 /* len */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t range_119c116 /* range */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _2B_119c4d6 /* + */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3E_119c5c6 /* > */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_119c6b6 /* < */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3E_3D_119c836 /* >= */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_3D_119c926 /* <= */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3D_3D_119ca16 /* == */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _25_119cb06 /* % */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_3C_119cbf6 /* << */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t array_119cce6 /* array */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t eq_119cdd6 /* eq */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t i32_mod_119cec6 /* i32_mod */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t eq_i32_mod_0_119d046 /* eq_i32_mod_0 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i8_119d136 /* cls_i8 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i16_119d226 /* cls_i16 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i32_119d316 /* cls_i32 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_u8_119d406 /* cls_u8 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_u16_119d4f6 /* cls_u16 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_u32_119d5e6 /* cls_u32 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_float_119d6d6 /* cls_float */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_str_119d7c6 /* cls_str */ __attribute__((unused)) = VOBA_UNDEF;
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
    get_class_119bff6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("get_class")));
}
{
    str_119c0e6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("str")));
}
{
    print_119c1e6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("print")));
}
{
    len_119c2d6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("len")));
}
{
    range_119c116 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("range")));
}
{
    _2B_119c4d6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("+")));
}
{
    _3E_119c5c6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr(">")));
}
{
    _3C_119c6b6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("<")));
}
{
    _3E_3D_119c836 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr(">=")));
}
{
    _3C_3D_119c926 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("<=")));
}
{
    _3D_3D_119ca16 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("==")));
}
{
    _25_119cb06 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("%")));
}
{
    _3C_3C_119cbf6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("<<")));
}
{
    array_119cce6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("array")));
}
{
    eq_119cdd6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("eq")));
}
{
    i32_mod_119cec6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("i32_mod")));
}
{
    eq_i32_mod_0_119d046 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("eq_i32_mod_0")));
}
{
    cls_i8_119d136 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_i8")));
}
{
    cls_i16_119d226 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_i16")));
}
{
    cls_i32_119d316 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_i32")));
}
{
    cls_u8_119d406 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_u8")));
}
{
    cls_u16_119d4f6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_u16")));
}
{
    cls_u32_119d5e6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_u32")));
}
{
    cls_float_119d6d6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_float")));
}
{
    cls_str_119d7c6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_str")));
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
            voba_value_t v_11992d6 /* v */ __attribute__((unused)) = VOBA_UNDEF;
            /* start to match the single variable v_11992d6 */
            if(voba_eq(v_11992d6,VOBA_UNDEF)){
                v_11992d6 = for_each_value_9; /* when v_11992d6 is unbound, bound it*/
            }else{
                 /* when v_11992d6 is already bound, try to test whether equal*/
                 if(!voba_match_eq(v_11992d6,for_each_value_9)){
                      goto for_each_end_5;/*if not equal goto the fail lable */
                 }
            }
            /* end to match the single variable v_11992d6*/
                voba_value_t apply_ret_16 __attribute__((unused)) = VOBA_UNDEF;/* return value for apply */
                voba_value_t apply_args_17 [] = { 1 /* prepare arguments for apply */
                     ,v_11992d6 /* v */ /* argument 1 */
                };
                apply_ret_16 = voba_apply(voba_symbol_value(print_119c1e6 /* print */),voba_make_tuple(apply_args_17));/* return value for apply */
        
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

