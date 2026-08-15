//with parameter and without return type
#include<stdio.h>
void even_odd(int);
void palindrome(int);    //function declaration
void main()
{
	int no=10;
	int n=123;
	even_odd(no);              //function call
	palindrome(n);
	
}
void even_odd(int no)             //function defination
{
	
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
void palindrome(int n)
{
	
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