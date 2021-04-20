// if-else-if statement
#include<stdio.h>

int main(void)
{
    printf("please enter your age? ");
    int age;
    scanf("%d",&age);

    if (age == 17)
    {
        printf("you are %d years old, sweet seventeen !\n", age);
    }
    else if (age < 17)
    {
        printf("now you're %d years old, you have %d years to go to 17 !\n", age, 17-age);
    } 
    else
    {
        printf("you're %d older than 17 !\n", age-17);
    }
    return 0;
}