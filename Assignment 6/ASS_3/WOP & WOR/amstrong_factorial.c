// without parameter and without return type
#include<stdio.h>
void amstrong();
void factorial();
void main()
{
	amstrong();
	factorial();
}
void amstrong()
{
	int rem, sum=0, org;
	int no=153;
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


void factorial()
{
	int i=1,fact=1,n=5;
	while (i<=n)
	{
		fact=fact*i;
		i++;
	}
	printf(" %d  factorial is : %d",n ,fact);
}