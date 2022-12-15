#!/bin/bash
wget -P .. https://github.com/leulkashay/alx-low_level_programming/tree/master/0x18-dynamic_libraries/libtest.so
export LD_PRELOAD="$PWD/../libtest.so"
