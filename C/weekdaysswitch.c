#include<stdio.h>
int main()
{
	int n;
	printf("enter your choice : ");
	scanf("%d",n);
	switch(n)
	{
		case 0: n=1;
		printf("SUNDAY");
		break;
		case 1: n=2;
		printf("MONDAY");
		break;
		case 2:
		printf("TUESDAY");
		break;
		case 3:
		printf("WEDNESDAY");
		break;
		case 4:
		printf("THURSDAY");
		break;
		case 5:
		printf("FRIDAY");
		break;
		case 6:
		printf("SATURDAY");
		break;
	}
}
