#include<stdio.h>
void main()
{
    int a[5],i,n,s=0;
    printf("Enter the size if array : ");
    scanf("%d",&n);
    printf("Enter elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        s=s+a[i];
    }
    printf("Sum of elements of an array : %d",s);
}
