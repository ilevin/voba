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
WORKSPACE: the=$WORKSPACE: the
BUILD_URL=$BUILD_URL
BUILD_DIR=$BUILD_DIR
BUILD_ID=$BUILD_ID
GIT_COMMIT=$GIT_COMMIT
GIT_BRANCH=$GIT_BRANCH
SVN_REVISION=$SVN_REVISION
EOF


set -e

if [ -d /home/git.repository/voba.good ]; then
    export MY_GIT=/home/git.repository/voba.good
else
    export MY_GIT=http://github.com/wcy123
fi



git clone $MY_GIT/exec_once.git exec_once
cd exec_once
make &&  make test && make install || exit 1
cd ..

# http://docs.drone.io/cpp.html, I need c++-11 features.
# echo 2 | sudo update-alternatives --config gcc
git clone $MY_GIT/vhash.git vhash
cd vhash
make &&  make test && make install || exit 1
cd ..


git clone $MY_GIT/voba_str.git voba_str
cd voba_str
make &&  make test && make install || exit 1
cd ..

git clone $MY_GIT/voba_value.git voba_value
cd voba_value
make &&  make test && make install || exit 1
cd ..

