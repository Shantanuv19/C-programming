// recursion function
#include<stdio.h>
int fun(int a)
{
	if(a!=10)
	{
		a++;
		printf("%d\n",a);
		fun(a);
	}
}
int main()
{
	int a=0;
	fun(a);
}
