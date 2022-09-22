#include<stdio.h>
#include<conio.h>
void main()
{
	int a=10,b=20;
	clrscr();
	printf ("\n%d",(a<100)&&(b<100));//TT
	printf ("\n%d",(a>100)&&(b>10));//FT
	printf ("\n%d",(a<100)||(b>100));//TF
	printf ("\n%d",!(a>100)&&!(b>100));//TT(due to the NOT Operator)
	getch();

}