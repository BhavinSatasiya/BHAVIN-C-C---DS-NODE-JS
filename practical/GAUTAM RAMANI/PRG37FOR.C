#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,a;
	clrscr();
	for(i=65;i<=69;i++)
	{
		a=i;
		for(j=65;j<=i;j++)
		{
			printf("%c\t",a);
			a--;

		}
			printf("\n");
	}
	getch();
}