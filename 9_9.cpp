// max value in single dimention arr
#include<stdio.h>
int main()
{
	int arr[100], size, min=arr[0];
	printf("Ente the size of arr:- ");
	scanf("%d",&size);
	for(int a=0; a<size; a++)
	{
		scanf("%d",&arr[a]);
		if(arr[a]<min)
		min=arr[a];
	}
	printf("Min element in arr is:- %d",min);
}
