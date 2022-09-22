#include<stdio.h>
#include<stdlib.h>
int main()
{
    int min=0,max=20,n=0;
    int a[5][5][5],i,j,k;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            for(k=0;k<3;k++)
                a[i][j][k]=n++;
    printf("\n     ......Matrix........\n\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                printf("\t%d",a[i][j][k]);
            }
            printf("\n");
        }
        printf("\n\n");
    }
}