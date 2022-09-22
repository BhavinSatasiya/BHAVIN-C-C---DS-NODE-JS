#include<stdio.h>
#include<conio.h>
void main()
{
	char a[20],b[20];
	int i,j,len;
	clrscr();
	printf("Enter String a=");
	gets(a);
	for(i=0;a[i]!='\0';i++);
	len=i;
	printf("\nReverse String is=");
	//shortcut method
	//add library #include<string.h>
	//printf("Reverse String is=%s",strrev(str));
	for(i=len-1,j=0;i>=0,j<=len;i--,j++)
	{
		b[j]=a[i];
		b[len]='\0';
	}
	printf("%s",b);
	getch();
}