#include<stdio.h>
int main()
{
	int y;
	printf("Enter year : ");
	scanf("%d",&y);
	if (2025-y>=18)
	{
		printf("eligible");
	}
	else
	{ 
	printf("not eligible");
	}
}
