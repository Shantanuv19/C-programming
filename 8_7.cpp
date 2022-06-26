// pointer with array
#include<stdio.h>
int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	for(int a=0; a<10; a++)
	{
		printf("%d\t",*(arr+a));
	}
}
