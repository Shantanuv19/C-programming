// print all element of arr using user input
#include<stdio.h>
int main()
{
	int arr[100],size,sum=0;
	printf("Enter the size of the arr:- ");
	scanf("%d",&size);
	for(int a=0; a<size; a++)
	{
		scanf("%d",&arr[a]);
		sum+=arr[a];
	}
	printf("sum of all element is:- %d",sum);
}
