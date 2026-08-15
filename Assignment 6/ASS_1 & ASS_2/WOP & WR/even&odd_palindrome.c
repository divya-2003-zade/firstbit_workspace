//without parameter and with return type
#include<stdio.h>
int even_odd();
int palindrome();    //function declaration
int main()
{
	int res1, res2;
	res1=even_odd();              //function call
	res2=palindrome();
	return 0;
	
}
int even_odd()             //function defination
{
		int no=10;
	
	if(no%2==0)
	{
		printf(" %d The given number is even \n \n",no);
		return 1;
	}
	else
	{
		printf(" %d The given number is odd",no);
		return 0;	
    }
	

}
int palindrome()
{
	int n=123;
	int frist, last;
	frist= n/100;
	last= n%10;
	if(frist==last)
	{
		printf("%d  is pallindrome number",n);
		return 1;
	}
	else
	{
		printf("%d not is pallindrome number",n);
		return 0;
	}	
}