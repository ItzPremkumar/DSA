#include<stdio.h>
#include<string.h>
int main()
{
 char city[20][20],name[20];
 int n,i,f=0;
 printf("Enter the limit:");
 scanf("%d",&n);
 printf("Enter the n city name:");
 for(i=0;i<n;i++)
    scanf("%s",&city[i]);
 printf("Enter city name to search:");
 scanf("%s",&name);
 
    for(i=0;i<n;i++)
    {
        if(strcmp(city[i],name)==0)
        {
          f=1;
          break;
        }
        
    }
    if(f==1) 
    printf("city found");
     else
     printf("city not found");
   }