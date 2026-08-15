#include<stdio.h>

void main()
{
    int n, count = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n];

    // Store 1 to n in the array
    for(int i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }

    printf("Even numbers are: ");

    for(int i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
        {
            printf("%d ", arr[i]);
            count++;
        }
    }

    printf("\nNumber of even numbers = %d", count);
}