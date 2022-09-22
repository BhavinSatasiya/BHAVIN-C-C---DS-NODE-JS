#include<stdio.h>
#include<stdlib.h>
void printArray(int a[3][3])
{
    printf("\n.......Matrix.......\n\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            {
                printf("%d\t",a[i][j]);
            }
            printf("\n");
    }
}
int main()
{
    int max=20,min=0;
    int a[3][3],i,j;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            a[i][j]=rand()%max;
            printArray(a);
        return 0;
}