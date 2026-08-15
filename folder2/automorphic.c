#include<stdio.h>
int main()
{
	int no=25;
	int sq=no*no;
	int org=no;
	int count=0;
	while(no>0)
	{
		count++;
		no=no/10;
	}
	no=org;
	int x=1;//10 raise to power count(b)
	int i=1;
	while(i<=count)
	{
		
		x=x*10;
		i++;
	}
	int ld=sq%x;
	printf("ld=%d and no=%d " , ld,no);
	if(ld==no)
	printf("No is a automorphic");
	else
	printf("No is not automorphic");
}