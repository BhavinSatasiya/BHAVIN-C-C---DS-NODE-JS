#include<stdio.h>
#include<conio.h>
void main()
{
	float a,tax;
	clrscr();
	printf ("a=");
	scanf ("%f",&a);

	if (a>=0&&a<=2500)
	{
		printf ("GST is 0");
	}
	else if (a>=2500&&a<=5000)
	{
		tax=(a-2500)*.10;
		printf ("GST is %f",tax);
	}
	else if (a>5000&&a<=10000)
	{
		tax=(a-5000)*.20+250;
		printf ("GST is %f",tax);
	}
	else if (a>10000)
	{
		tax=(a-10000)*.30+250+1000;
		printf ("GST is %f",tax);
	}
	getch();
}