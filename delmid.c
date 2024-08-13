#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;
};
typedef struct node  NODE;
struct node* create(struct node * head)
{
  struct node *newnode,*temp;
  int i,n;
  printf("Enter limit:");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
   newnode=(struct node*)malloc(sizeof(struct node));
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
    temp=newnode;
   }
  }
 return head;
} 
void disp(struct node *head)
{
  struct node *temp=head;
  while(temp!=NULL)
  {
   printf("%d\t",temp->data);
   temp=temp->next;
  }
}
NODE *delmid(NODE *head,int pos)
{
 NODE *temp,*temp1;
 int i;
 for(temp=head,i=1;i<(pos-1)&&temp->next!=NULL;i++,temp=temp->next);
 temp1=temp->next;
temp->next=temp1->next;
 free(temp1);
 return head;
}
int main()
{
  struct node *head=NULL;
  int ch,num,pos;
  do
  {
    printf("\n 1-create \n 2-disp\n 3-delete middel");
    printf("\n Enter choice:");
    scanf("%d",&ch);
    switch(ch)
    {
     case 1:head=create(head);
             break;
     case 2: disp(head);
            break;
     case 3:printf("Enteer position");
            scanf("%d",&pos);
     head=delmid(head,pos);
            break;
     default: printf("Invalid choice..");
    }
  }while(ch<4);
}