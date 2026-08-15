// range without parameter and without return type
#include<stdio.h>
void number();    //function declaration 
void main()		  
{
	number();         // function call
}
void number()             // function defination
{
		int start=1, end=5;
	int sum=0;
	while ( start <= end)
	{
		sum=sum+start;
		start++;
	}
	printf("sum = %d ", sum);
}