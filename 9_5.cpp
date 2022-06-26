// addition of two array of single dimention element
#include<stdio.h>
int main()
{
	int arr[100], arr1[100], size;
	printf("Enter the size of the arr:- ");
	scanf("%d",&size);
	printf("Enter the element of the 1st arr:- ");
	for(int a=0; a<size; a++)
	{
		scanf("%d",&arr[a]);
	}
	printf("Enter the 2nd arr element:- ");
	for(int b=0; b<size; b++)
	{
		scanf("%d",&arr1[b]);
		if(b==size-1)
		{
			printf("Addition of two arr is:- ");
			for(int a=0; a<size; a++)
			printf("%d\t",arr[a]+arr1[a]);
		}
	}
}
