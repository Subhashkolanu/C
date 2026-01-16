#include<stdio.h>
void factorial(int);
void main()
{
    int n;
    printf("Enter any positive integer : ");
    scanf("%d",&n);
    factorial(n);
}
void factorial(int n)
{
    int f=1,i;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf("Factorial for %d is %d",n,f);
}