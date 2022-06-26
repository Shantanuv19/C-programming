// print first and last digit of integer
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter any integer value:- ");
	scanf("%d",&a);
	b=a%10;
	do{
		c=a%10;
		a/=10;
	}while(a!=0);
	printf("First element is:- %d\nLast element is:- %d",b,c);
}
