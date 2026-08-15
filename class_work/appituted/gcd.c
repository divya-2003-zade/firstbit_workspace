//find the gcd (greatest common divisior)
#include<stdio.h>
void main()
{
	int no1,no2;
	printf(" Enter a two number : ");
	scanf("%d%d",&no1,&no2);
	int rem;
	rem=no1%no2;
	while(rem!=0)
	{
		no1=no2;
		no2=rem;
		rem=no1%no2;
	}
	printf("GCD is %d",no2);
}