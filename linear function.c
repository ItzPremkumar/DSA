#include<stdio.h>
int main()
{
 int a[100],n,i,x;
 void linear_search(int a[100],int x,int n);
 printf("Enter the limit:");
 scanf("%d",&n);
 printf("Enter the n numbers:");
 for(i=0;i<n;i++)
 {
    scanf("%d",&a[i]);
 }
 printf("Enter value to search:");
 scanf("%d",&x);
 linear_search(a,x,n);
}
void linear_search(int a[100],int x,int n);
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        break;
    }
    if(i==n)
    printf("not found");
       else
       printf("found");
}