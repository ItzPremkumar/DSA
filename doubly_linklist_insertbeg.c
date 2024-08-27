#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
  int data;
  struct node *next,*prev;
}NODE;
NODE* create(struct node * head)
{
  NODE *newnode,*temp;
  int i,n;
  printf("Enter limit:");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
   newnode=(NODE*)malloc(sizeof(NODE));
   printf("ENter value:");
   scanf("%d",&newnode->data);
   newnode->next=NULL;
   if(head==NULL)
   {
    head=newnode;
    temp=newnode;
   }
   else
   {
    temp->next=newnode;
    newnode->prev=temp;
    temp=newnode;
   }
  }
 return head;
} 
void disp(struct node *head)
{
  NODE*temp=head;
  while(temp!=NULL)
  {
   printf("%d\t",temp->data);
   temp=temp->next;
  }
}
NODE *insertbeg(NODE *head,int num)
{
 NODE *newnode;
 newnode=(NODE*)malloc(sizeof(NODE));
 newnode->data=num;
 newnode->next=head;
 head->prev=newnode;
 head=newnode;
 return head;
}
int main()
{
  struct node *head=NULL;
  int ch,num,pos;
  do
  {
    printf("\n 1-create \n 2-disp \n 3-insert begining ");
    printf("\n Enter choice:");
    scanf("%d",&ch);
    switch(ch)
    {
     case 1:head=create(head);
             break;
     case 2: disp(head);
            break;
     case 3:printf("ENter number:");
            scanf("%d",&num);
            head=insertbeg(head,num);
            break;
            default: printf("Invalid choice..");
    }
  }while(ch<4);
}