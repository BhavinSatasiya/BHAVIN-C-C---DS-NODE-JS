#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,a;
	clrscr();
	i=65;
	while(i<=69)
	{
		j=65,a=i;
		while(j<=i)
		{
			printf("%c\t",a);
			a--;
			j++;
		}
			printf("\n");
			i++;
	}
	getch();
}