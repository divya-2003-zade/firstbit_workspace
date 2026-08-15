#include<stdio.h>
int main()
{
	for( int i=1; i<=5; i++)
	{
		for (int j=1; j<=i; j++)
		{
			if(j%i==0)
			printf("%d",j);
			else
			printf("%d ",i);
		}
		printf("\n");
	}
}