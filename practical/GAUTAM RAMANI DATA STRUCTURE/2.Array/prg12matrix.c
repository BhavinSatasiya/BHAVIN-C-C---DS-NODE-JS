#include<stdio.h>
#include<stdlib.h>
int main()
{
	int min=11,max=99,i,j,a[5][5];
	for(i=0;i<3;i++)
	{
	   for(j=0;j<3;j++)
	   {
	 	  a[i][j]=rand()%(max-min+1)+min;
	   }
	}
	printf("\n.....Matrix.....\n\n");
	for(i=0;i<3;i++)
	{
	   for(j=0;j<3;j++)
	   {
	   	printf("\t%d",a[i][j]);
           }
	   printf("\n");
	}
}