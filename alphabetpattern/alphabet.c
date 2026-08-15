#include<stdio.h>
void main()
{
	for (int i=1; i<=5; i++)
	{
		for (int j=1; j<=i; j++)
		{
			printf("%c",'A'+(j-1));
		}
		printf("\n");
	}
	printf("\n\n");
	for (int i=1; i<=5; i++)
	{
		for (int j=1; j<=i; j++)
		{
			printf("%c",'A');
			'A++';
		}
		printf("\n");
	}
	
}