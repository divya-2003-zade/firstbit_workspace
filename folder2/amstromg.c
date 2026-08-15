#include<stdio.h>
int main()
{
	int no=153,temp=no,sum=0;
	int count;
	while(no>0)
	{
		count++;
		no=no/10;
	}
	no=temp;
	
	
	while(no>0)
	{
		int rem;
		rem=no%10;
		
		int x=1,i=1;
	    while(i<=count)
    	{
		   x=x*rem;
		   i++;
    	}
		sum=sum+x;
		no=no/10;
	}
	if(temp==sum)
	printf("amstrong");
	else
	printf("not amstrong");
}