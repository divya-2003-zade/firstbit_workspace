#include<stdio.h>
void display(int*,int);
void storeArray(int*,int);
void main()
{
	int arr[10];
	int brr[5];
	int crr[6];
	
	printf("Enter  element in array 1");
	storeArray(&arr[0],10);
	
//	printf("Enter  eelement in array 2");
	//storeArray(&brr[0],5);
	
	//printf("Enter  eelement in array 3");
	//storeArray(&brr[0],6);
	
	printf("Array Element are :");
	display(&arr[0],10);
	
}
void display(int*ptr, int size)
{
	printf("display array :");
	printf("[ ");
	for(int i=0; i<size; i++)
	printf("%d, ",ptr[i]);
	printf("\b ]");
}
void storeArray(int* ptr, int size)
{
	for(int i=0; i<size; i++)
	{
		scanf("%d",&ptr[i]);
	}
}
//void storeArray(int*ptr, int size)
//{
    // for(int i=0; i<size; i++)
	//{
	//
		//scanf("%d",&ptr[i]);
	//}	
//}
//void storeArray(int*ptr, int size)
//{
//	for(int i=0; i<6; i++)
//	{
		//scanf("%d",&ptr[i]);
	//}
//}