#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,a[5][5];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			a[i][j]=rand()%5;
		}
	}
	printf("\n....Matrix.....\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]==0)
			printf("");
			else
			printf("\t%d",a[i][j]);
		}
		printf("\n");
	}
}