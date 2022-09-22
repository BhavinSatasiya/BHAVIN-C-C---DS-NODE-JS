#include<stdio.h>
#include<stdlib.h>
#define n 5
void printArray(int a[])
{
    printf("\nArray:\n\n");
    for(int i=0;i<n;i++)
    printf("%d\t",a[i]);
}
void separate(int a[],int ele)
{
    int pos,m,o,c[10];
    for(int i=0;i<n;i++)
    {
        if(a[i]==ele)
        {
            pos=i+1;
            break;
        }
    }
    m=n-pos;
    int b[m];
        printf("\n..........Array 1.........\n\n");
    for(int i=0;i<m;i++)
    {
        b[i]=a[i];
        printf("%d\t",b[i]);
    }
    int k;
    k=m;
        printf("\n..........Array 2:.........\n\n");
    for(int i=0;i<n-m;i++)
    {
        c[i]=a[k];
        k++;
        printf("%d\t",c[i]);
    }
}
int main()
{
    int a[10],ele;
    for(int i=0;i<n;i++)
    a[i]=rand()%21;
    printArray(a);
    printf("\n\nEnter Element from which you want to separate Array:\n");
    scanf("%d",&ele);
    separate(a,ele);
}