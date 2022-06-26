#include<stdio.h>
int main()
{
	int arr[100], size;
	printf("Enter the size of the arr:- ");
	scanf("%d",&size);
	for(int a=1;  a<=size*2; a++)
	{
		if(a<=size){
		printf("Enter 1st array element:- ");
		}else{
			printf("Enter 2nd array element:- ");
		}
		scanf("%d",&arr[a]);
	}
	for(int b=1; b<=size*2; b++)
	{
		printf("%d\t",arr[b]);
	}
}
