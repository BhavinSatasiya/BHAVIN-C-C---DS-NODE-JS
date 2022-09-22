#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, a[10], b[10], n, m;
    printf("Enter Number of Element of First Array:\n");
    scanf("%d", &n);
    printf("Enter Number of Element of Second Array:\n");
    scanf("%d", &m);
    printf("First Array is:\n");
    for (i = 0; i < n; i++)
    {
        a[i] = rand() % 10;
        printf(" %d ", a[i]);
    }
    printf("\nSecond Array is:\n");
    for (i = 0; i < m; i++)
    {
        b[i] = rand() % 30;
        printf(" %d ", b[i]);
    }
    for (i = 0; i < m; i++)
    {
        a[i + n] = b[i];
    }
    printf("\n After Merge:");
    for (i = 0; i < n + m; i++)
    {
        printf(" %d ", a[i]);
    }
}