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
NODE *insertmid(NODE *head,int num,int pos)
{
    int i;
 NODE *newnode,*temp;
 newnode=(NODE*)malloc(sizeof(NODE));
 newnode->data=num;
 for(temp=head,i=1;i<(pos-1)&&temp->next!=NULL;i++,temp=temp->next);
 newnode->next=temp->next;
 temp->next->prev=newnode;
 temp->next=newnode;
 newnode->prev=temp;
 return head;
}
NODE * delbeg(NODE *head)
{
 NODE *temp;
 temp=head;
 head=head->next;
 free(temp);
 return head;
}
NODE *delmid(NODE *head,int pos)
{
 NODE *temp,*temp1;
 int i;
for(temp=head,i=1;i<(pos-1)&&temp->next!=NULL;i++,temp=temp->next);
temp1=temp->next;
 temp->next=temp1->next;
 temp1->next->prev=temp;
 free(temp1);
 return head;
}
int main()
{
  struct node *head=NULL;
  int ch,num,pos;
  do
  {
    printf("\n 1-create \n 2-disp \n 3-insert begining \n 4-insert middel \n 5-delete begining \n 6-delete middel ");
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
     case 4:printf("ENter number:");    
            scanf("%d",&num);
            printf("ENter Position:");    
            scanf("%d",&pos);
            head=insertmid(head,num,pos);
            break;
      case 5: head=delbeg(head);
            break;
        case 6: printf("ENter Position:");    
            scanf("%d",&pos);
            head=delmid(head,pos);
            break;
             default: printf("Invalid choice..");       

    }
  }while(ch<7);
}