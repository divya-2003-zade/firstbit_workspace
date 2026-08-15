//with parameter and with return type
#include<stdio.h>
int amstrong(int);
int perfect(int);                   //function declaration
int prime(int);
int strong(int);
int main()
{
	int a,b,c,d;
	
	printf("1.Enter a range of amstrong number :");
	scanf("%d",&a);
	int res1=amstrong(a);
	printf("%d is a amstrong number",res1);
	printf("\n\n2. Enter a range of perfect numbmber :");
	scanf("%d",&b);                                             //function call
    int res2=perfect(b);
    printf("%d is a perfect number",res2);
    printf("\n\n3.Enter a n  prime Number :");  
	scanf("%d",&c);
	int res3=prime(c);
	printf("%d is a prime number",res3); 
	printf("\n\n4. enter a  range of strong number : ");
	scanf("%d",&d);
	int res4=strong(d);
	printf("%d is a strong number",res4);
	
	
}
//Amstrong number
int amstrong(int x)                            //function defination
{
	
	for(int i=1; i<=x; i++)
    {
        int temp = i;
        int count = 0;
        int sum = 0;
	  for (int j=i; j>0; j=j/10)
	  {
		count++;
      }
	  for( int j=i; j>0; j=j/10)
	   {
		  int rem=j%10;
		  int x=1;
		  for (int k=1; k<=count; k++)
		  {
			  x=x*rem;
		  }
		   sum=sum+x;
 	   }
	    if(sum==temp)
	    printf("%d  ",i); 
   }
}
//perfect number
int perfect(int y)          
{
	
	 for (int i=1; i<y; i++)
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
     printf("%d \n",i);
    }
 }
}
// prime number
int prime(int z)   
{
	
	for (int i=2; i<z; i++)
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
		    printf("%d ",i);
	    }
  }
}
//strong number
int strong(int m)          
{
	
	for( int i=1; i<=m; i++)
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