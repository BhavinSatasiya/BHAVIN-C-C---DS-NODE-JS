#include<stdio.h>
#include<stdlib.h>
#define n 10
void printArray(int a[])
{
    printf("\n\t\t..................Array:...............\n\n");
    for(int i=0;i<10;i++)
    printf("%d\t",i);
    printf("\n");
    for(int i=0;i<10;i++)
    printf("%d\t",a[i]);
}
void findpos(int a[],int element)
{
    for(int i=0;i<10;i++)
    {
        if(a[i]==element)
        printf("\n\t%d is at %d Position",element,i+1);
    }
}
int main()
{
    int a[20],min=20,max=101;
    int element;
    for(int i=0;i<n;i++)
    a[i]=rand()%(max-min+1)+min;
    printArray(a);
    printf("\n\nEnter Element For Find out the Position:");
    scanf("%d",&element);
    findpos(a,element);
}

//With Argu With Return
// #include<stdio.h>
// #include<stdlib.h>
// #define n 10
// void printArray(int a[])
// {
//     printf("\nArray\n");
//     for(int i=0;i<10;i++)
//     printf("%d\t",i);
//     printf("\n");
//     for(int i=0;i<10;i++)
//     printf("%d\t",a[i]);
// }
// int findpos(int a[],int element)
// {
//     for(int i=0;i<10;i++)
//     {
//         if(a[i]==element)
//             return i+1;
//     }
// }
// int main()
// {
//     int a[20],min=20,max=100,element;
//     for(int i=0;i<n;i++)
//     a[i]=rand()%(max-min+1)+min;
//     printArray(a);
//     printf("\nEnter Element for Findout the Position:");
//     scanf("%d",&element);
//     printf("%d is at %d position",element,findpos(a,element));
// }