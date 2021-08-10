

#include<stdlib.h>
#include<stdio.h>
#include <conio.h>
void main()
{
    struct node
    {
       int data;
       struct node *next;
    };
    struct node *head, *newnode, *temp;
    head = 0;
    int choice;
    while (choice)
    {  
    newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter data ");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head == 0)
        {
            head=temp=newnode;
        }
        else{
            temp->next->data;
            temp = newnode;
        }
        printf("continue(0,1)?");
        scanf("%d",&choice);
    }
    while (temp!=0)
    {
        printf("%d",temp->data);
        temp =temp->next;
    }
    getch();
}   