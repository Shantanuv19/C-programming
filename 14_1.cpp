//union
#include<stdio.h>
union x
{
	int x1;
	int y;
};
int main()
{
	union x obj;
	obj.x1=60;
	union x o;
	o.y=10;
	printf("%d\n",obj.x1);
	printf("%d",o.y);
}
