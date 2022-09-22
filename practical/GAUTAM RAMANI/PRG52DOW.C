#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	clrscr();
	printf("n=");
	scanf("%d",&n);
	i=-n;
	do
	{
		printf("\t%d",i);
		i++;
	}
	while (i<=n);
	getch();
}