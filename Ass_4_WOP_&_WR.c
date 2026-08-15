//without parameter and with return type
#include<stdio.h>
int amstrong();
int perfect();                   //function declaration
int prime();
int strong();
int main()
{
	int res1,res2,res3,res4;
	res1=amstrong();
	res2=perfect();                       //function call
    res3=prime(); 
	res4=strong();
}
//Amstrong number
int amstrong()                            //function defination
{
		int n,temp;
		
	printf("1.Enter a range of amstrong number :");
	scanf("%d",&n);
	for(int i=1; i<=n; i++)
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
	    printf("%d  ",temp); 
	}
   
    return temp;
}
//perfect number
int perfect()          
{
	int n;
	printf("\n\n2. Enter a range of perfect numbmber :");
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
     printf("%d \n",i);
    }
 }
 return 1;
}
// prime number
int prime()   
{
	int n;
	printf("\n\n3.Enter a n  prime Number :");  
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
		    printf("%d ",i);
	    }
  }
  return 1;
}
//strong number
int strong()          
{
	int n;
	printf("\n\n4. enter a  range of strong number : ");
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
	return 1;
}