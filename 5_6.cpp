// print 1st element and last element
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the number:- ");
	scanf("%d",&a);
	b=a%10;
	while(a!=0)
	{
		c=a%10;
		a/=10;
	}
	printf("First digit is:- %d\nLast element is:- %d",c,b);
}
