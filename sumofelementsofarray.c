#include<stdio.h>
void main()
{
	int a[10],i,n,s=0;
	printf("Enter the size of an array : ");
	scanf("%d",&n);
	printf("Enter elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		s=s+a[i];
	}
	printf("sum of elemnts of an array : %d ",s);
}
