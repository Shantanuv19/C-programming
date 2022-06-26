// check mobile number length is 10 or not
#include<stdio.h>
#include<string.h>
int main()
{
	char ch[100];
	printf("Enter the mobile number:- ");
	gets(ch);
	if(strlen(ch)==10)
	{
		printf("Length of mobile number is:- 10");
	}
	else
	{
		printf("Length of mobile number is no 10");
	}
}
