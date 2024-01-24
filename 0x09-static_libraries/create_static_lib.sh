#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -o *.c
ar liball.c *.o
ranlib liball.a
