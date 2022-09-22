#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	if(a<b)
	{
	printf("\n given value a is smallest");
	}
	else
	{
	printf("\n given value b is smallest");
	}
	getch();
}