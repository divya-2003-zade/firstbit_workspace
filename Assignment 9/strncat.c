#include<stdio.h>
#include<string.h>
int main()
{
	char s1[]="hello";
	char s2[20]="programming";
	strncat(s2,s1,4);
	printf("append first 4 character  s2 and s1 are :%s ",s2);
}