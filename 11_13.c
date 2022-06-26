//function default parameter
#include<stdio.h>
int fun(int a=30, int b=30)
{
	
	printf("add is:- %d\n",a+b);
}
int main()
{
	printf("Without parameter:- \n");
	fun();
	printf("With parameter:- \n");	
	fun(10,10);
}
