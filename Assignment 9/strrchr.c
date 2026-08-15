#include<stdio.h>
#include<string.h>

int main()
{
    char str1[20];

    printf("Enter a string : ");
    scanf("%s", str1);

    char *result = strrchr(str1, 'g');

    if(result != NULL)
        printf("%s", result);
    else
        printf("Character not found");

    return 0;
}