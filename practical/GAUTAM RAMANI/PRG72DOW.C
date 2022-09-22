#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	float i,n;
	clrscr();
	printf("n=");
	scanf("%f",&n);
	i=1;
	do
	{
		printf("%0.0f\t",i*pow(2,i-1));
		i++;
	}
	while(i<=n);
	getch();
}