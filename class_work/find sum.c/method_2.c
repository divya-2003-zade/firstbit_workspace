void main()
{
	int no=73526,sum;
	int r1;
	r1=no%10;
	sum=sum+r1;
	no=no/10;
	r1=no%10;
	sum=sum+r1;
	no=no/10;
	r1=no%10;
	sum=sum+r1;
	no=no/10;
	r1=no%10;
	sum=sum+r1;
	no=no/10;
	r1=no%10;
	sum=sum+r1;
	no=no/10;
	printf("sum of five digit is %d",sum);
}