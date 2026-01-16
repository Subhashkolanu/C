#include<stdio.h>
void main()
{
    int a [10],i,n,key;
    printf("Enter the size of an array : ");
    scanf("%d,&a[i]");
    printf("Enter the elements of an array : ");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the elemnts to find : ");
    scanf("%d,&key");
    for(i=0;i<n;i++)
    {
        if(key==a[i])
        {
            printf("Element found");
            break;
        }
    }
    if(i==n)
    printf("Array exhausted but element not found.");
}