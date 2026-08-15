#include<stdio.h>
int main()
{
	int i=2, no,flag=0;
	scanf("%d",&no);
	while(i<no)
	{
		if(no%i==0)
		{
			flag=1;
			
			break;
		}
		i++;
	}
	if(no==i)
	{
		printf("prime");
	}
	else
	{
		printf("not prime");
	}
}