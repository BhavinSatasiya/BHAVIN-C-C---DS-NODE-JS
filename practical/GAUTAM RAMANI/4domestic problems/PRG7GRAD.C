#include<stdio.h>
#include<conio.h>
void main()
{
	float m,c,p,total,per;
	clrscr();
	printf ("Mathes= \nChemistry= \nPhysics=");
	scanf ("%f \n%f \n%f",&m,&c,&p);
	total=(m+c+p);
	printf ("\ntotal obtaine marks=%f",total);
	per=(total/300*100);
	printf ("\nPercentage is %f",per);

	if (m<35||c<35||p<35)
	{
		printf ("\n Fail");
	}
	else if(per>=75&&per>=100)
	{
		printf ("\nA grade \nPASS");
	}
	else if(per>=60&&per<=75)
	{
		printf ("\nB grade \nPASS");
	}
	else if(per>=45&&per<=60)
	{
		printf ("\nC grade \nPASS");
	}
	else if(per>=35&&per<=45)
	{
		printf ("\nD grade \nPASS");
	}
	else if(per>=0&&per<=35)
	{
		printf ("\nFAIL \nTry Again");
	}
	getch();
}