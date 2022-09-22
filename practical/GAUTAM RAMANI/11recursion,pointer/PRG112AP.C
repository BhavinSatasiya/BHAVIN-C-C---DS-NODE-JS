//Show Array by Incremented 1 using pointer
#include<stdio.h>
#include<conio.h>
void main()
{
	float arr[]={1,2,3,4,5},*b;
	int i;
	float *sum(float *arr);
	clrscr();
	b=sum(arr);
	printf("Array is");
	for(i=0;i<5;i++)
	{
		printf("\t%.0f  ",b[i]);
	}
	getch();
}
float *sum(float *arr)
{
	int i;
	for(i=0;i<5;i++)
	{
		arr[i]=arr[i]+1;
	}
	return arr;
}