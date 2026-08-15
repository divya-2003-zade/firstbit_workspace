//with parameter and with return type
#include<stdio.h>
int even_odd(int);
int palindrome(int);    //function declaration
int main()
{
	int res1, res2;
	int no=10;
	int n=123;
	res1=even_odd(no);              //function call
	res2=palindrome(n);
	
}
int even_odd(int no)             //function defination
{
	
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
int palindrome(int n)
{
	
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