#!/bin/bash
gcc -Wall -pendatic -Werror -Wextra -o *.c
ar -rc liball.a *.c
ranlib liball.a
