//without parameter and with return type
#include<stdio.h>
int prime();
void main()
{ 
    int x;
	x=prime();
	if(x==1)
	printf("number is prime ");
	else
	printf("number is not prime");
}
int prime()
{
	int num, i;
	printf("enter a number: ");
	scanf("%d",&num);
    i = 2;
    while(i < num)
    {
        if(num % i == 0)
        {
            return 0;     
        }
        i++;
    }
    return 1;
}