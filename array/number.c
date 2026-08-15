#include<stdio.h>
void main()
{
	int arr[10];
       int max=arr[10];
       int min=arr[10];
       
       printf("Enter a array of number : [");
       scanf("%d ",&arr[10]);
       printf(" ,]");
       for(int i=1; i<10; i++)
       {
       	if(arr[i]>max)
       	max=arr[i];
       	printf("The maximum number in the array is %d \n\n",arr[i]);
       	if(arr[i]<min)
       	min=arr[i];
       	printf("The minimum number in the array is %d ",arr[i]);
	   }
}