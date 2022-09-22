#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	clrscr();
	printf ("Enter cha=");
	scanf ("%c",&ch);
	if (ch<=90)
		{
			printf ("cha is=%c",ch+32);
		}
	else if(ch>=97)
		{
			printf ("cha is=%c",ch-32);
		}
	getch();
}