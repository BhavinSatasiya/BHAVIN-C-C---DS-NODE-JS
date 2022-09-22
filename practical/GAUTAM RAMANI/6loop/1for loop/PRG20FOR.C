#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	clrscr();
	printf("n=");
	scanf("%d",&n);
	for(i=-n;i<=n;i++)
	{
		printf("\t%d",i);
	}
	getch();
}