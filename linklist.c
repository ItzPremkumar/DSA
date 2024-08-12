#include<stdlib.h>
#include<stdio.h>
struct node
{
	int data;
	struct node* next;
};
struct node* create(struct node* head)
{
	struct node *newnode,*temp;
	int i,n;
	printf("Enter limit:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		newnode=(struct node *)malloc(sizeof(struct node));
		printf("Enter value:");
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
	struct node *temp;
	temp=head;
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
}
int main()
{
	struct node *head=NULL;
	int ch,num;
	do{
		printf("\n1-create:\n2-display:");
		printf("\nEnter Choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:head=create(head);
			        break;
		    case 2:disp(head);
		            break;
		    default:printf("Invalid Choice");
		            break;
		}
		
	}
    while(ch<3);
}