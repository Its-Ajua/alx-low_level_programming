#!/bin/bash
wget -P /tmp https://github.com/Its-Ajua/alx-low_level_programming/raw/main/0x18-dynamic_libraries/milgaga.so
export LD_PRELOAD=/tmp/milgaga.so
