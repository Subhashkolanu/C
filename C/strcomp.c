#include<stdio.h>
#include<string.h>
void main()
{
    char s1[20];
    char s2[20];
    int i;
    puts("Enter the string1 : ");
    gets(s1);
    puts("Enter the string2 : ");
    gets(s2);
    i=strcmp(s1,s2);
    if(i==0)
    puts("Equal");
    else
    puts("Not equal");
}