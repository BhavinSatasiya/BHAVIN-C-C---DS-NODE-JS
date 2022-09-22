#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	clrscr();
	printf("n=");
	scanf("%d",&n);
	i=n;
	while (i>=1)
	{
		printf("\t%d",i);
		i--;
	}
	getch();
}