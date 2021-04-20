// if statement demo

#include<stdio.h>
#include<string.h>

int main(void)
{
    printf("please enter the password: ");
    char pass[13];
    scanf("%12s",pass);

    if (strcmp(pass, "ananto")==0)
    {
        printf("\nnow you're login !\n");
    }
    else
    {
        printf("\nyou enter wrong password !\n");
    }
}