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
NODE *insertmid(NODE *head,int num,int pos)
{
    int i;
 NODE *newnode,*temp;
 newnode=(NODE*)malloc(sizeof(NODE));
 newnode->data=num;
 for(temp=head,i=1;i<(pos-1)&&temp->next!=NULL;i++,temp=temp->next);
 newnode->next=temp->next;
 temp->next=newnode;
 return head;
}
int main()
{
  struct node *head=NULL;
  int ch,num,pos;
  do
  {
    printf("\n 1-create \n 2-disp ");
    printf("\n 3-insert middel: ");
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
            printf("ENter position:");
            scanf("%d",&pos);
            head=insertmid(head,num,pos);
            break;
            default: printf("Invalid choice..");
    }
  }while(ch<4);
}