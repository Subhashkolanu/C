#include<stdio.h>
int main()
{
    int r,s,i,j,k;
    scanf("%d",&r);
    for(i=1;i<r;i++)
    {
        for(s=1;s<=2*(r-i);s++)
        printf(" ");
        for(j=1;j<=2*i-1;j++)
        printf("%d ",j);
        printf("\n");
    }
    for(i=r-1;i>0;i--)
    {
        for(s=1;s<=2*(r-i);s++)
        printf(" ");
        for(j=1;j<=2*i-1;j++)
        printf("%d ",j);
        printf("\n");
    }
    return 0;
}
