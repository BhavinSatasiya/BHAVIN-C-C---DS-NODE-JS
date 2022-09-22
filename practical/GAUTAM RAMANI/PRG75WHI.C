#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,n;
	clrscr();
	printf("n=");
	scanf("%d",&n);
		a=1,b=1;
		while(a<=n,b<=n)
		{
			printf("%c%c",a+64,b+98);
			a+=4;
			b+=4;
		}
	getch();
}