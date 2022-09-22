#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}; 
void print(struct node *head)
{
    struct node *ptr=head;
    while(ptr!=NULL)
    {
        printf("\nElement:%d",ptr->data);
        ptr=ptr->next;
    }
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;

    head=(struct node*)malloc(sizeof(struct node*));  
    second=(struct node*)malloc(sizeof(struct node*));  
    third=(struct node*)malloc(sizeof(struct node*));

    head->data=11;                                 //link first and second
    head->next=second;

    second->data=22;                                //link second and third
    second->next=third;

    third->data=33;                                 //link third to NULL
    third->next=NULL;

    print(head);
    return;
}