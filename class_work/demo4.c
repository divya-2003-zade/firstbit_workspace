#include<stdio.h>
void main()
{
	int x=printf("firstbit");
	printf("%d \n",x);
	int y=printf("abc")+printf("xyz")+printf("java");
	printf("%d \n",y);
	int z=printf("abc")||printf("xyz");
	printf("%d \n",z);
	int d=printf("abc")&&printf("xyz");
	printf("%d \n",d);
	int s=printf("")||printf("xyz");
	printf("%d \n",s);
	int w=printf("")&&printf("xyz");
	printf("%d \n",w);
	int r=printf("abc")>printf("xyz");
	printf("%d \n",r);
	
}