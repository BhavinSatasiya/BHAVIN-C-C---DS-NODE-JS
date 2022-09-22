//In-Built Function--Provide by C Lnguage
//UDF-user define function
#include<stdio.h>
#include<conio.h>
void myFunc() //Defination
{
	printf("\nInside myFunc");
}
void main()
{
	void myFunc(); //Declaration
	clrscr();
	printf("\nBefore myFunc");
	myFunc();
	printf("\nAfter myFunc");
	getch();
}
