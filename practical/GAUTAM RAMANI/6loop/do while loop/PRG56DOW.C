#include<stdio.h>
#include<conio.h>
void main()
{
	int i=65;
	clrscr();
		do
		{
			printf("\t%c=%c",i,i+32);
			i++;
		}
		while(i<=90);
	getch();

}