// multiplication of digit of a number
#include<stdio.h>
int main()
{
	int a,b,c=1;
	printf("Enter a number:- ");
	scanf("%d",&a);
	while(a!=0)
	{
		b=a%10;
		a/=10;
		c*=b;
	}
	printf("Product of digit is:- %d",c);
}
