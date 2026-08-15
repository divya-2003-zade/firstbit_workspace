#include<stdio.h>
#include<string.h>
int main()
{
	char str1[]="hello";
	char str2[]="world";
	strcpy(str1,str2);
	printf("copy the str2 into  str1 : %s ",str1);
}