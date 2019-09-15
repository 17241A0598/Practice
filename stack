#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
struct node* next;
}*top=NULL;
    void push(int d);
    void pop();
    void top1();
    void main()
    {
        
        int ch,n;
         while(1){
        printf("\n1.push 2.pop 3.top1 \n enter choice");
        scanf("%d",&ch);
    
        switch (ch)
        {
            case 1:printf("enter element to be inserted");
            scanf("%d",&n);
            push(n);
            break;
            case 2: pop();
            break;
            case 3:top1();
        
           } }
    }
    void push(int d)
    {
       struct node*newnode;
       newnode=(struct node*)malloc(sizeof(struct node));
       newnode->data=d;
       newnode->next=top;
       top=newnode;
        
        
    }
    void pop()
    {  int d;
        if(top==NULL)
        {
            printf("stack underflow");
        }
        else
        {
            struct node*temp=top;
        d=temp->data;
        printf("\n %d is popped",d);
          top=temp->next;
          free(temp);
        }
    }
    void top1()
    {
        printf("%d",top->data);
    }
