#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf ("Enter value a=");
	scanf ("%d",&a);
	if(a%2)
	{
	printf ("\n given value is odd",a);
	}
	else
	{
	printf ("\n given value is even",a);
	}
	getch();
}
