#include<stdio.h>

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(void)
{
    int x = 10;
    int y = 20;
    
    printf("\nthe initial values: \nx=%d; y=%d \n\n",x,y);

    swap(&x,&y);

    printf("values after swap: \nx=%d; y=%d \n\n",x,y);

    return 0;
}