//nested if, ladder if
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf ("a=");
	scanf ("%d",a);
	printf ("b=");
	scanf ("%d",b);
	printf ("c=");
	scanf ("%d",c);
		// Nested if
	/*if (a>b&&a>c)
	{
		printf ("a is bigger");
	}
	else
	{
	 if (b>c)
	 {
		printf ("c is bigger");
	 }
	 else
	 {
		printf ("b is bigger");
	 }
	}*/
		//Ladder if
	if (a>b&&a>c)
	  {
		printf ("a is bigger");
	  }
	else if (b>c)
	  {
		printf ("b is bigger");
	  }
	else
	  {
		printf ("c is bigger");
	  }
	getch();
}