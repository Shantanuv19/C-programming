// structure with array
#include<stdio.h>
struct x
{
	int val;
};
int main()
{
	struct x obj_arr[10];
	printf("Enter the value of structure array:- \n");
	for(int a=0; a<5; a++)
	{
		scanf("%d",&obj_arr[a].val);
	}
	printf("Valud of arr is:- ");
	for(int a=0; a<5; a++)
	{
		printf("%d\t",obj_arr[a].val);
	}
}
