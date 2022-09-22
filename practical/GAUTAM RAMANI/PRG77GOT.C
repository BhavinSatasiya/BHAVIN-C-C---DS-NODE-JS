#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j=0;
	clrscr();
	pattern:
	j++;
	for(i=1;i<=j;i++)
	{
		printf("%d\t",j);
	}
		printf("\n");

	if(j<=4)
	goto pattern;
	getch();
}
