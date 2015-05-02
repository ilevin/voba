for i in exec_once vhash voba_builtin voba_compiler voba_module voba_str voba_value;do
    make -C $i clean
done
make clean
