#include <stdint.h>
#include <assert.h>
#define EXEC_ONCE_TU_NAME "tests/constant.voba built at 2015-5-2 13:15:4."
#define EXEC_ONCE_DEPENDS {"voba.module"};
#include <voba/value.h>
#include <voba/core/builtin.h> // import builtin by default
#include <exec_once.h>
#include <voba/module.h>
#define voba_match_eq voba_eql
    voba_value_t get_class_1849586 /* get_class */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t str_1849686 /* str */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t print_1849776 /* print */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t len_18495b6 /* len */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t range_1849976 /* range */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _2B_1849a66 /* + */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3E_1849b56 /* > */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_1849cd6 /* < */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3E_3D_1849dc6 /* >= */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_3D_1849eb6 /* <= */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3D_3D_1849fa6 /* == */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _25_184a096 /* % */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t _3C_3C_184a186 /* << */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t array_184a276 /* array */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t eq_184a366 /* eq */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t i32_mod_184a4e6 /* i32_mod */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t eq_i32_mod_0_184a5d6 /* eq_i32_mod_0 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_i32_184a6c6 /* cls_i32 */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_float_184a7b6 /* cls_float */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t cls_str_184a8a6 /* cls_str */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t array_2Diter_184a996 /* array-iter */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t isa_184aa86 /* isa */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t match_2Dtuple_184ab76 /* match-tuple */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t tuple_184ac66 /* tuple */ __attribute__((unused)) = VOBA_UNDEF;
    voba_value_t x_value_184c456 /* x_value */ __attribute__((unused)) = VOBA_UNDEF;
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
    const char * name = "./constant";
    const char * id = "851a8502-b0e7-11e4-bf65-0800272ae0cc";
    const char * symbols[] = {
         "x_value",
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
    get_class_1849586 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("get_class")));
}
{
    str_1849686 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("str")));
}
{
    print_1849776 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("print")));
}
{
    len_18495b6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("len")));
}
{
    range_1849976 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("range")));
}
{
    _2B_1849a66 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("+")));
}
{
    _3E_1849b56 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr(">")));
}
{
    _3C_1849cd6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("<")));
}
{
    _3E_3D_1849dc6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr(">=")));
}
{
    _3C_3D_1849eb6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("<=")));
}
{
    _3D_3D_1849fa6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("==")));
}
{
    _25_184a096 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("%")));
}
{
    _3C_3C_184a186 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("<<")));
}
{
    array_184a276 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("array")));
}
{
    eq_184a366 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("eq")));
}
{
    i32_mod_184a4e6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("i32_mod")));
}
{
    eq_i32_mod_0_184a5d6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("eq_i32_mod_0")));
}
{
    cls_i32_184a6c6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_i32")));
}
{
    cls_float_184a7b6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_float")));
}
{
    cls_str_184a8a6 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("cls_str")));
}
{
    array_2Diter_184a996 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("array-iter")));
}
{
    isa_184aa86 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("isa")));
}
{
    match_2Dtuple_184ab76 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("match-tuple")));
}
{
    tuple_184ac66 = voba_module_var("builtin","28b4792c-366b-11e4-aa00-08002796644a",voba_make_string(voba_str_from_cstr("tuple")));
}
{
    x_value_184c456 = voba_module_var("./constant","851a8502-b0e7-11e4-bf65-0800272ae0cc",voba_make_string(voba_str_from_cstr("x_value")));
}
    voba_value_t x_value_0 __attribute__((unused)) = VOBA_UNDEF;
    x_value_0 = VOBA_NIL;/* value for set var*/
voba_symbol_set_value(x_value_184c456,x_value_0);/*set var x_value*/
}

