#include<stdio.h>
void prime(int);
void main()
{
    int n;
    printf("Enter any positive integer : ");
    scanf("%d",&n);
    prime(n);
}
void prime(int n)
{
    int i,c=0;
    for(i=0;i<=n;i++)
    {
        if(n%i==0);
        c++;
    }
    if (c==2)
    printf("prime");
    else
    printf("Not a prime");
}