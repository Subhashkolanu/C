#include<stdio.h>
int main()
{
	int n;
	printf("1. sunday\n 2.monday\n 3.tuesday\n 4.wednesday\n 5.thurday\n 6.friday\n 7.saturday\n");
	printf("enter your choice : ");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
		printf("SUNDAY\n");
		break;
		case 2:
		printf("MONDAY");
		break;
		case 3:
		printf("TUESDAY");
		break;
		case 4:
		printf("WEDNESDAY");
		break;
		case 5:
		printf("THURSDAY");
		break;
		case 6:
		printf("FRIDAY");
		break;
		case 7:
		printf("SATURDAY");
		break;
	}
}
