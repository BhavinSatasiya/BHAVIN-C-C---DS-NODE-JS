//With Argu--With Return
#include<stdio.h>
#include<conio.h>
int dosum(int p, int q)
{
	return p+q;
}
void main()
{
	int a,b,sum;
	int dosum(int,int);
	clrscr();
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	//sum=dosum(a,b);
	//printf("\na+b=%d",sum);
	printf("\na+b=%d",dosum(a,b));
	getch();
}