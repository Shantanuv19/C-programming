// print all even number in array
#include<stdio.h>
int main()
{
	int arr[100], size;
	printf("Enter the size of the arr:- ");
	scanf("%d",&size);
	for(int a=0; a<size; a++)
	{
		scanf("%d",&arr[a]);
	}
	printf("all even number is:- ");
	for(int a=0; a<size; a++)
	{
		if(arr[a]%2==0)
		{
			printf("%d\t",arr[a]);
		}
	}
}
