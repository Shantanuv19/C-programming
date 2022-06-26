// table of one using pointer
#include<stdio.h>
int main()
{
	int a=1, *b;
	b=&a;
	while(*b<=10)
	{
		printf("%d\t",*b);
		(*b)++;
	}
}
