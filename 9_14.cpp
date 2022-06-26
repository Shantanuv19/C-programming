// binary search
#include<stdio.h>
int main()
{
	int arr[100], size, ele;
	printf("Enter the size of the arr:- ");
	scanf("%d",&size);
	for(int a=1; a<=size; a++)
	{
		scanf("%d",&arr[a]);
	}
	printf("Enter the searching element:- ");
	scanf("%d",&ele);
	if(arr[size/2]<ele)
	{
		for(int a=size/2; a<=size; a++)
		{
			if(arr[a]==ele)
			{
				printf("Element is founded at:- %d",a);
			}else if(a==size){
				printf("Element is not founded");
			}
		}
	}else
	{
		for(int a=1; a<=size/2; a++)
		{
			if(arr[a]==ele)
			{
				printf("Element is  founded at:- %d",a);
			}else if(a==size/2)
			{
				printf("Element is not founded");
			}
		}
	}
}
