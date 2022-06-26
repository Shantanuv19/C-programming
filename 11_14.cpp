// Sum of array element using function
#include<stdio.h>
int fun(int arr[], int size)
{
	int sum=0;
	for(int a=0; a<size; a++)
	{
		sum+=arr[a];
	}
	printf("Sum of array element is:- %d",sum);
}
int main()
{
	int arr[100], size;
	printf("Enter the size of the arr:- ");
	scanf("%d",&size);
	for(int a=0; a<size; a++)
	{
		scanf("%d",&arr[a]);
	}
	fun(arr,size);
}
