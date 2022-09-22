#include<stdio.h>
int main()
{
	int a,b,c;
	printf("a:");
	scanf("%d",&a);
	printf("b:");
	scanf("%d",&b);
	printf("c:");
	scanf("%d",&c);
	a>b&&a>c?printf("A is Greter"):b>c?printf("B is Greter"):printf("C is Greter");
}