#!/bin/bash
gcc -c -std=gnu89 ./*c
ar -rc liball.a ./*.o
