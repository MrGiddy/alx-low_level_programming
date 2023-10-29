#!/bin/bash
gcc -Wall -Werror -pedantic -Wextra -c *.c # Compile *.c, don't link
ar -rc liball.a *.o # Archive *.o in a library liball.a
ranlib liball.a # Index the library
