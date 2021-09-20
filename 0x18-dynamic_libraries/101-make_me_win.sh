#!/bin/bash
wget -P /tmp https://github.com/Irene-Busah/alx-low_level_programming/blob/main/0x18-dynamic_libraries/libwin.so
export LD_PRELOAD=/tmp/libwinner.so
