#include<stdio.h>
void main()
{
	for (int i=5; i>=1; i--)
	{
		for (int j=1; j<=i; j++)
		{
			printf("%c",'A'+(5-i));
		}
		printf("\n");
	}
	printf("\n");
	for (int i=26; i>=1; i--)
	{
		for (int j=1; j<=i; j++)
		{
			printf("%c",'A'+(26-i));
		}
		printf("\n");
	}
}