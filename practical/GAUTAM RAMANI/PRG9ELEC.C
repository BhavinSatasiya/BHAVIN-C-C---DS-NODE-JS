#include<stdio.h>
#include<conio.h>
void main()
{
	float a,c,d;
	clrscr();
	printf ("a=");
	scanf ("%f",&a);

	if(a<100)
		{
			c=a*.60+50;
			printf ("\n Electricity Bill is=%f",c);
		}
	else if(a>100&&a<300)
		{
			c=(a-100)*.80+60+50;
			printf ("\n Electricity Bill is=%f",c);
		}
	else if(a>300)
		{
			c=(a-300)*.90+60+160+50;
			printf ("\n Electricity Bill is=%f",c);
		}
	if (c>300)
		{
			d=c*.15;
			printf ("\n Sur Charge is=%f",d);
			printf ("\n Total Electricity Bill is=%f",d+c);
		}
		getch();
}