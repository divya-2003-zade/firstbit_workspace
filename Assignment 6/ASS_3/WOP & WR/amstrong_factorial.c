// without parameter and with return type
#include<stdio.h>
int amstrong();       //function declaration
int factorial();
int main()
{
	int res1 ,res2;
    res1=amstrong();           //function call
	res2=factorial();
}
int amstrong( )                 // function defination
{
	int no=153;
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


int factorial()
{
	int num=5;
	int i=1,fact=1;
	while (i<=num)
	{
		fact=fact*i;
		i++;
	}
	printf(" %d  factorial is : %d",num ,fact);
	return fact;
}