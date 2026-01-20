#include<stdio.h>
void main()
{
    int a[2][3];
    int i,j,r,c;
    printf("Enter the dimensions :");
    scanf("%d%d",&r,&c);
    printf("Enter the elements : ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",a[i][j]);
        }
    }
    printf("Elements stored in the 2D array : \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%5d",a[i][j]);
        }
        printf("\n");
    }
}