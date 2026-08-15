 #include<stdio.h>
 int main()
 {
 	int a=10, b=20, c ;
 	int i=1;
 	while(i<2)
 	{
 		int x=a+b;
 		for(int j=1; j<i; j++)
 		{
 			a=a+i+j;
 			c=b+i+x;
		 }
		 i++;
	 }
	 printf("a=%d b=%d c=%d i=%d" ,a,b,c,i);
	 
 }