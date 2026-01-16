#include<stdio.h>
void main()
{
    char s1[20],s2[20],s3[40];
    int i,j,k;
    puts("Enter the string 1 : ");
    gets(s1);
    puts("Enter string 2 : ");
    gets(s2);
    i=0;
    k=0;
    while(s1[i]!='\0')
    {
        s3[k]=s1[i];
        i++;
        k++;
    }
    s3[k]=' ';
    k++;
    j=0;
    while(s2[j]!='\0')
    {
        s3[k]=s2[j];
        j++;
        k++;
    }
    s3[k]='\0';
        puts("Combined string : ");
        puts("s3");
}