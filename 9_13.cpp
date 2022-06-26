// Linear search
#include<stdio.h>
int main()
{
	int arr[100],size,s;
	printf("Enter the size of the arr:- ");
	scanf("%d",&size);
	for(int a=0; a<size; a++)
	{
		scanf("%d",&arr[a]);
	}
	printf("Enter the search  value:- ");
	scanf("%d",&s);
	for(int a=0; a<size; a++)
	{
		if(s==arr[a])
		{
			printf("Element is founded at:- %d",a+1);
			break;
		}
		else if(a==size-1)
		{
			printf("Element is not founded");
		}
	}
}
