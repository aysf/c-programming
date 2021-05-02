#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    char *s;

    s = &argv[1][0];

    printf("argc = %i \nargv = %s\n", argc, argv[1]);
    printf("tes = %c\n", *s);

    // int matrixf[4][4] = {
    //     {1,2,3,4},
    //     {5,6,7,8},
    //     {9,10,11,12},
    //     {13,14,15,16}};

    int matrixf[16] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16}

    printf("col1up \nfirst row: %d \nsecond row: %d \nthird row: %d", matrixf[0][0], matrixf[1][0], matrixf[2][0]);
    printf("\n\n"); 
    int i;
    int j;
    
    i = 0;
    while(i < 4)
    {
        j = 0;
        while(j < 4)
        {
            printf("%d ", matrixf[i][j]);


            j++;
        }
        i++;
        printf("\n");
    }
    return 0;
}

