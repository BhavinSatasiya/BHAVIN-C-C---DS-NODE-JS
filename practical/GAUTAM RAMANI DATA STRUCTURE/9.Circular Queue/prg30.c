#include<stdio.h>
#define n 4
int front=-1,rear=-1,a[n],val;
void insertqueue(int add)
{
    if(front==-1&&rear==-1)
    {
        front=0,rear=0;
        a[rear]=add;
    }
    else if((rear+1)%n==front)
    {
        printf("\n......Overflow Condition......\n\n");
    }
    else
    {
        rear=(rear+1)%n;
        a[rear]=add;
    }
}
void deletequeue()
{
    if((front==-1)&&(rear==-1))
    {
        printf("\n.........Underflow Condition........\n\n");
    }
    else if(front==rear)
    {
        printf("\nDeleted Element is %d",a[front]);
        front=-1,rear=-1;
    }
    else
    {
        printf("\nDeleted Element is %d",a[front]);
        front=(front+1)%n;
    }
}
void printqueue()
{
    if(front==-1)
    {
        printf("\nQueue is Empty");
    }
    printf("\nQueue Element:");
    if(rear>=front)
    {
        for(int i=front;i<=rear;i++)
        printf(" %d ",a[i]);
    }
    else
    {
        for(int i=front;i<n;i++)
        printf(" %d ",a[i]);
        printf("\n");
        for(int i=0;i<=rear;i++)
        printf(" %d ",a[i]);
    }
}
int main()
{
    int choice,x;
    do
    {
        printf("\n1.Insert\n2.Delete\n9.Print\n0.Exit");
        printf("\nEnter Your Choice:");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:
            printf("\nEnter the Element Which is to be inserted:");
            scanf("%d",&x);
            insertqueue(x);
            break;
            case 2:
            deletequeue();
            break;
            case 9:
            printqueue();
            break;
            case 0:
            break;
            default:
            printf("\nInvalid Input");
        }
    } while (choice!=0);   
}