void main()
{
	int no=65431;
	int r1,r2,r3,r4,r5;
	int q1,q2,q3,sum;
	r1=no%10;
	q1=no/10;
	r2=q1%10;
	q2=q1/10;
	r3=q2%10;
	q3=q2/10;
	r4=q3%10;
	r5=q3/10;
	sum=r1+r2+r3+r4+r5;
	printf("addition of five number is %d \n",sum);
	printf("r1=%d, q1=%d, r2=%d, q2=%d, r3=%d, q3=%d, r4=%d, r5=%d and sum=%d",r1,q1,r2,q2,r3,q3,r4,r5,sum);
	
}