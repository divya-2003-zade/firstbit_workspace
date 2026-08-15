#include<stdio.h>
void main()
{
	for (int i=26; i>=1; i--)
	{
		for (int j=1; j<=i; j++)
		{
			printf("%c",'A'+(26-j));
		}
		printf("\n");
	}
	
	
}