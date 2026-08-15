#include<stdio.h>
#include<string.h>
int mystrlen(char *);
void main()
{
	char str1[]="Hellofirstbit";
	
	printf("length = %d",mystrlen(str1));
	
}
int mystrlen(char *str1)
{
	int i=0;
	while(str1[i]!='\0')
	{
		i++;
	}
	return i;
}