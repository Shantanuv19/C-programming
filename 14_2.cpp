// structure with pointer
#include<stdio.h>
struct value
{
	int val;
};
int main()
{
	int *p;
	struct value obj;
	obj.val=50;
	p=&obj.val;
	printf("%d",*p);
}
