//find the smallest number
#include<stdio.h>
void main()
{
	int no1;
	printf(" Enter a  number : ");
	scanf("%d",&no1);
	int rem;
	int max= 10;
	while(no1>0)
	{
		rem=no1%10;
		if(max>rem)
		max=rem;
		no1=no1/10;
	}
	printf("smallest number is %d",max);
}