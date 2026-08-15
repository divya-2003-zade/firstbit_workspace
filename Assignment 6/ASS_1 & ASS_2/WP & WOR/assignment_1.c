//with parameter and without return type
#include<stdio.h>
void leaf_year(int);
void vowel(char);                //function declaration
void Age(int);
void up_lowercase(char);
void salary(float);
void main()
{
	int year=2020;
	int age=20;
	char ch='q';
	char ch1='A';
	float total;
	leaf_year(year);
	vowel(ch);                    //function call
	Age(age);
	up_lowercase(ch1);
	salary(total);
}
// leaf year
void leaf_year(int year)                   //function defination
{
	
	if(year % 4 ==0)
	{
		printf("2020 is a leaf year \n");
	}
	else
	{
		printf("2020 is not a leaf year \n");
	}
}
// vowel
void vowel(char ch)
{
	
	if(ch=='A'|| ch=='E'|| ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
	{
		printf("q is a not a vowel \n");
	}
	else
	{
		printf("q is a consonant \n ");
	}
}
//age
void Age(int age)
{
	
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
void up_lowercase(char ch1)
{
	
	if (ch1>='a' && ch1<='z')
	{
		printf("A is in the uppercase \n");
	}
	else
	{
		printf("A is in the lowercase \n");
	}
}
//salary
void salary(float total)
{
	float basic=4500,da,ta,hra;
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