#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[10]={34,54,65,76,78};
	int i;
	int *p=arr;
	clrscr();
	for(i=0;i<5;i++)
	{
	       //printf("\n Value:%d - add :%u",arr[i],&arr[i]);
	       printf("\n Value:%d - add :%u",*(p+i),(p+i));
	}
	getch();
}