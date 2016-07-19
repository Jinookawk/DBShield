#!/bin/bash

INCLUDE_PATH="./header"
SOURCE_PATH="./src"
COMPILE_MACRO="-DDEBUG"
rm -rf logManager.o
gcc -g -O0 -std=gnu99 logManager.c main.c -o logManager -L/usr/lib64/jimant -L/usr/local/lib -Wl,-rpath=/usr/local/lib -ljimant_cryption  -lgcrypt
