// prime number between 1 to N
#include<stdio.h>
int main()
{
	int a, arr[100],b=0,n=0;
	printf("Enter any number:- ");
	scanf("%d",&a);
	for(int x=1; x<=a; x++)
	{
		for(int y=2; y<x; y++)
		{
			if(x%y==0)
			{
				arr[b]=0;
				b++;
				n=1;
				break;
			}
		}
		if(n==1)
		{
			arr[b]=1;
			b++;
		}
	}
	for(int l=0; l<b; l++)
	{
		if(arr[l]==0)
		{
			printf("Not a prime no\n");
		}
		else
		{
			printf("prime no\n");
		}
	}
}
