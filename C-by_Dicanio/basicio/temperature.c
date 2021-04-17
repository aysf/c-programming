/* program temperature calculator */
#include<stdio.h>

int main(void)
{
    printf("enter temperature in Farenheit?: ");

    float farenheitF;
    scanf("%f", &farenheitF);

    printf("the temperature in celcius is %.2f \n",(farenheitF-32)*5/9);
    return 0;
}