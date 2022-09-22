#include<stdio.h>
#include<stdlib.h>
void printarray(int a[],int b[],int n,int m)
{
    printf("\n****Array 1****\n");
    for(int i=0;i<n;i++)
    printf(" %d ",a[i]);
    printf("\n****Array 2****\n");
    for(int i=0;i<m;i++)
    printf(" %d ",b[i]);
}
void mergearray(int a[],int b[],int n,int m)
{
    for(int i=0;i<n+m;i++)
    {
        a[i+n]=b[i];
        b[i]=a[i];
    }
    printf("\n*****After Merge in Array1******\n");
    for(int i=0;i<n+m;i++)
    {
        printf(" %d ",a[i]);
    }
    printf("\n*****After Merge in Array2******\n");
    for(int i=0;i<n+m;i++)
    {
        printf(" %d ",b[i]);
    }
}
int main()
{
    int a[7],b[7],m,n;
    printf("\nEnter N:");
    scanf("%d",&n);
    printf("\nEnter M:");
    scanf("%d",&m);
    for(int i=0;i<n;i++)
    a[i]=rand()%21;
    for(int i=0;i<m;i++)
    b[i]=rand()%31;
    printarray(a,b,n,m);
    mergearray(a,b,n,m);
}