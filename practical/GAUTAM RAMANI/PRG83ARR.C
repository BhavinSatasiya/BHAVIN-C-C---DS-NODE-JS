#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a[10],odd=0,even=0;
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
		if(a[i]%2!=0)
		odd=odd+a[i];
		else
		even=even+a[i];
	}
		printf("\nodd element sum=%d",odd);
		printf("\neven element sum=%d",even);
	getch();
}