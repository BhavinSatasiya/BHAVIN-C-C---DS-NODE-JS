#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, min = 10, max = 50, arr[10];
    for (i = 0; i < 10; i++)
        arr[i] = rand() % (max - min + 1) + min;
    for (i = 0; i < 10; i++)
        printf(" %d ", arr[i]);
}