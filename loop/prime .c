#include<stdio.h>
int main()
{
	int no, flag=0;
	printf("Enter a number : ");
	scanf("%d" ,&no);
	for( int i=2; i<no; i++)
	{
		if(no%i==0)
		{
			flag=1;
			break;
		}	
	}
	if(flag==0)
	{
		printf(" Number is a prime");
	}
	else
	{
	   printf("Number is not prime");
	}
}