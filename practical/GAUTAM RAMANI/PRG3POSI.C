#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf ("Enter value a=");
	scanf ("%d",&a);
	if(a>0)
	{
	printf ("\n given value is Positive",a);
	}
	else
	{
	printf ("\n given value is Negative",a);
	}
	getch();
}