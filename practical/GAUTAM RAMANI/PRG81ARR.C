#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,sum=0;
	clrscr();
	for(i=1;i<=5;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
		printf("\nsum=%d",sum);
	getch();
}

