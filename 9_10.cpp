// searching in single dimentin in arr:- 
#include<stdio.h>
int main()
{
	int arr[100], size, s,a;
	printf("Enter the size of the arr:- ");
	scanf("%d",&size);
	for(a=0; a<size; a++)
	{
		scanf("%d",&arr[a]);
	}
	printf("Enter the searching element in arr:- ");
	scanf("%d",&s);
	for(a=0; a<=size; a++)
	{
		if(arr[a]==s)
		{
			printf("Element is finded at position:- %d",a+1);
			break;
		}
		if(a==size)
		{
			printf("Element is not in the arr");
		}
	}
}
