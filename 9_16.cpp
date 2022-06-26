// print user input double dimention array
#include<stdio.h>
int main()
{
	int arr[2][2];
	printf("Enter the element of the double dimention arr:- \n");
	for(int a=0; a<2; a++)
	{
		for(int b=0; b<2; b++)
		{
			scanf("%d",&arr[a][b]);
		}
	}
	printf("Output of double dimention arr:- \n");
	for(int a=0; a<2; a++)
	{
		for(int b=0; b<2; b++)
		{
			printf("%d ",arr[a][b]);
		}
		printf("\n");
	}
}
