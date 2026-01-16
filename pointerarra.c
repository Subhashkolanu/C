#include<stdio.h>
void main()
{
    int a[10],i,n,*ptr;
    ptr=&a;
    printf("Enter the size of an array : "  );
    scanf("%d",&n);
    printf("Enter the elements of an array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }
    printf("Elements stored in the array are : ");
    for(i=0;i<n;i++)
    {
        printf("%5d",*(ptr+i));
    }
}
