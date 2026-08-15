#include<stdio.h>
int main()
{
	for(int n=5; n>=1; n--)
	{
		for (int m=1; m<=n; m++)
		{
		    if(m%1==0)
		     printf("%d ",m);
		     else
		      printf("%d ",n);
		}
		printf("\n");
	}
}