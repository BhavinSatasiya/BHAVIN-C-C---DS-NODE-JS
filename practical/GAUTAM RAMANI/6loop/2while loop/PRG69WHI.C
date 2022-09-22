#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	clrscr();
	printf("n=");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		printf("%d\t",i*i);
		i++;
	}
	getch();
}