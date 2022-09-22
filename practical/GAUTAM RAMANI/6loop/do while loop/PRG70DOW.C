#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	clrscr();
	printf("n=");
	scanf("%d",&n);
		i=1;
		do
		{
			if(i%2!=0)
			{
				printf("%d\t",i);
			}
			else
			{
				printf("%d\t",i*i);
			}
			i++;
		}
		while(i<=n);
	getch();
}