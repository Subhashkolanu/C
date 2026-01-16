#include<stdio.h>
void main()
{
    int a [10],i,n,max;
    printf("Enter the size of an array : ");
    scanf("%d,&n");
    printf("Enter the elements of an array : ");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for (i=1;i<n;i++)
    {
        if (a[i]>max)
        max=a[i];
    }
    printf("Largest no is %d, max");
}