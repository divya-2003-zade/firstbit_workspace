#include<stdio.h>
int find_power();
int main()
{
	int result=find_power();
	printf("result= %d ",result);
}
int find_power()
{
	
	int res=1, power,base;
	printf("enter the power of number :");
	scanf("%d",&power);
	printf("enter a base:");
	scanf("%d",&base); 
	for(int j=1; j<=power; j++)
	{

	res=res*base;
	}
	return res;
}