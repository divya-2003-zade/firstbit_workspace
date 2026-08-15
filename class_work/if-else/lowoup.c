void main()
{
	char ch='A';
	printf("\nchar=%c",ch);
	if(ch>='a' && ch<='z')
	{
		ch=ch-32;
	}
	else
	{
		ch=ch+32;
	}
	
	printf("\nchar=%c",ch);
	
}


