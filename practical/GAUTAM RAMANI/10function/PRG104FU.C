#include<stdio.h>
#include<conio.h>
void main()
{       int sqr();
	int cube();
	clrscr();
	printf("\nSqr=%d",sqr());
	printf("\nCube=%d",cube());
	getch();
}
int sqr()   //With Return--No Argu
{
	int a;
	printf("a=");
	scanf("%d",&a);
	return a*a;
}
int cube()   //With Return--No Argu
{
	int a;
	printf("a=");
	scanf("%d",&a);
	return a*a*a;
}