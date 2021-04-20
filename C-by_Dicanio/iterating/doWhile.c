// demo do while iterating

#include<stdio.h>
#include<string.h>

int main(void)
{
    char answer[10];

    int i = 0;

    do{
        i++;
        printf("iteration #%d \n", i);

        printf("Do you want to continue? [press N/n to quit] ");
        scanf("%9s", answer);
    } while(strcmp(answer, "n") != 0 && strcmp(answer, "N") != 0);
    
    return 0;
}