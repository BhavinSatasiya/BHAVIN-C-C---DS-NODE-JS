#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a[10],b[10];
	clrscr();
	for(i=0;i<5;i++)
		{
			printf("a[%d]=",i);
			scanf("%d",&a[i]);
			printf("b[%d]=",i);
			scanf("%d",&b[i]);
		}
	for(i=0;i<5;i++)
		{
			printf("\na[%d]=%d\tb[%d]=%d",i,a[i],i,b[i]);
		}
	getch();
}