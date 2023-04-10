#!/bin/bash
gcc -c -Wall -Werror -Wextra -pendatic *.c
ar -rc liball.a *.o
ranlib liball.a
