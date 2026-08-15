#include<stdio.h>
#include<string.h>
int main()
{
	char str1[]="hello";
	char str2[]="programming";
	strncpy(str2,str1,3);
	printf("copy a first n character str2 to str1 : %s",str2);
	
}