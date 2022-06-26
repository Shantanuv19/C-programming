// Show result
#include<stdio.h>
int main()
{
	int a;
	printf("Enter the everage marks:- ");
	scanf("%d",&a);
	if(a<40)
	{
		printf("Fail..");
	}else if(a>=40 && a<50)
	{
		printf("D");
	}else if(a>=50 && a<60)
	{
		printf("C");
	}else if(a>=60 && a<70)
	{
		printf("B");
	}else if(a>=70 && a<80)
	{
		printf("A");
	}else if(a>=80 && a<90)
	{
		printf("E");
	}else if(a>=90 && a<=100)
	{
		printf("O");
	}else
	printf("Envalid....");
}
