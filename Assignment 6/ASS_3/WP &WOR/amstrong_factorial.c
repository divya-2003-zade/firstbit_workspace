// with parameter and without return type
#include<stdio.h>
void amstrong(int);            //function declaration
void factorial(int);
void main()
{
	int no=153;
	int num=5;
	amstrong(no);                    // function call
	factorial(num);
}
void amstrong(int no )              // function defination
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
	    }
	    else
	    {
	    	printf("not amstrong \n");
		}
}


void factorial(int num)
{
	int i=1,fact=1;
	while (i<=num)
	{
		fact=fact*i;
		i++;
	}
	printf(" %d  factorial is : %d",num ,fact);
}