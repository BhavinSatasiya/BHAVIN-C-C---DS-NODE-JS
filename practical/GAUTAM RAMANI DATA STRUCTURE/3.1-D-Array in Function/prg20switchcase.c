#include<stdio.h>
#include<stdlib.h>
#define n 6 //Bubble sort
int size;
void showchoice()
{
    printf("\n***MENU**** \n1.Enter Size of Array Element\n2.Enter Insert Value\n3.Random Value\n4.Position Find\n5.Binary Search\n6.Selection Sort\n7.Buuble sort\n9.Exit\n********");
}
void sizeofarray()
{
    printf("\nEnter Size of Element:");
    scanf("%d",&size);
}
void insertarray()
{
    int i,a[size];
        for(i=0;i<size;i++)
        {
            printf("\nEnter Element:");
            scanf("%d",&a[i]);
        }
        for(i=0;i<size;i++)
        {
            printf("\na[%d]:[%d]",i,a[i]);
        }
}
void randomarray()
{
    int a[size],min=20,max=101,i;
    for(i=0;i<size;i++)
        a[i]=rand()%(max-min+1)+min;
    for(i=0;i<size;i++)
        printf("\na[%d]:[%d]",i,a[i]);
}
void findpos()
{
    int a[size],element;
    printf("\nEnter Element For Findout the Position:");
    scanf("%d",&element);
    for(int i=0;i<size;i++)
        if(a[i]==element)
        printf("%d is at %d Position",element,i+1);
}
//..................Binary Search..............................//
void scan(int a[])
{
    printf("\nEnter Elements:\n");
    for(int i=0;i<10;i++)
    scanf("%d",&a[i]);
}
void printArray(int a[])
{
    printf("\n.............Array.............\n\n");
    for(int i=0;i<10;i++)
    printf("\t%d",i);
    printf("\n");
    for(int i=0;i<10;i++)
    printf("\t%d",a[i]);
}
int binarysearch(int a[],int lb,int ub,int val)
{
    int mid;
    if(ub>=lb)
    {
        mid=(lb+ub)/2;
        if(a[mid]==val)
        {
            return mid+1;
        }
        else if(a[mid]<val)
        {
            return binarysearch(a,mid+1,ub,val);
        }
        else
        {
            return binarysearch(a,lb,mid-1,val); 
        }
    }
    return -1;
}
void binarysearching()
{
    int a[10],lb=0,ub=10,val;
    scan(a);
    printArray(a);
    printf("\nEnter value:");
    scanf("%d",&val);
    printf("position:%d",binarysearch(a,lb,ub,val));
}
//....................................Selection Sorting.............................................//
// void scanArray(int arr[])
// {
//     for(int i=0;i<5;i++)
//     scanf("\t%d",&arr[i]);
// }
void printsArray(int arr[])
{
    for(int i=0;i<5;i++)
    printf("\t%d",arr[i]);
}
void selection_sort(int arr[])
{
    int key;
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(arr[i]>arr[j])

            {
                printsArray(arr);
                printf("\n\n");
                key=arr[i];
                arr[i]=arr[j];
                arr[j]=key;
            }
        }
    }
    printsArray(arr);
}
void sorting()
{
    int min=21,max=101;
    int arr[5];
    for(int i=0;i<5;i++)
    arr[i]=rand()%(max-min+1)+min;
 //   scanArray(arr);
    selection_sort(arr);
   // printsArray(arr);
}
//.........................................................Bubble sort................................//
void Arrayprint(int a[])
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
void bubble()
{
    int a[10];
    Arrayprint(a);
    bubblesort(a);
}
int main()
{
    int choice;
    do
    {
        showchoice();
        printf("\n\nEnter Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                sizeofarray();
                break;
            case 2:
                insertarray();
                break;
            case 3:
                randomarray();
                break;
            case 4:
                findpos();
                break;
            case 5:
                binarysearching();
                break;
            case 6:
                sorting();
                break;
            case 7:
                bubble(); 
        }
    }while(choice!=9);
}