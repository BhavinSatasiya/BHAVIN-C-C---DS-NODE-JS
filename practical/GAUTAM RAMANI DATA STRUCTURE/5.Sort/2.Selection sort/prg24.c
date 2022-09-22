#include<stdio.h>
#include<stdlib.h>
// void scanArray(int arr[])
// {
//     for(int i=0;i<5;i++)
//     scanf("\t%d",&arr[i]);
// }
void printArray(int arr[])
{
    for(int i=0;i<5;i++)
    printf("\t%d",arr[i]);
}
void selection_sort(int arr[])
{
    int i,j,key;
    for(int i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(arr[i]>arr[j])
            {
                // printArray(arr);
                // printf("\n\n");
                key=arr[i];
                arr[i]=arr[j];
                arr[j]=key;
            }
        }
    }
    printArray(arr);
}
int main()
{
    int min=21,max=101;
    int arr[5];
    for(int i=0;i<5;i++)
    arr[i]=rand()%(max-min+1)+min;
 //   scanArray(arr);
    selection_sort(arr);
   // printArray(arr);
}