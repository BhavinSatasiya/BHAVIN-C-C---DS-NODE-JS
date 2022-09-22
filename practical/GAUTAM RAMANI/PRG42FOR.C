#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	clrscr();
	printf("n=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		{
			if(i%2!=0)
			{
				printf("%d\t",i);
			}
			else
			{
				printf("%d\t",i*i);
			}
		}
	getch();
}