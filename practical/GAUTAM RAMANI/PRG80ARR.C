#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a[10],b[10],c[10];
	clrscr();
	for(i=0;i<5;i++)
		{
			printf("a=",i);
			scanf("%d",&a[i]);
			printf("b=",i);
			scanf("%d",&b[i]);
		}
	for(i=0;i<5;i++)
		{
			printf("\na=%d\tb=%d",a[i],b[i]);
		}
	for(i=0;i<5;i++)
		{
			c[i]=a[i]+b[i];
		}
			printf("\na\tb\tc=a+b");
	for(i=0;i<5;i++)
		{
			printf("\n%d\t%d\t%d",a[i],b[i],c[i]);
		}
	getch();
}