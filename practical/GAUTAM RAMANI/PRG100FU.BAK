#include<stdio.h>
#include<conio.h>
void main()
{
	void dosub();    //Declaration
	clrscr();
	dosub();       //Call
	getch();
}
void dosub() //No Return--No Argu
{
	void docal(int,int,int);      //Declaration in Void dosub()
	char d[20];
	int a,b,c;
	printf("Enter Name:");
	scanf("%[^\n]",d);
	printf("Maths=\nPhysics=\nChemistry=");
	scanf("%d%d%d",&a,&b,&c);
	docal(a,b,c);                 //Call in Void dosub()
}
void docal(int a,int b,int c)   //No Return--With Argu
{
	float total,per;
	total=a+b+c;
	printf("\nTotal=%.0f",total);
	if(a<35||b<35||c<35)
		printf("\nFail");
	else
	{
		per=(total/300)*100;
		printf("\nPercentage=%f",per);
		if(per<=100&&per>=75)
		printf("\nA Grade");
		else if(per<=75&&per>=60)
		printf("\nB Grade");
		else if(per<=60&&per>=45)
		printf("\nC Grade");
		else if(per<=45&&per>=35)
		printf("\nD Grade");
		else if(per<=35&&per>=0)
		printf("\nFail");
	}
}