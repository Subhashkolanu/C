#include<stdio.h>
void main()
{
    int a[2][3]={{8,22,513},{5124,5125,4856}};
    int i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%5d",a[i][j]);
        }
        printf("\n");
    }
}
