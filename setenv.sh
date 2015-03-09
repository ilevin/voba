export LD_LIBRARY_PATH=./build/lib
export EXEC_ONCE_DEBUG=0
export VOBA_PATH=./build/lib/voba/core:.
export CONFIG=release
export YY_FLEX_DEBUG=0
export VOBA_MODULE_DEBUG=0
export PATH=../build/bin:/usr/local/bin:/usr/bin:/bin:/usr/bin/X11:/usr/games

$*
