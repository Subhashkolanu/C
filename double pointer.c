#include<stdio.h>
void main()
{
	int a,b,*p1,**p2;
	a=10;
	b=20;
	p1=&a;
	p2=&p1;
	printf("a is %d\n",a);
	printf("b is %d\n",b);
	printf("Pointer 1 is %d\n",*p1);
	printf("Pointer 2 is %d\n",**p2);
}
