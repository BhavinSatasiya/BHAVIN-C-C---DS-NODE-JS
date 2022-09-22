#include<stdio.h>
int main()
{
	int a[10]={10,20,30,40,50,60},i,n;
	printf("\nEnter the Element for Find out the Position:");
	scanf("%d",&n);
	for(i=0;i<10;i++)
	{
		if(a[i]==n)
		printf("Enter Element is at %d position",i+1);
	}
	return 0;
}