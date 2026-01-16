#include<stdio.h>
void main()
{
	int n,i,s=0;
	printf("Enter a positive integer : ");
	scanf("%d",&n);
	for(i=1;i<=n/2;i++)
	{
		if(n%i==0)
			s=s+i;
	}
	if(s==n)
		printf("Perfect Number");
	else
		printf("Not a Perfect Number");
}
