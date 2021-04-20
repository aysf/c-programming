// learn strcpy and strcat

#include<stdio.h>
#include<string.h>

int main(void)
{
    printf("what is your name ? ");
    char name[40];
    scanf("%39s", name);

    char message[100];  /* destination string */

    strcpy(message, name);
    strcat(message, " is ");
    strcat(message, " learning c ");

    puts(message);
    
    return 0;
}