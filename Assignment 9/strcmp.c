#include<stdio.h>
#include<string.h>
int main()
{
    char s1[] = "hello";
    char s2[] = "world";
    int result = strcmp(s1, s2);
    printf("%d", result);
}