#include<stdio.h>
#include<conio.h>
void main()
{
	int n=10,*p;
	clrscr();
	p=&n;
	printf("\n Value of n=%d",n);
	printf("\n Address of n=%u",&n);
	printf("\n Address of n using p=%u",p);
	printf("\n Value of n using p=%d",*p);
	printf("\n Address of p=%u",&p);
	getch();
}
