//find the smallest number
#include<stdio.h>
void main()
{
	int no1;
	printf(" Enter a  number : ");
	scanf("%d",&no1);
	int rem;
	int min=9;
	while(no1>0)
	{
		rem=no1%10;
		if(min>rem)
		min=rem;
		no1=no1/10;
	}
	printf("smallest number is %d",min);
}