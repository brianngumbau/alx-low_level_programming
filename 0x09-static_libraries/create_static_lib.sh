#!/bin/bash
gcc -Wall -pendatic -Werror -Wextra -c *.o
ar -rc liball.a *.c
ranlib liball.a
