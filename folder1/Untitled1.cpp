//Without Parameter and With Return Type
#include<stdio.h>

int number();
int table_OF_5();
int sum_of_first_last();
int amstrong();
int factorial();
int prime();
int palindrome();
int perfect();
int strong();

int main()
{
    number();
    table_OF_5();
    sum_of_first_last();
    amstrong();
    factorial();
    prime();
    palindrome();
    perfect();
    strong();

    return 0;
}

// Number from 1 to 10
int number()
{
    int n=1;
    printf("Number from 1 to 10 :\n");
    while(n<=10)
    {
        printf("%d\n",n);
        n++;
    }
    return 0;
}

// Table of 5
int table_OF_5()
{
    int num=5;
    int i=1,r1;

    printf("The table of five is :\n");

    while(i<=10)
    {
        r1=num*i;
        printf("%d\n",r1);
        i++;
    }

    return 0;
}

// Sum of first and last digit
int sum_of_first_last()
{
    int f,l;
    int no=12345;
    int sum;

    l=no%10;

    while(no>9)
    {
        no=no/10;
    }

    f=no;
    sum=f+l;

    printf("Sum of first and last digit : %d (%d + %d)\n",sum,f,l);

    return 0;
}

// Armstrong Number
int amstrong()
{
    int rem,sum=0,org;
    int no=153;

    org=no;

    while(no!=0)
    {
        rem=no%10;
        sum=sum+rem*rem*rem;
        no=no/10;
    }

    if(sum==org)
        printf("%d is an Armstrong number\n",org);
    else
        printf("Not Armstrong\n");

    return 0;
}

// Factorial
int factorial()
{
    int i=1,fact=1,n=5;

    while(i<=n)
    {
        fact=fact*i;
        i++;
    }

    printf("%d factorial is : %d\n",n,fact);

    return 0;
}

// Prime Number
int prime()
{
    int num=7;
    int i=2;
    int flag=1;

    while(i<num)
    {
        if(num%i==0)
        {
            flag=0;
            break;
        }
        i++;
    }

    if(flag==1)
        printf("%d is Prime\n",num);
    else
        printf("%d is Not Prime\n",num);

    return 0;
}

// Palindrome
int palindrome()
{
    int rev=0,org,rem;
    int no=121;

    org=no;

    while(no!=0)
    {
        rem=no%10;
        rev=rev*10+rem;
        no=no/10;
    }

    if(rev==org)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}

// Perfect Number
int perfect()
{
    int n=28;
    int i=1,sum=0;

    while(i<n)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
        i++;
    }

    if(sum==n)
        printf("Perfect Number\n");
    else
        printf("Not Perfect Number\n");

    return 0;
}

// Strong Number
int strong()
{
    int num=145,original_num=num;
    int rem,i=1;
    int fac1=1,fac2=1,fac3=1;
    int sum;

    rem=num%10;
    while(rem>=i)
    {
        fac1=fac1*rem;
        rem--;
    }

    num=num/10;

    rem=num%10;
    while(rem>=i)
    {
        fac2=fac2*rem;
        rem--;
    }

    num=num/10;

    rem=num%10;
    while(rem>=i)
    {
        fac3=fac3*rem;
        rem--;
    }

    sum=fac1+fac2+fac3;

    if(sum==original_num)
        printf("Strong Number\n");
    else
        printf("Not Strong Number\n");

    return 0;
}