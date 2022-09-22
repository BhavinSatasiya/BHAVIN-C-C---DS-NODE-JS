#include <stdio.h>
#define n 5
int main()
{
    int i, m, o, ele, pos, c[20];
    int a[n];
    printf("Enter Element of Array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nArray is:");
    for (i = 0; i < n; i++)
    {
        printf(" %d ", a[i]);
    }
    printf("\n Enter Element from Which you Want to Separate Array:");
    scanf("%d", &ele);
    for (i = 0; i < n; i++)
    {
        if (a[i] == ele)
        {
            pos = i + 1;
            break;
        }
    }
    m = n - pos;
    int b[m];
    printf("\nb=");
    for (i = 0; i < m; i++)
    {
        b[i] = a[i];
        printf(" %d ", b[i]);
    }
    int k;
    k = m;
    printf("\nc=");
    for (i = 0; i < n - m; i++)
    {
        c[i] = a[k];
        k++;
        printf(" %d ", c[i]);
    }
}