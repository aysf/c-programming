// demo using forloop to underline string

#include<stdio.h>
#include<string.h>

int main(void)
{
    /* string to underline */
    char str[] = "Connie is learning C.";

    /* print the upper underline */
    int len = strlen(str);
    for(int i = 0;i<len;i++){
        putchar('-');
    }
    putchar('\n');

    /* print the string */
    printf("%s \n", str);

    /* print the bottom underline */
    for(int i = 0;i<len;i++){
        putchar('-');
    }
    putchar('\n');
    return 0;
}