#include<stdio.h>
#include<string.h>
int main()
{
 char a[20][20],max[20],t[20];
 int pass,i,n,index;
 printf("Enter the LImit:");
 scanf("%d",&n);
printf("Enter the City name:");
for(i=0;i<n;i++)
{
    scanf("%s",&a[i]);
}
for(pass=0;pass<n;pass++)
{
    strcpy(max,a[pass]);
    index=i;
    for(i=pass+1;i<n;i++)
    {
        if(strcmp(a[i],max)>0);
        {
            strcpy(max,a[i]);
            index=i;
        }
    }
    strcpy(a[index],a[pass]);
    strcpy(a[pass],max);
}
printf("Display.....:");
for(i=0;i<n;i++)
printf("\n%s",a[i]);

}