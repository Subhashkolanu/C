#include<stdio.h>
int main()
{
	int n,i,t,k;
	printf("enter the table : ");
	scanf("%d",&n);
	printf("enter upperbound value : ");
	scanf("%d",&k);
	for(i=1;i<=k;i++)
	{
		t=n*i;
	printf("%d*%d=%d\n",n,i,t);
	}
}
