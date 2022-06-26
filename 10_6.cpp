// print multiplication double dimention array
#include<stdio.h>
int main()
{
	int arr[2][2],arr1[2][2], sum=0,arr2[2][2];
	printf("Enter the 1st element of the double dimention arr:- \n");
	for(int a=0; a<2; a++)
	{
		for(int b=0; b<2; b++)
		{
			scanf("%d",&arr[a][b]);
		}
	}
	printf("Enter 2nd array element:- \n");
	for(int a=0; a<2; a++)
	{
		for(int b=0; b<2; b++)
		{
			scanf("%d",&arr1[a][b]);
		}
	}
	printf("addition of 2 array element is:- \n");
	for(int a=0; a<2; a++)
	{
		for(int b=0; b<2; b++)
		{
			sum=0;
			for(int c=0; c<2; c++){
				sum+=arr[a][c]*arr1[c][b];
			}
			arr2[a][b]=sum;
		}
		printf("\n");
	}
	for(int a=0; a<2; a++)
	{
		for(int b=0; b<2; b++)
		{
			printf("%d",arr2[a][b]);
		}
		printf("\n");
	}
}
