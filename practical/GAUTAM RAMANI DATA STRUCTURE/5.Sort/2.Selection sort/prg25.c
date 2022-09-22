#include<stdio.h>
#include<stdlib.h>
void printArray(int a[],int n)
{
    printf("\n.................................Array......................................\n\n");
    for(int i=0;i<n;i++)
    {
        a[i]=rand()%50;
        printf("\t%d",a[i]);
    }
}
void selectionsort(int a[],int n)
{
    int key,lb=0,ub=n;
    printf("\n................................Sorted Array................................\n\n");
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                key=a[i];
                a[i]=a[j];
                a[j]=key;
            }
        }
        printf("\t%d",a[i]);
    }
    printf("\nSecond Largest val:%d",a[ub-2]);
    printf("\nSecond Smallest Val:%d",a[lb+1]);
}
int main()
{
    int a[10],n;
    printf("Enter Array Size:");
    scanf("%d",&n);
    printArray(a,n);
    selectionsort(a,n);
}