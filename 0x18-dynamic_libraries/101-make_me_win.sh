#!/bin/bash
wget -q --output-document=$HOME/libtest.so https://github.com/leulkashay/alx-low_level_programming/tree/master/0x18-dynamic_libraries/libtest.so
export LD_PRELOAD=$HOME/libtest.so
