#include<stdio.h>
#include<stdlib.h>
// #define n 6
void printArray(int a[],int m)
{
    printf("\n...............Array...............\n\n");
    for(int i=0;i<m;i++)
    printf("%d\t",a[i]);
}
void reverse(int a[],int m)
{
    int j;
    for(int i=0;i<m/2;i++)
    {
        j=a[i];
        a[i]=a[m-1-i];
        a[m-1-i]=j;
    }
    printf("\n...............Reverse Array............\n\n");
    for(int i=0;i<m;i++)
    {
        printf("%d\t",a[i]);
    }
}
int main()
{
    int m;
    printf("Enter Element:");
    scanf("%d",&m);
    int a[m];
    for(int i=0;i<m;i++)
    a[i]=rand()%21;
    printArray(a,m);
    reverse(a,m);
}