//check entered trengle is valid or not
#include<stdio.h>
int main()
{
	float a, b, c;
	printf("Enter the 1st element:- ");
	scanf("%f",&a);
	printf("Enter the 2nd element:- ");
	scanf("%f",&b);
	printf("Enter the 3rd element:- ");
	scanf("%f",&c);
	if((a+b+c)==180)
	{
		printf("valid trangle...");
	}else
	{
		printf("Envalid trange...");
	}
}
