#!/bin/bash
gcc -Wall -pendatic -Werror -Wextra -o *.o
ar -rc liball.a *.c
ranlib liball.a
