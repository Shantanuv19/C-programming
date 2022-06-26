// addition of two number using pointer
#include<stdio.h>
int main()
{
	int a=10, b=10, *c, *d;
	c=&a;
	d=&b;
	printf("%d",*c+*d);
}
