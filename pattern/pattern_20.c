#include<stdio.h>
int main()
{
	for (int row=1; row<=15; row++)
	{
		for ( int col=1; col<=15; col++)
		{
			if(row==1 
			|| col==1 
			|| row==15  
			|| col==15 
			|| row==col && col<8
			|| row+col==16
			|| col==8 
			|| row==8
			)
		   {
		   	if(col==8 && row==8)
		   	 printf("o ");
			 else if(col==8 && row !=1 && row !=15) 
			   printf("a ");
			     else if(row==8 && col !=1 && col !=15)
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