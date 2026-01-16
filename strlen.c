#include<stdio.h>
#include<string.h>
void main()
{
    char s1[30];
    int l;
    puts("Enter string : \0");
    gets(s1);
    l=strlen(s1);
    printf("Length of %s is %d",s1,l);
}
