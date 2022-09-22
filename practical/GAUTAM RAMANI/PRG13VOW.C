#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	clrscr();
	printf ("Enter Char=");
	scanf ("%c",&ch);
       if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='o'||ch=='U')
	//there is no requirement of Breaket for one line..if multiple printf line so...Breaket is required
	printf ("char is Vowels");
	else
	printf ("Char is Consonants");
	getch();
}