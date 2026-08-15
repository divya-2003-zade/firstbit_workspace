#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20];
	printf("Enter a character :");
	scanf("%s",str1);
	int result=strchr(str1,'g');
	printf("%s",result);
}