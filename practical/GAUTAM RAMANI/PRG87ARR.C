#include<conio.h>
#include<conio.h>
void main()
{
	int i,j,a[5][5],b[5][5];
	clrscr();
	printf("First Matrix a\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Second Matrix b\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("b[%d][%d]=",i,j);
			scanf("%d",&b[i][j]);
		}
	}
			printf("\nMatrix a is\t\tMatrix b is\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}

		for(j=0;j<3;j++)
		{
			printf("%d\t",b[i][j]);
		}
			printf("\n");
	}
	getch();
}