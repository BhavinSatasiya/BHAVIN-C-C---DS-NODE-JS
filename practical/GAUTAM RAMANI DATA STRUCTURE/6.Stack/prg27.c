#include<stdio.h>
#define n 7
int a[100],top=-1;
void push()
{
    int val;
    if(top==n)
    printf("\n............Overflow Condition...........\n\n");
    else    
    {
        printf("\nEnter Value:");
        scanf("%d",&val);
        top=top+1;
        a[top]=val;
    }
}
void pop()
{
    if(top<0)
    printf("\n.............Underflow Condition.............\n\n");
    else
    top=top-1;
}
void print()
{
    for(int i=top;i>=0;i--)
    {
        printf("\nPush:%d",a[i]);
    }
}
int main()
{
    int choice;
    do
    {
        printf("\n1.Push\n2.Pop\n3.print\n0.Exit");
        printf("\nEnter your Choice:");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 9:
            print();
            break;
        case 0:
            break;
        }
    }while(choice!=0);
}
