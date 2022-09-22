#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("a=\nb=\nc=");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
	printf("a is larger");
	else if(b>c)
	{
		printf("b is larger");
		}
		else
		{
			printf("c is larger");
		}

	getch();
}

