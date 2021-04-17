/* this program display greeting for name that user type in */
#include<stdio.h>

int main(void){
    printf("what is your name? ");
    char name[40];
    scanf("%s", name);

    printf("Hello %s, nice to meet you ! \n", name);
}