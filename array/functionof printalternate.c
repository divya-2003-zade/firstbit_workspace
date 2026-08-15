#include<stdio.h>
void printalternate(int*,int);      //function declaration 
void main()
{
	int arr[10];
	printf("Enter a number : ");
	for(int i=0; i<10; i++)
	{
		scanf("%d",&arr[i]);
	}
	printalternate(arr,10);           //function call 
}
void printalternate(int*arr,int size)        //function defination 
{
	printf(" Alternate Array = [ ");
	for(int i=0; i<size; i+=2)
	{
	     printf("%d ",arr[i]);
	}
	 printf("\b]\n");
}
