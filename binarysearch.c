#include<stdio.h>
int main()
{
  int n,a[100],i,top,mid,bottom,num,flag=0,c1=0;
  printf("Enter the limit");
  scanf("%d",&n);
  printf("Enter the number");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("Enter the no to search");
   scanf("%d",&num);
   top=0;
   bottom=0;
   while(top<=bottom)
   {
    c1=c1+1;
    mid=(top+bottom)/2;
    if(a[mid]==num)
    {
        flag=1;
        break;
    }
    else if(num>a[mid])
     top=mid+1;
    else
    bottom=mid-1;
   }
   printf("Number of compare=%d",c1);
   if(flag==1)
    printf("\nfound");
  else
    printf("\nnot found");
}