//With Argu--No Return
#include<stdio.h>
#include<conio.h>
void dosum(int p, int q)
{
	printf("\na+b=%d",p+q);
}
void main()
{
	int a,b;
	clrscr();
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	dosum(a,b);
	getch();
}