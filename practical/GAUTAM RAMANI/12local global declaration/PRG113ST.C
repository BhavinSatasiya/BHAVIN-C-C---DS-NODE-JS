//Structure
#include<stdio.h>
#include<conio.h>
struct student
{
	int rollno;
	char name[20];
	int m1,m2,m3,total;
	float per;
};
void main()
{
	int i;
	struct student st[5];
	clrscr();
	printf("Enter Record of 2 Student\n");
	for(i=0;i<2;i++)
	{
		printf("Enter Roll no:");
		scanf("%d",&st[i].rollno);
		printf("Enter Name:");
		scanf("%s",&st[i].name);
		printf("Enter m1:");
		scanf("%d",&st[i].m1);
		printf("Enter m2:");
		scanf("%d",&st[i].m2);
		printf("Enter m3:");
		scanf("%d",&st[i].m3);
	}
	printf("Student Information List:");
	for(i=0;i<2;i++)
	{
		st[i].total=st[i].m1+st[i].m2+st[i].m3;
		st[i].per=st[i].total/3;
		printf("\n Rollno:%d \nName:%s",st[i].rollno,st[i].name);
		printf("\n Total:%d \nPercentage:%f",st[i].total,st[i].per);
	}
	getch();
}
