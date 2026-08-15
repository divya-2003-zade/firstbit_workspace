void main()
{
	int x = printf("%d",printf("%d%d",printf("Hi"),printf("Bye")));
	printf("%d \n", x);
	
	int y = printf("%d%d",printf("%d",printf("ABC")),printf("%d",printf("XYZ")));
	printf("%d \n", y);
	
	int z = printf("%d",printf("One%dTwo",printf("Three")));
	printf("%d \n", z);
	
	int d = printf("Hello") + printf("World");
	printf("%d \n", d);
	
	int s = printf("ABC") > printf("XYZ");
	printf("%d \n ", s);
	
	int a = printf("Hello") && printf("C");
	printf("%d", a);
}