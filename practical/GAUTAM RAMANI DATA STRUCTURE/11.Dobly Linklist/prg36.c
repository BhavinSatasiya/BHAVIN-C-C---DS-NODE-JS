#include<stdio.h>  
#include<stdlib.h>  
struct node  
{  
    struct node *prev;  
    struct node *next;  
    int data;  
};  
int val;
struct node *head;  
void insert_beg()  
{  
   struct node *ptr;    
   ptr = (struct node *)malloc(sizeof(struct node));  
  
    printf("\nEnter value:");  
    scanf("%d",&val);  
    
   if(head==NULL)  
   {  
       ptr->next = NULL;  
       ptr->prev=NULL;  
       ptr->data=val;  
       head=ptr;  
   }  
   else   
   {  
       ptr->data=val;  
       ptr->prev=NULL;  
       ptr->next = head;  
       head->prev=ptr;  
       head=ptr;  
   }  
}  
void insert_end()  
{  
   struct node *ptr,*temp;    
   ptr = (struct node *) malloc(sizeof(struct node));  
     
   
       printf("\nEnter value:");  
       scanf("%d",&val);  
        ptr->data=val;  
       if(head == NULL)  
       {  
           ptr->next = NULL;  
           ptr->prev = NULL;  
           head = ptr;  
       }  
       else  
       {  
          temp = head;  
          while(temp->next!=NULL)  
          {  
              temp = temp->next;  
          }  
          temp->next = ptr;  
          ptr ->prev=temp;  
          ptr->next = NULL;  
       }  
    }  
void delete_beg()  
{  
    struct node *ptr;  
    if(head == NULL)  
    {  
        printf("\n UNDERFLOW");  
    }  
    else if(head->next  == NULL)  
    {  
        head = NULL;   
        free(head);  
    }  
    else  
    {  
        ptr = head;  
        head = head -> next;  
        head -> prev = NULL;  
        free(ptr);  
    }  
}
void delete_last()
{
    struct node *ptr,*temp;  
    if(head == NULL)  
    {  
        printf("\n UNDERFLOW");  
    }  
    else if(head->next == NULL)  
    {  
        head = NULL;   
        free(head);   
    }  
    else   
    {  
        ptr = head;   
        while(ptr->next->next != NULL)  
        {  
            ptr = ptr -> next;   
        }  
        temp=ptr->next;
        ptr->next=NULL;
        free(temp);  
    }  
}
void display()  
{  
    struct node *ptr;  
    ptr = head;  
    while(ptr != NULL)  
    {  
        printf("%d<->",ptr->data);  
        ptr=ptr->next;  
    }  
}   
int main ()  
{  
    int choice;  
    do  
    {  
        printf("\n***Main Menu*\n");  
        printf("\n1.Insert in begining\n2.Insert at end\n3.Delete last\n4.Delete Beg\n9.Print");  
        printf("\nEnter your choice\n");  
        scanf("\n%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            insert_beg();  
            break;  
            case 2:  
            insert_end();  
            break;  
            case 3:
            delete_last();
            break;
            case 4:
            delete_beg();
            break;
            case 9:
            display();
            break;
            case 0:  
            break;  
            default:  
            printf("Please enter valid choice..");  
        }  
    }while(choice != 0);  
}