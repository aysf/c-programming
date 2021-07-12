#!/bin/sh

# compile
gcc -Wall -Wextra -Werror -o rush-01 *.c &&
#./rush-01 "col1up col2up col3up col4up col1down col2down col3down col4down row1left row2left row3left row4left row1right row2right row3right row4right"
#./rush-01 "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2" | cat -e
./rush-01 "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2" | cat -e
#./rush-01 "2 2 1 3 2 2 3 1 3 1 2 2 2 2 3 1" | cat -e
#./rush-01 "1 2 3 2 3 1 3 2 1 2 3 2 3 2 1 2" | cat -e
#./rush-01 "4 3 3 2 3 4 3 1 1 4 3 2 3 3 1 2" | cat -e

