#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,a[5][5],utriangle=0,diagonal=0,ltriangle=0;
	clrscr();
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("a=");
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nMatrix is\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i<j)
			utriangle=utriangle+a[i][j];
			if(i==j)
			diagonal=diagonal+a[i][j];
			if(i>j)
			ltriangle=ltriangle+a[i][j];
		}
	}
		printf("Upper Triangle sum=%d\n",utriangle);
		printf("Diagonal sum=%d\n",diagonal);
		printf("Lower Triangle sum=%d",ltriangle);
	getch();
}

