#include<stdio.h>
int main()
{
	float r, result,D,P,Y,E;
	int type;
	printf("Enter ruppees : ");
	scanf("%f",&r);
	printf("1.DOLLAR\n2.POUND\n3.YEN\n4.EUROS\n");
	scanf("%d",&type);
	switch(type)
	{
		case 1:D=r/88.0;
		printf("result : %2f ",D);
		break;
		case 2:P=r/116.8;
		printf("result : %2f",P);
		break;
		case 3:Y=r/0.57;
		printf("result : %2f ",Y);
		case 4:E=r/103.0;
		printf("result : %2f ",E);
	}
	return 0;
}
