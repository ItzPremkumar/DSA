#include<stdio.h>
#include<string.h>
int main()
{
    struct student
    {
        int rno;
        char name[20];
        float per;
    }s1[100],t;
    int i,n,pass;
    printf("Enter the limit:");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
    printf("Enter the rollno name per:");
    scanf("%d%s%f",&s1[i].rno,&s1[i].name,&s1[i].per);
 }
 for(pass=1;pass<n;pass++)
   {
    for(i=0;i<n-pass;i++)
    {
        if(s1[i].per>s1[i+1].per)
        {
            t=s1[i];
            s1[i]=s1[i+1];
            s1[i+1]=t;
        }
    }
   }
   printf("\n Student info \n");
   for(i=0;i<n;i++)
   {
    printf("\n%d\t%s\t%f\t",s1[i].rno,s1[i].name,s1[i].per);
   }
}