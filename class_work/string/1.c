#include<stdio.h>
#include<string.h>

int mystrlen(char *);

int main()
{
    char str1[] = "Hellofirstbit";

    printf("Length = %d", mystrlen(str1));

    return 0;
}

int mystrlen(char *str1)
{
    int i = 0;

    while(str1[i] != '\0')
    {
        i++;
    }

    return i;
}