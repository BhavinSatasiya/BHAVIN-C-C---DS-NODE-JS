#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=1;i<=5;i++) //Raw
		{
			for(j=1;j<=5;j++) //Colomn
			{
				printf("*");
			}
			printf("\n");
		}
		getch();
}