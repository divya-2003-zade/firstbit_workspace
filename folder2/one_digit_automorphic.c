#include<stdio.h>
int main()
{
	int no=5, sq,ld;
	sq=no*no;
	ld=sq%10;
	if(ld==no)
	printf("number is automorphic");
	else
	printf("not automorphic");
}