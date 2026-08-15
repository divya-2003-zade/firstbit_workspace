#include<stdio.h>

void main()
{
    int arr[1];
    int flag = 0;

    printf("Enter a number: ");
    scanf("%d", &arr[0]);

    for(int i = 2; i < arr[0]; i++)
    {
        if(arr[0] % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
        printf("%d is a prime number", arr[0]);
    else
        printf("%d is not a prime number", arr[0]);
}