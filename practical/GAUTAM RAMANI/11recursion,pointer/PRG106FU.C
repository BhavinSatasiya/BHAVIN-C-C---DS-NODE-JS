#include<stdio.h>
#include<conio.h>
void rec(int n)
{
	printf("Winding phase:Level=%d\n",n);
	if(n<3)
	{
		rec(n+1);
	}
	printf("\nUnwinding phase:Level=%d",n);
}
void main()
{
	clrscr();
	rec(1);
	getch();
}