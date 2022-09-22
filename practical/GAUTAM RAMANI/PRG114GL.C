#include<stdio.h>
#include<conio.h>
int x=20;           //Global Variable
int myfunc()
{
	return x+=x;
}
void main()
{
	clrscr();
	printf("\n1:%d",x);
	x=10;                        //Local Variable
	printf("\n2:%d",myfunc());
	getch();
}