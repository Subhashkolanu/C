#include<stdio.h>
#include<string.h>
void main()
{
    char s1[50];
    char s2[25];
    printf("Enter string 1 : ");
    gets(s1);
    puts("Enter string 2 : ");
    gets(s2);
    strcat(s1,s2);
    printf("combined string is %s",s1);
}