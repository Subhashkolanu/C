#include<stdio.h>
main()
{
	int i,n,a=0;
	printf("Enter any positive integer : ");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		a=a+i;
	}
	if(a==n)
	{
		printf("%d is perfect number",n);
	}
	else
	{
		printf("%d is not a perfect number",n);
	}
}
