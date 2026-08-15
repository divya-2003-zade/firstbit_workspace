#include<stdio.h>
int main()
{
	for (int row=1; row<=15; row++)
	{
		for ( int col=1; col<=15; col++)
		{
			if(row==1 || col==1 || row==15 || col==15 || row==col || row+col==16
			|| col==8 || row==8)
		   {
			 if(col==8) 
			   printf("a ");
			     else if(row==8)
			      printf("b ");
			       else
			        printf("* ");
			}
		     else
		    {
			 printf("  ");
		    }
		}
		printf("\n");
		
	}
}