#include<stdio.h>
void perfect(int); // function declaration
void main()         //function call
{
	int n;
    perfect(n);	
}
void perfect(int n)      //function defination
{
	
	printf("Enter a numbmber :");
	scanf("%d",&n);
	 for (int i=1; i<n; i++)
 {
	int sum=0;
	for( int j=1; j<i; j++)
	{
	 if(i%j==0)
	 {
	   sum=sum+j;
	 }
    }
    if(sum==i)
    {
     printf("%d ",i);
    }
 }
}