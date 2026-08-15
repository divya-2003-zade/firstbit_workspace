//with parameter and without return type
#include<stdio.h>
void prime(int);
void palindrome(int);            // function declaration
void perfect(int);
void strong(int);
void main()
{
	int num=7;
	int no=121;
	int n=28;
	int num1=145;
	prime(num);
	palindrome(no);         // function call
	perfect(n);
	strong(num1);
}
//prime number
void prime(int num)                 // function defination
{
	
	int i=2;
	while(i<num)
	{
		if(num%i==0)
		{
			printf(" %d is not prime number",num);
		}
		i++;
	}
	printf(" %d is  a prime number",num);
	printf("\n \n");
}
//palindrome number
void palindrome(int no)
{
    int rev=0,org,rem;
	
	org=no;
	while(no != 0)
	{
		rem = no%10;
		rev=rev*10+rem;
		no=no/10;
	}
	if(rev==org)
	{
		printf(" %d is palindrome number",rev);
	}
	else
	{
		printf(" %d is Not palindrome number",rev);
	}
		printf("\n \n");	
} 
//perfect number
void perfect(int n)
{
	
	int i=1, sum=0;
	while(i<n)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
		i++;
	}
	if (sum==n)
	{
		printf(" %d is prefect number",sum);
	}
	else
	{
		printf(" %d is Not perfect number",sum);
	}
		printf("\n \n");
}
//strong number
void strong(int num1)
{
	int original_num=num1;
	int rem,i=1;
	int fac1=1,fac2=1,fac3=1;
	int sum;
	rem=num1%10;
	while(rem>=i)
	{	
	    fac1=fac1*rem;
	    rem--;
	}
	num1=num1/10;
    rem=num1%10;
	while(rem>=i)
	{	
	    fac2=fac2*rem;
	    rem--;
	}
	num1=num1/10;
	rem=num1%10;
	while(rem>=i)
	{	
	    fac3=fac3*rem;
	    rem--;
	}
	sum=fac1+fac2+fac3;
	if(sum==original_num)
	    printf(" %d is strong number \n",sum);
	else
	    printf("%d is not strong number \n",sum);
	
}