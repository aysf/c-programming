/* demo while loop */

#include<stdio.h>
int main(void)
{
    char str[] = "connie";

    int len = 0;
    while(str[len] != '\0'){
        len++;
    }

    printf(" String: \"%s\" \n",str);
    printf(" Length: %d chars \n",len);

    return 0;
}