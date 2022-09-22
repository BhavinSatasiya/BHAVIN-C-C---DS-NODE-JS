#include<stdio.h>
#include<conio.h>
void main()
{
	float a,b;
	clrscr();
	printf ("a=");
	scanf ("%f",&a);
	if (a<5000)
		{
			b=a*.28+a;
			printf ("\n Gross Salery=%f",b);
		}
	else if (a>5000&&a<10000)
		{
			b=a*.42+a;
			printf ("\n Gross Salary=%f",b);
		}
	else if (a>10000&&a<15000)
		{
			b=a*.55+a;
			printf ("\n Gross Salary=%f",b);
		}
	else if (a>15000)
		{
			b=a*.70+a;
			printf ("\n Gross Salary=%f",b);
		}

	getch();

}