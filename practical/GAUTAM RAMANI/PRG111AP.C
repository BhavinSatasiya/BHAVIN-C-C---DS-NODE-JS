//Pass Array Using Pointer
#include<stdio.h>
#include<conio.h>
void main()
{
	float arr[]={1,2,3,4,5};
	float sum(float *arr);           //arr[] Normal Method
	clrscr();
	printf("Sum of Array=%.2f",sum(arr));
	getch();
}
float sum(float *arr)                    //arr[]
{
	float sum=0.0;
	int i;
	for(i=0;i<5;i++)
	{
		sum=sum+arr[i];
	}
	return sum;
}