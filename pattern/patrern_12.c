#include<stdio.h>
int main()
{
	for (int row=1; row<=15; row++)
	{
		for ( int col=1; col<=15; col++)
		{
			if(row==1 || col==1 || row==15 || col==15)
		     printf("* ");
		     else
		    {
			 printf("  ");
		    }
		}
		printf("\n");
		
	}
}