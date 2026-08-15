#include<stdio.h>
void main()
{
	int no=6, i=1,tem=0;
	while(i<no)
	{
	    tem=tem*10+3;
		printf("%d",tem);
		printf("+");
		i++;
	}
}