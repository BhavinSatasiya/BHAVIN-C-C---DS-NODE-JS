#include<stdio.h>
#include<conio.h>
int main()
{
	float mathes=90, physics=77, chemistry=69,total,per;
	clrscr();
	printf ("mathes=%f \nphysics=%f \nchemistry=%f",mathes,physics,chemistry);
	total=(mathes+physics+chemistry);
	per=(total/300)*100;
	printf ("\ntotal=%f \nper=%f",total,per);
	return 0;
}