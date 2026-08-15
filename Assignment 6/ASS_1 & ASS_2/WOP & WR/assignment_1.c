//without parameter and with return type
#include<stdio.h>
int leap_year();
char vowel();                //function declaration
int Age();
char up_lowercase();
float salary();
int main()
{
	int res1,res2;
	char res3,res4;
	float res5;	
	res1=leap_year();
	res3=vowel();                    //function call
	res2=Age();
	res4=up_lowercase();
	res5=salary();
	return 0;
}
// leap year
int leap_year()                   //function defination
{
	int year=2020;
	if(year % 4 ==0)
	{
		printf("%d is a leaf year \n",year);
		return 1;
	}
	else
	{
		printf("%d is not a leaf year \n",year);
		return 0;
	}
}
// vowel
char vowel()
{
	char ch='q';
	if(ch=='A'|| ch=='E'|| ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
	{
		printf("%c is  a vowel \n",ch);
		return 'A';
	}
	else
	{
		printf("%c is a consonant \n ",ch);
		return 'a';
	}
}
//age
int Age()
{
	int age=20;
	if(age >= 18)
	{
		printf("Person is eligible for the vote \n");
		return 1;
	}
	else
	{
		printf("Person is  not eligible for the vote \n");
		return 0;
	}
}
//uppercase and lowercase
char up_lowercase()
{
		char ch1='A';
	if (ch1>='A' && ch1<='Z')
	{
		printf("%c is in the uppercase \n",ch1);
		return 'A';
	}
	
	  else if(ch1>='a' && ch1<='z')
	{
		printf("%c is in the lowercase \n",ch1);
		return 'a';
	}
		else
		{
			printf("not an alphabets");
			return 'n';
		}
		
}
//salary
float salary()
{
	float da,ta,hra,total;
	float basic=4500;
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
	printf("total salary based on the basic is %f \n",total);
	return total;
}