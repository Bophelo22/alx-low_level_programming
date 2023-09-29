#!/bin/bash
gcc -c -Wall -Werror -Wextra -pendantic *.c
ar -rcs liball.a *.o
ranlib liball.a
