// name roll marks print using struct
#include<stdio.h>
#include<string.h>
struct student
{
	char name[100];
	int roll;
	float marks;
};
int main()
{
	struct student obj;
	strcpy(obj.name,"shantanu kumar");
	obj.roll=21;
	obj.marks=8.3;
	printf("%s\n",obj.name);
	printf("%d\n",obj.roll);
	printf("%f\n",obj.marks);
}
