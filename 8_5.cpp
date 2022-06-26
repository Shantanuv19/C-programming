// division of two number
#include<stdio.h>
int main()
{
	int a,b,*x,*y;
	x=&a;
	y=&b;
	printf("Enter the first value:- ");
	scanf("%d",x);
	scanf("%d",y);
	printf("division of two value is:- %d",*x / *y);
}
