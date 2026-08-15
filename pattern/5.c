#include<stdio.h>
int main()
{
	for (int d=1; d<=5; d++)               
	{
		for( int r=1; r<=d; r++)     
		{
	         if(r%d==0)
			printf("%d ",d);
			else
			printf("%d ",r);
		}
		printf("\n");
	} 
}