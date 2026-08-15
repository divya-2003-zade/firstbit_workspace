void main()
{
	int no=123456, count=0, rem;
	while(no>0)
	{
		no=no/10;
		count++;
	}
	printf("count = %d ",count);
}