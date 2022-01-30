#include<stdio.h>
int main()
{
	int a;
	printf("Enter the value of a:- ");
	scanf("%d",&a);
	if(a>0)
	{
		if(a<10)
		{
			printf("Value of a is less then 10 a:- %d",a);
		}
		else
		{
			printf("Value of a is greater the 10 :- %d",a);
		}
	}
	else
	{
		printf("Value of a is -ve");
	}
}
