#!/bin/bash

cat <<EOF
build environment.
DRONE_REPO_SLUG=$DRONE_REPO_SLUG
DRONE_BUILD_URL=$DRONE_BUILD_URL
DRONE_BUILD_DIR=$DRONE_BUILD_DIR
DRONE_BUILD_NUMBER=$DRONE_BUILD_NUMBER
DRONE_COMMIT=$DRONE_COMMIT
DRONE_BRANCH=$DRONE_BRANCH
JOB_NAME=$JOB_NAME
WORKSPACE=$WORKSPACE
BUILD_URL=$BUILD_URL
BUILD_DIR=$BUILD_DIR
BUILD_ID=$BUILD_ID
GIT_COMMIT=$GIT_COMMIT
GIT_BRANCH=$GIT_BRANCH
SVN_REVISION=$SVN_REVISION
CFLAGS=$CFLAGS
LDFLAGS=$LDFLAGS
EOF


set -e

if [ -d /home/git.repository/voba.good ]; then
    export MY_GIT=/home/git.repository/voba.good
else
    export MY_GIT=http://github.com/wcy123
fi

if [ ! -d exec_once ]; then
    git clone $MY_GIT/exec_once.git exec_once
fi
cd exec_once
make &&  make test && make install || exit 1
cd ..


if [ ! x$WORKSPACE == x"" ]; then
    # http://docs.drone.io/cpp.html, I need c++-11 features.
    echo 2 | sudo update-alternatives --config gcc
    cd /tmp
    wget http://www.hboehm.info/gc/gc_source/gc-7.4.2.tar.gz
    wget http://www.ivmaisoft.com/_bin/atomic_ops/libatomic_ops-7.4.2.tar.gz
    tar -xzvf libatomic_ops-7.4.2.tar.gz 
    tar -xzvf gc-7.4.2.tar.gz
    (CC=gcc;cd gc-7.4.2 && ln -s ../libatomic_ops-7.4.2/ libatomic_ops && ./configure --enable-shared=yes --enable-static=no --prefix=/usr && make && sudo -E make install)
    cd $WORKSPACE
fi

if [ ! -d vhash ] ; then
    git clone $MY_GIT/vhash.git vhash
fi
cd vhash
make &&  make test && make install || exit 1
cd ..

if [ ! -d voba_str ]; then
    git clone $MY_GIT/voba_str.git voba_str
fi
cd voba_str
make &&  make test && make install || exit 1
cd ..


if [ ! -d voba_value ]; then
    git clone $MY_GIT/voba_value.git voba_value
fi
cd voba_value
make &&  make test && make install || exit 1
cd ..

if [ ! -d voba_module ]; then
    git clone $MY_GIT/voba_module.git voba_module
fi
cd voba_module
make &&  make test && make install || exit 1
cd ..


if [ ! -d voba_builtin ]; then
    git clone $MY_GIT/voba_builtin.git voba_builtin
fi
cd voba_builtin
make &&  make test && make install || exit 1
cd ..


if [ ! -d voba_compiler ]; then
    git clone $MY_GIT/voba_compiler.git voba_compiler
fi
cd voba_compiler
make &&  make test && make install || exit 1
cd ..


    

