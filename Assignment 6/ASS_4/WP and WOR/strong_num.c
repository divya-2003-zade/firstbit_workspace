#include<stdio.h>
void strong(int);     // function declaration
void main()			  //function call
{
	int n;
	strong(n);
}
void strong(int n)       //function defination
{
	
	printf("enter a number : ");
	scanf("%d",&n);
	for( int i=1; i<=n; i++)
	{
		int temp=i;
		int sum=0;
		while(temp>0)
		{
			int rem=temp%10;
			int fact=1;
			for(int j=1; j<=rem; j++)
			{
				fact=fact*j;
			}
			sum=sum+fact;
			temp=temp/10;
		}
		if(sum==i)
		{
			printf("%d ",i);
		}
	}
}