void main ()
{
	int num=2,i=1,count=0;
	while(num<100)
	{
		if(num%i==0)
		{
			num++;
		}
		
		i++;
	}
	if(count==2)
	{
		count++;
		printf(" %d ",count);
	}
	
}