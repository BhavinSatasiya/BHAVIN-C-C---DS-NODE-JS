#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,n1=0,n2=1,n3=1;
	clrscr();
	printf("n=");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		printf("%d\t",n3);
		n3=n1+n2;
		n1=n2;
		n2=n3;
	}
	getch();
}