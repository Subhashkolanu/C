#include<stdio.h>
int main()
{
	int p,c,ma,j;
	printf("WELCOME TO UNIVERSITY ADMISSION COUNCIL! \n ");
	printf("Enter Physics marks : \n ");
	scanf("%d",&p);
	if (p<=60)
	printf("Enter Chemistry marks : \n ");
	scanf("%d",&c);
	if (c<=60)
	printf("Enter Maths marks : \n ");
	scanf("%d",&ma);
	if (ma<=150)
	printf("Enter Jee score : \n ");
	scanf("%d",&j);
	if (j<=100)
	if((p+c+ma)/270*100<=65&&j>=90)
	{
		printf("ELIGIBLE");
	}
	else
	{
		printf("NOT ELIGIBLE");
	}
	return 0;
}
