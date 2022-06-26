// print all element of arr using user input
#include<stdio.h>
int main()
{
	int arr[100],size;
	printf("Enter the size of the arr:- ");
	scanf("%d",&size);
	for(int a=0; a<size; a++)
	{
		scanf("%d",&arr[a]);
		if(a==size-1)
		for(int b=0; b<size; b++){
		printf("%d\t",arr[b]);
		}
	}
}
