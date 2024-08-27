#include<stdio.h>
int main()
{
 int pass,i,n,index,max;
 struct emp
 {
    int eno;
    char ename[20];
    int sal;
 }a[100],t;
 printf("Enter the LImit:");
 scanf("%d",&n);
printf("Enter the Emp info:");
for(i=0;i<n;i++)
{
    scanf("%d%s%d",&a[i].eno,&a[i].ename,&a[i].sal);
}
for(pass=0;pass<n;pass++)
{
   max=a[pass].sal;
    index=pass;
    for(i=pass+1;i<n;i++)
    {
        if(a[i].sal>max);
        {
            max=a[i].sal;
            index=i;
        }
    }
   t=a[index];
   a[index]=a[pass];
   a[pass]=t;
}
printf("Display.....:");
for(i=0;i<n;i++)
printf("\n%d\t%s\t%d",a[i].eno,a[i].ename,a[i].sal);

}