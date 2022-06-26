// Find sum of digits of integer value
#include<stdio.h>
int main()
{
	int a,b,c=0,d;
	printf("Enter any digits:- ");
	scanf("%d",&a);
	do{
		b=a%10;
		a/=10;
		c=c+b;
	}while(a!=0);
	printf("Sum of digit is:- %d",c);
}
