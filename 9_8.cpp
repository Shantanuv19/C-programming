// max value in single dimention arr
#include<stdio.h>
int main()
{
	int arr[100], size, max=0;
	printf("Ente the size of arr:- ");
	scanf("%d",&size);
	for(int a=0; a<size; a++)
	{
		scanf("%d",&arr[a]);
		if(arr[a]>max)
		max=arr[a];
	}
	printf("Max element in arr is:- %d",max);
}
