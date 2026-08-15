#include<stdio.h>
int main()
{
	for (int d=6; d>=1; d--)               
	{
		for( int r=1; r<=d; r++)     
		{
	         if(r%1==0)
			printf("* ");
		}
		printf("\n");
	} 
	
		 
}
