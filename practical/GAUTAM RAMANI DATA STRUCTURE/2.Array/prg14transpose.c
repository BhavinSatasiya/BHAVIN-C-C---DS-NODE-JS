#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[10][10],b[10][10],c[10][10],i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			a[i][j]=rand()%11;
			b[i][j]=rand()%21;
		}
	}
	printf("\t\tA\t\t\tB\t\tTrans of B\t\tA+Trans of B\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("\t%d",a[i][j]);
		for(j=0;j<3;j++)
			printf("\t%d",b[i][j]);
		for(j=0;j<3;j++)
			printf("\t%d",b[j][i]);
		for(j=0;j<3;j++)
		{
		c[i][j]=a[i][j]+b[j][i];
			printf("\t%d",c[i][j]);
		}		
	printf("\n");
	}
}