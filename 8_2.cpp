// user input in pointer
#include<stdio.h>
int main()
{
	int a, b;
	int *x, *y;
	x=&a;
	y=&b;
	printf("Enter the value of x:- ");
	scanf("%d",x);
	printf("Enter the value of y:- ");
	scanf("%d",y);
	printf("%d\n%d",*x,*y);
	printf("Value of a:- \n%d\n",a);
	printf("Value of b:- %d",b);
}
