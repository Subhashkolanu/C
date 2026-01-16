#include<stdio.h>
void main()
{
	int n,m,a=0,rem;
	printf("enter a three digit positive integer : ");
	scanf("%d",&n);
	m=n;
	while(n!=0)
	{
	  rem = n%10;
	  a = a+rem*rem*rem;
	  n = n/10;
	}
	if (a==m)
	 printf("Armstrong");
	else
	 printf("NOT armstrong");
}
