//with parameter and with return type
#include<stdio.h>
int number(int);              //function declaration
int table_OF_5(int);
int sum_of_first_last(int);
int main()
{
	int res1, res2,res3;
	int n=1 ;
	int no=12345;
	int num=5;
	res1=number(n);                      //function call
	res2=table_OF_5(num);
	res3=sum_of_first_last(no);
}
int number(int n)                    //function defination
{
	
	printf("Number from 1 to 10 :");
	while(n<=10)
	{
		printf("  % d ", n);
		n++;
	}
	printf("\n \n");
	return n;
}
int table_OF_5(int num)
{
	
	int i=1 ,r1;
	printf(" The table of five is : ");
	while(i<=10)
	{
		r1=num*i;
		printf( " % d ",r1);
		i++;
		
    } 
   printf("\n \n");
   return r1;
} 


int sum_of_first_last(int no)
{
	int f,l;
	
	int sum;
	l=no%10;
	printf(" sum of first and last digit :");
	while(no>1)
	{
	  no=no/10;
	}
	f=no;
	sum=f+l;
	printf("%d (%d + %d) ", sum,f,l);
	return sum;
}