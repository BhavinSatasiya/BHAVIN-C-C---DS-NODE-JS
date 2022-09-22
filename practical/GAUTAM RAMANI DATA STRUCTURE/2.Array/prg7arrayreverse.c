#include <stdio.h>
#include <stdlib.h>
int main()
{
    int len, i, j, a[10];
    printf("Enter no of Element:\n");
    scanf("%d", &len);
    printf("a:");
    for (i = 0; i < len; i++)
    {
        a[i] = rand() % 20;
        printf(" %d ", a[i]);
    }
    printf("\nReverse Array is:");
    for (i = 0; i < len / 2; i++)
    {
        j = a[i];
        a[i] = a[len - 1 - i];
        a[len - 1 - i] = j;
    }
    for (i = 0; i < len; i++)
    {
        printf(" %d ", a[i]);
    }
}