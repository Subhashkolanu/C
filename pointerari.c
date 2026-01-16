#include<stdio.h>
void main()
{
    int x,*p1;
    float y,*p2;
    char ch,*p3;
    double z,*p4;
    p1=&x;
    p2=&y;
    p3=&ch;
    p4=&z;
    printf("Addition of x:%u\n",p1);
    printf("Addition of y:%u\n",p2);
    printf("Addition of z:%u\n",p4);
    printf("Addition of ch:%u\n",p3);
    p1++;
    p2++;
    p3++;
    p4++;
    printf("After increment p1:%u\n",p1);
        printf("After increment p2:%u\n",p2);
        printf("After increment p3:%u\n",p3);
        printf("After increment p4:%u\n",p4);
}
