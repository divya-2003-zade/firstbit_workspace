//with parameter and without return type
#include<stdio.h>
void number(int);              //function declaration
void table_OF_5(int);
void sum_of_first_last(int);
void main()
{
	int n=1;
	int no=12345;
	int num=5;
	number(n);                      //function call
	table_OF_5(num);
	sum_of_first_last(no);
}
void number(int n)                    //function defination
{
	
	printf("Number from 1 to 10 :");
	while(n<=10)
	{
		printf("  % d ", n);
		n++;
	}
	printf("\n \n");
}
void table_OF_5(int num)
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
} 


void sum_of_first_last(int no)
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
}