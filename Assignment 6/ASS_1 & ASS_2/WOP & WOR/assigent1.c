//without parameter and without return type
#include<stdio.h>
void even_odd();
void palindrome();  
void leaf_year();
void vowel();                //function declaration
void age();
void check_case();
void salary();
void main()
{
	even_odd();
	palindrome();
	leaf_year();
	vowel();                    //function call
	age();
	check_case();
	salary();
}
//even_odd
void even_odd()             //function defination
{
	int no;
	printf("Enter number even or odd:");
	scanf("%d",&no);
	if(no%2==0)
	{
		printf(" %d   is an  even number \n",no);
	}
	else
	{
		printf(" %d  is an odd number \n",no);
	}
}
// palindrome number
void palindrome()
{
	int n;
	printf("enter a number for palindrome : ");
	scanf("%d",&n);
	int frist, last;
	frist= n/100;
	last= n%10;
	if(frist==last)
	{
		printf("%d  is pallindrome number \n",n);
	}
	else
	{
		printf("%d not is pallindrome number \n",n);
	}
}
// leaf year
void leaf_year()                  
{
	int year;
	printf("Enter a year :");
	scanf("%d",&year);
	if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
	{
		printf("%d is a leaf year \n",year);
	}
	else
	{
		printf("%d is not a leaf year \n",year);
	}
}
// vowel
void vowel()
{
	char ch;
	printf("enter a vowel and consonant :");
	scanf(" %c",&ch);
	if(ch=='A'|| ch=='E'|| ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
	{
		printf("%c is  a vowel \n",ch);
	}
	else
	{
		printf("%c is a consonant \n ",ch);
	}
}
//age
void age()
{
	int age;
	printf("enter a age :");
	scanf("%d",&age);
	if(age >= 18)
	{
		printf("Person is eligible for the vote \n");
	}
	else
	{
		printf("Person is  not eligible for the vote \n");
	}
}
//uppercase and lowercase
void check_case()
{
	char ch;
	printf("enter a character :");
	scanf("%c",&ch);
	if (ch>='A' && ch<='Z')
	{
		printf("%c is in the uppercase \n",ch);
	}
	else if(ch>='a' && ch<='z')
	{
		printf("%c is in the lowercase \n",ch);
	}
	else 
	{
		printf("not a alphabet");
	}
}
//salary
void salary()
{
	int basic=4500,da,ta,hra,total;
	if(basic<= 5000)
	{
		da=basic * 10 /100;
		ta=basic * 20 /100;
		hra= basic *25/100;
	}
	else
	{
		da=basic * 15 /100;
		ta=basic * 25 /100;
		hra= basic *30/100;
	}
	total= basic+da+ta+hra;
	printf("total salary based on the basic is %d \n",total);
}