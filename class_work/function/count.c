# include<stdio.h>
int count_no();
int main()
{
	int res;
	res=count_no();
	    printf("Total digits = %d", res);

}
int count_no()
{
	int no, count;
	printf(" ener a number :");
	scanf("%d",&no);
	while(no>0)
	{
		count++;
		no=no/10;
	}
	return count;
}