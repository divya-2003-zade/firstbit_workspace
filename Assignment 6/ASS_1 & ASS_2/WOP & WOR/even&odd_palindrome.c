//without parameter and without return type
#include<stdio.h>
void even_odd();
void palindrome();    //function declaration
void main()
{
	even_odd();              //function call
	palindrome();
	
}
void even_odd()             //function defination
{
	int no=10;
	if(no%2==0)
	{
		printf(" %d The given number is even",no);
	}
	else
	{
		printf(" %d The given number is odd",no);
	}
	printf("\n \n");
}
void palindrome()
{
	int n=123;
	int frist, last;
	frist= n/100;
	last= n%10;
	if(frist==last)
	{
		printf("%d  is pallindrome number",n);
	}
	else
	{
		printf("%d not is pallindrome number",n);
	}
	printf("\n \n");
	
}