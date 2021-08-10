
/*
inserting a node at begning
*/
#include<stdlib.h>
#include<stdio.h>
struct Node
{
    int data;
    struct Node* next;
};
struct Node* head; //variable for accessed anyware
void Insert(int x)
{
    struct Node* temp =  malloc(sizeof(struct Node));
    temp->data = x;
    temp->next=head; // for  inserting a node at end temp->= 0 which means
    head = temp;        //we don't have address of the next node we 
}
void Print()
{
    struct Node* temp = head;
    printf("inserted value is: ");
    while (temp != NULL)                /* and once temp =0 or null the it will false and its 
                                        udate the address of last node address and move to the -> next and 
                                        the address of (which we want add node at end) last node become the new node
                                        with help of temp */
    {
        printf("%d ", temp->data);
       temp=temp->next;
    }
    
}
int main(){
    head = NULL;
   printf("how many numbers?\n");
   int n,i,x;
   scanf("%d",&n);
    for (i = 0; i < n; i++)
    {
        printf("  enter the number  \n");
        scanf("%d",&x);
        Insert(x);
        Print( );
    }
    
}
