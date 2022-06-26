// calculator
#include<stdio.h>
int main()
{
	int a, b, c;
	printf("Etner the 1st element:- ");
	scanf("%d",&a);
	printf("Enter the 2nd element:- ");
	scanf("%d",&b);
	printf("1> addition\n2> Subtraction\n3> product\n4> divide\n");
	printf("Enter your choice:- ");
	scanf("%d",&c);
	switch(c)
	{
		case 1: printf("Addition is:- %d",a+b); break;
		case 2: printf("sub is:- %d", a-b);
		case 3: printf("pro is:- %d",a*b);
		case 4: printf("Div is:- %d",a/b);
		default: printf("Envalid...");
	}
}
