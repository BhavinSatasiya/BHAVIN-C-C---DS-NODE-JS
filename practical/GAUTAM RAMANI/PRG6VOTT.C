#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf ("Person age=");
	scanf ("%d",&a);
	if(a<18)
	{
	printf ("\nPerson is not eligible for votting");
	}
	else
	{
	printf ("\nPerson is eligible for votting");
	}
	getch();
}