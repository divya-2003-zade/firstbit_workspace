#include<stdio.h>
void prime();  // function declaration
void main()
{
	int n;
	 prime(n); // function call
}
void prime(int n)   // function defination
{
	printf("Enter a n Number :");  
	scanf("%d",&n);
	for (int i=2; i<n; i++)
 {
	  int flag=1;
   	 for(int j=2; j<i; j++)
   {
		if(i%j==0)
		{
			flag=0;
			break;
		}
	}
	    if(flag==1)
	    {
		    printf("%d  ",i);
	    }
  }
}