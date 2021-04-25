#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    char *argvi;

    printf("argc = %i \nargv = %s\n", argc, argv[1]);

    argvi = &argv[1];

    printf("\ntes = %s",argvi);

}