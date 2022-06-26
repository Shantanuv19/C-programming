// addition of two number using structure
#include<stdio.h>
struct num
{
	int a,b;
};
int main()
{
	struct num obj;
	obj.a=10;
	obj.b=20;
	printf("%d",obj.a+obj.b);
}
