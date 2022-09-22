#include<stdio.h>
#include<stdlib.h>
#define n 3
#define m 4
void printArray(int a[],int b[])
{
    printf("\n..............First Array:..............\n\n");
    for(int i=0;i<n;i++)
    printf("%d\t",a[i]);
    printf("\n\n..............Second Array:.............\n\n");
    for(int i=0;i<m;i++)
    printf("%d\t",b[i]);
}
void mergeArray(int a[],int b[])
{
    for(int i=0;i<m;i++)
    a[i+n]=b[i];
    printf("\n\n................After Merge:..............\n\n");
    for(int i=0;i<n+m;i++)
    printf("%d\t",a[i]);
}
int main()
{
    int a[10],b[10];
    for(int i=0;i<n;i++)
    a[i]=rand()%11;
    for(int i=0;i<m;i++)
    b[i]=rand()%21;
    printArray(a,b);
    mergeArray(a,b);
}