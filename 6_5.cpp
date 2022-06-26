//  find multiplication of digit
#include<stdio.h>
int main()
{
	int a, b, c=1;
	printf("Enter digit:- ");
	scanf("%d",&a);
	do{
		b=a%10;
		c=c*b;
		a/=10;
	}while(a!=0);
	printf("Multiplication of digit is:- %d",c);
}
