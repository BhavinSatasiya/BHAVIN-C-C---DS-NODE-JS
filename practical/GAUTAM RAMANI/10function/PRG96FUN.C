//No Argu--No Return
#include<stdio.h>
#include<conio.h>
void dosum()
{
	int a,b;
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	printf("a+b=%d",a+b);
}
void main()
{
	clrscr();
	dosum();
	getch();
}