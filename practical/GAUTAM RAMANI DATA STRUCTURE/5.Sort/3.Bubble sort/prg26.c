#include<stdio.h>
#include<stdlib.h> 
#define n 6
void printArray(int a[])
{
    int min=21,max=101;
    for(int i=0;i<n;i++)
    a[i]=rand()%(max-min+1)+min;
    for(int i=0;i<n;i++)
    printf("\t%d",a[i]);
    printf("\n");
}
void bubblesort(int a[])
{
    int key;
        printf("\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                key=a[j];
                a[j]=a[j+1];
                a[j+1]=key;    
            }
        }
    }
        for(int i=0;i<n;i++)
        printf("\t%d",a[i]);
}
int main()
{
    int a[10];
    printArray(a);
    bubblesort(a);
}