#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	i=5;
	do
	{
		j=i;
		do
		{
			printf("%d\t",j);
			j++;
		}
		while(j<=5);
		printf("\n");
		i--;
	}
	while(i>=1);
	getch();
}