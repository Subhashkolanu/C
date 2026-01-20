#include<stdio.h>
void add(int,int);
void main()
{
    int a,b;
    printf("Enter any two integers : ");
    scanf("%d%d",&a,&b);
    add(a,b);
}
void add(int a,int b)
{
    int c;
    c=a+b;
    printf("Result : %d ",c);
}