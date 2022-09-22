#include<stdio.h>
#define n 5
int a[n];
int front = -1;
int rear = -1;
 
//insert rear
void insertrear()
{
    int add;
    if((front == 0&&rear == n-1)||(front == rear+1))
    {   
        printf("Overflow Condition\n");
    }
    if (front == -1) 
    {   
        front = 0;
        rear = 0;
    }
    else
    {
    if(rear == n-1) 
        rear = 0;
    else
        rear = rear+1;
    }    
    printf("Input the element for adding in queue : ");
    scanf("%d", &add);
    a[rear] = add;
}
//insert front
void insertfront()
{   
    int add;
    if((front == 0 && rear == n-1) || (front == rear+1))
    {  
        printf("Overflow Condition\n");
    }
    if (front == -1)
    { 
        front = 0;
        rear = 0;   
    }
    else
    if(front== 0)
        front=n-1;
    else
        front=front-1;
    printf("Input the element for adding in queue : ");
    scanf("%d", &add);
    a[front] = add;  
}
//deletefront
void deletefront()
{   if (front == -1)
    {   
        printf("Underflow Condition\n");
    }
    printf("Element deleted from queue is : %d\n",a[front]);
    if(front == rear) 
    {   
        front = -1;
        rear=-1;
    }
    else
        if(front == n-1)
            front = 0;
        else
            front = front+1;
}
//deleterear
void deleterear()
{
    if (front == -1)
    {
        printf("Underflow Condition\n");
    }
    printf("Element deleted from queue is : %d\n",a[rear]);
    if(front == rear)
    {
        front = -1;
        rear=-1;
    }
    else
        if(rear == 0)
            rear=n-1;
        else
            rear=rear-1;    
}
void displayqueue()
{   
    int front_pos = front,rear_pos = rear;
     
    if(front == -1)
    {  
        printf("Queue is empty\n");
    }
    printf("Queue elements :\n");
    if( front_pos <= rear_pos )
    {   
        while(front_pos <= rear_pos)
        {
            printf("%d ",a[front_pos]);
            front_pos++;
        }
    }
    else
    {
        while(front_pos <= n-1)
        {   printf("%d ",a[front_pos]);
            front_pos++;    
        }
        front_pos = 0;
        while(front_pos <= rear_pos)
        {   
            printf("%d ",a[front_pos]);
            front_pos++;
        }
    }
    printf("\n");
}
int main()
{   
    int choice;
    do
    {  
        printf("1.Insert at front\n");
        printf("2.Delete from front\n");
        printf("3.Insert at rear\n");
        printf("4.Delete from rear\n");
        printf("9.Display\n");
        printf("0.Quit\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);
 
        switch(choice)
        {  
            case 1: 
                insertfront();
                break;
            case 2:
                deletefront();
                break;
            case 3:
                insertrear();
                break;
            case 4:
                deleterear();
                break;
            case 9:
                displayqueue();
                break;
            case 0:
                break;
            default:
            printf("\nInvalid Input");
        }
    }while(choice!=0);
    return 0;
}