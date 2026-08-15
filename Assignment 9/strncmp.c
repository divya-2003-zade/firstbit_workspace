#include<stdio.h>
#include<string.h>
int main()
{
    char s1[] = "Apple";
    char s2[7] ;
    int result = strncmp(s1, s2,4);
    printf("%d", result);
}