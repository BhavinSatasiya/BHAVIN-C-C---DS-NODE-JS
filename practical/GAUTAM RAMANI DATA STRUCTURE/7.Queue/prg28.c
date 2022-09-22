#include<stdio.h>
#define n 2
int front=-1,rear=-1,a[40],val;
void insertqueue()
{
    printf("\nEnter Value:");
    scanf("%d",&val);
    if(rear==n-1)
    {
        printf("\n..........Overflow Condition...........\n\n");
    }
    else if(front==-1&&rear==-1)
    {
        front=0;
        rear=0;
        a[rear]=val;
    }
    else
        a[++rear]=val;
}
void deletequeue()
{
    if(front==-1&&rear==-1)
    printf("\n...........Underflow Condition.........\n\n");
    else if(front==rear)
    {
        front=-1;
        rear=-1;
        val=a[rear];
    }
    else 
    front=front+1;
}
void print()
{
    printf("\n");
    for(int i=front;i<=rear;i++)
    {
        printf("\n%d",a[i]);
    }
}
int main()
{
    int choice;
    do
    {
        printf("\n1.Insert\n2.Delete\n9.Print\n0.Exit");
        printf("\nEnter Yor Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                insertqueue();
                break;
            case 2:
                deletequeue();
                break;
            case 9:
                print();
                break;
            case 0:
                break;
                default:
                printf("\nInvalid Input");
        }
    }while(choice!=0);
}