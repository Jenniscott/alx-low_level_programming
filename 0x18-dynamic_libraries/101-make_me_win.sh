#!/bin/bash
wget -P ..  https://raw.githubusercontent.com/Jenniscott/alx-low_level_programming/master/0x18-dynamic_libraries/libfile.so
export LD_PRELOAD="$PWD/../libfile.so"
