//loop /continue statement
/*
for (exp1;exp2;exp3)
{
statement
}
exp1:initialisation, Evaluate only once
exp2:condition, Before loop Start
exp3:inc/dec, before exit.
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	clrscr();
	for(i=1;i<=10;i++)
	{
		printf("\t%d",i);
	}
	getch();
}
