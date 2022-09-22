#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a[10],n,position=0;
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\na[%d]=%d",i,a[i]);
	}
		printf("\nEnter Element=");
		scanf("%d",&n);
	for(i=0;i<5;i++)
	{
		if(a[i]==n)   //if(a[i]!=n)
		break;        //position++;
		else          //else
		position++;   //break;
	}
		printf("%d at %d Position",n,++position);
	getch();
}