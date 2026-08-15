#include<stdio.h>
void main()
{
	int amount;
	printf("enter a amount in rs :");
	scanf("%d",&amount);
	printf ("enter a notes :");
	int arr[10];
	for(int i=0; i<10; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Array = [ ");
    for(int i=0; i<10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("]\n");
	for(int i = 0; i < 10; i++)
    {
        if(arr[i] != 0)
        {
            if(amount / arr[i] != 0)
            {
                printf("\n%d note(s) of %d\n", amount / arr[i], arr[i]);
            }

            amount = amount % arr[i];
        }
    }
}