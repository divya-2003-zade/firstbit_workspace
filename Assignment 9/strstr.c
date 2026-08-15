#include<stdio.h>
#include<string.h>

int main()
{
    char s1[] = "Programming";
    char s2[] = "pro";

    char *result = strstr(s1, s2);

    if(result != NULL)
        printf("%s", result);
    else
        printf("Substring not found");
}