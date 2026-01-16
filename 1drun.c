#include<stdio.h>
void main()
{
	int a[10],i,n;
	printf("Enter the size of an array : ");
	scanf("%d",&n);
	printf("Enter Elements : ");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Elements stored in the array : \n");
	for(i=0;i<n;i++)
	{
		printf("%5d",a[i]);
	}
}
