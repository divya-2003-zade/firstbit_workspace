//find the greatest number
#include<stdio.h>
void main()
{
	int no1;
	printf(" Enter a  number : ");
	scanf("%d",&no1);
	int rem;
	int max= -1;
	while(no1>0)
	{
		rem=no1%10;
		if(max<rem)
		max=rem;
		no1=no1/10;
	}
	printf("greatest number is %d",max);
}