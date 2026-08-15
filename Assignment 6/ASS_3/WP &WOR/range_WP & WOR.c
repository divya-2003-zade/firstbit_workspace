// with parameter and without return type
#include<stdio.h>
void number( int start, int end);    //function declaration 
void main()		  
{
	number(1,8);         // function call
}
void number(int start, int end)             // function defination
{
	int sum=0;
	while ( start <= end)
	{
		sum=sum+start;
		start++;
	}
	printf("sum = %d ", sum);
}