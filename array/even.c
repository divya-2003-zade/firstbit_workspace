#include<stdio.h>

void main()
{
    int n, count = 0;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    scanf("%d",&arr[n]);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
        {
            count++;
        }
    }

    printf("Number of even elements = %d", count);
}