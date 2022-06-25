#include <stdio.h>

void sort(int array[], int size);
void printArray(int array[], int size);

int main()
{
    // char array[] = {'C', 'B', 'A', 'D'}; //output: A B C D
    int array[] = {9, 1, 3, 5, 2, 8, 7, 6, 4};
    int size = sizeof(array) / sizeof(array[0]);
    // this provide size by bit
    // to know the actual size of an array we divide by any element of the array

    sort(array, size);
    printArray(array, size);

    return 0;
}

void sort(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
}
