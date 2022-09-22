#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,sp=40;
	clrscr();
	for(i=5;i>=1;i--) //Row
	{
		for(j=1;j<=sp;j++)
			printf(" ");
		for(j=1;j<=i;j++) //Colomn
		{
			printf(" *");
		}
			printf("\n");
			sp++;

	}
		getch();
}