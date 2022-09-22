#include<stdio.h>
#include<conio.h>
void main()
{
	char a[20],b[20];
	int i;
	clrscr();
	printf("Enter String a is\n");
	gets(a);
	for (i=0;a[i]!='0';i++)
	{
		b[i]=a[i];
	}
		printf("String B is %s",b);
	getch();
}