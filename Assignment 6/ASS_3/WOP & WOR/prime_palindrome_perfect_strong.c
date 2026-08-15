//without parameter and without return type
#include<stdio.h>
void prime();
void palindrome();            // function declaration
void perfect();
void strong();
void main()
{
	prime();
	palindrome();         // function call
	perfect();
	strong();
}
//prime number
void prime()                 // function defination
{
	int num=7;
	int i=2;
	while(i<num)
	{
		if(num%i==0)
		{
			printf("not prime");
		}
		i++;
	}
	printf("prime");
	printf("\n \n");
}
//palindrome number
void palindrome()
{
    int rev=0,org,rem;
	int no=121;
	org=no;
	while(no != 0)
	{
		rem = no%10;
		rev=rev*10+rem;
		no=no/10;
	}
	if(rev==org)
	{
		printf(" palindrome ");
	}
	else
	{
		printf("Not palindrome");
	}
		printf("\n \n");	
} 
//perfect number
void perfect()
{
	int n=28;
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
		printf("prefect");
	}
	else
	{
		printf(" Not perfect");
	}
		printf("\n \n");
}
//strong number
void strong()
{
	int num=145,original_num=num;
	int rem,i=1;
	int fac1=1,fac2=1,fac3=1;
	int sum;
	rem=num%10;
	while(rem>=i)
	{	
	    fac1=fac1*rem;
	    rem--;
	}
	num=num/10;
    rem=num%10;
	while(rem>=i)
	{	
	    fac2=fac2*rem;
	    rem--;
	}
	num=num/10;
	rem=num%10;
	while(rem>=i)
	{	
	    fac3=fac3*rem;
	    rem--;
	}
	sum=fac1+fac2+fac3;
	if(sum==original_num)
	    printf("strong number \n");
	else
	    printf("not strong number \n");
	
}