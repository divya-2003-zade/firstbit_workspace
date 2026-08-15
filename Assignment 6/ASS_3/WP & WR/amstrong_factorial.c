// with parameter and with reaturn type
#include<stdio.h>
int amstrong(int);            // function declaration
int factorial(int);
int main()                      
{
	int no=153;
	int num=5;
	int res1, res2;
	res1=amstrong(no);                //function call
	res2=factorial(num);
}
int amstrong(int no )                  // function defination
{
	int rem, sum=0, org;
	org=no;
	while(no !=0 )
	{
		
		rem=no%10;
		sum=sum+rem*rem*rem;
		no=no/10;
	}
    if(sum==org)
	    {
		    printf(" %d is an Amstrong number \n",org);
		    return org;
	    }
	    else
	    {
	    	printf("not amstrong \n");
	    	return 0;
		}
		
}


int factorial(int num)
{
	int i=1,fact=1;
	while (i<=num)
	{
		fact=fact*i;
		i++;
	}
	printf(" %d  factorial is : %d",num ,fact);
	return fact;
}