#include<stdio.h>
#include<conio.h>
void main()
{
	char a[50],b[50];
	int i;
	clrscr();
	printf("Enter Ch=");
	scanf("%[^\n]",a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>=65&&a[i]<=90)
		a[i]=a[i]+32;
		else if(a[i]==32)    //white space asci is 32
		a[i]=a[i];
		else
		a[i]=a[i]-32;
		b[i]=a[i];
	}
	b[i]='\0';
	printf("Change case is=%s",b);
	getch();
}