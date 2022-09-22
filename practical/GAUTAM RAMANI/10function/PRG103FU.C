#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	int sqr(int);
	int cube(int);
	clrscr();
	printf("a=");
	scanf("%d",&a);
	sqr(a);
	cube(a);
	printf("\nsqr=%d",sqr(a));
	printf("\nCube=%d",cube(a));
	getch();
}
int sqr(int a)    //With Return--With Argu
{
	return a*a;
}
int cube(int a)    //With Return--With Argu
{
	return a*a*a;
}