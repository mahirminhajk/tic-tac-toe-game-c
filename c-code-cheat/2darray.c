#include <stdio.h>

int main()
{

    // assign value to arrays
    int num[3][4]; // 32 max no.of arrays // 4 max number element in the array

    int rows = sizeof(num) / sizeof(num[0]);          // 12 / 4 = 3
    int columns = sizeof(num[0]) / sizeof(num[0][0]); // 16 / 4 = 4

    printf("r: %d \n", rows);
    printf("c: %d \n", columns);
    printf("x: %d \n", sizeof(num[0]));
    printf("x: %d \n", sizeof(num[0][0]));

    num[0][0] = 1;
    num[0][1] = 2;
    num[0][2] = 3;
    num[0][3] = 4;

    num[1][0] = 5;
    num[1][1] = 6;
    num[1][2] = 7;
    num[1][3] = 8;

    num[2][0] = 9;
    num[2][1] = 10;
    num[2][2] = 11;
    num[2][3] = 12;

    int i;
    int j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("\n %d", num[i][j]);
        }
    }
}
