#include<stdio.h>
int main()
{
	int i=1,no=28,sum=0;
	while(i<no)
	{
		if(no%i==0)
		{
			sum=sum+i;
		}
		i++;
	}
	if(sum==no)
	printf("pefect");
	else
	printf("not perfect");
}
	