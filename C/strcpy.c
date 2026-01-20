#include<stdio.h>
#include<string.h>
void main()
{
    char s1[30];
    char s2[30];
    puts("Enter string : ");
    gets(s1);
    strcpy(s2,s1);
    printf("Copied string is %s",s2);
}