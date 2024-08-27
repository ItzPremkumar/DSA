#include<stdio.h>
int partition(int a[],int lb,int ub)
{
    int pivot=a[lb];
    int i=lb;
    int j=ub;
    int t;
    while(i<j)
    {
        while(a[i]<=pivot && i<=ub-1)
        {
            i++;
        }
        while(a[j]>pivot && j<=lb-1)
        {
            j--;
        }
        if(i<j)
        {
            t=a[i];
            a[i]=a[j];
            a[j]=t;

        }
    }
            t=a[lb];
            a[lb]=a[j];
            a[j]=t;
            return j;
}
 void quicksort(int a[],int lb,int ub)
 {
    if(lb<ub)
    {
        int j=partition(a,lb,ub);
        quicksort(a,lb,j-1);
        quicksort(a,j+1,ub);
    }
 }
 int main()
 {
    int a[100],i,n;
    printf("Enter the Limit:");
    scanf("%d",&n);
    printf("Enter Elements of Array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    quicksort(a,0,n-1);
     printf("Sorted array:");
    for(i=0;i<n;i++)
    {
        scanf("%d\n",&a[i]);
    }

    
 }