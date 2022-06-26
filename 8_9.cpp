// structure using pointer
#include<stdio.h>
struct student
{
	int rollnumber;
};
int main()
{
	struct student obj;
	obj.rollnumber=21;
	struct student *newobj;
	newobj=&obj;
	printf("%d",*newobj);
}
