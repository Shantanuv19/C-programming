// searching in single dimentin in arr:- 
#include<stdio.h>
int main()
{
	int arr[100], size, s,a, arr1[100];
	printf("Enter the size of the arr:- ");
	scanf("%d",&size);
	for(a=0; a<size; a++)
	{
		scanf("%d",&arr[a]);
		arr1[a]=arr[a];
	}
	printf("Copied element is:- ");
	for(a=0; a<size; a++)
	{
		printf("%d\t",arr[a]);
	}
}
