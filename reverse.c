#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*start=NULL;
int count=0;
void reverse();
void display();
void main()
{
    int ch;
    do
    {
    struct node *newnode,*temp;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("\nEnter data to insert :");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(start==NULL)
    {
    start=newnode;
    count++;
    }
    else
    {
        temp=start;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }    
            temp->next=newnode;
            count++;
    }       
        display();
        printf("Enter 1 to continue");
        scanf("%d",&ch);
    
    }while(ch==1);
    reverse();
    display();
    
}
void reverse()
{
    struct node *temp;
    int x;
         temp=start;
     while(temp->next!=NULL)
     {
         
             x=temp->next->data;
             temp->next->data=temp->data;
             temp->data=x;
             
         }
         temp=temp->next->next;
     
 }

void display()
{
    struct node *temp;
    temp=start;
    do
    {
        printf("%d  ",temp->data);
        temp=temp->next;
    }while(temp!=NULL);
}
