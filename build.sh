#!/bin/bash

set -e



# export MY_GIT=http://github.com/wcy123
export MY_GIT=/home/git.repository/voba.good

git clone $MY_GIT/exec_once.git exec_once
cd exec_once
make &&  make test && make install
cd ..


git clone $MY_GIT/vhash.git vhash
cd vhash
make &&  make test && make install
cd ..


git clone $MY_GIT/voba_str.git voba_str
cd voba_str
make &&  make test && make install
cd ..

git clone $MY_GIT/voba_value.git voba_value
cd voba_value
make &&  make test && make install
cd ..

