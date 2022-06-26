// check prime number or not
#include<stdio.h>
int main()
{
	int a,c=0;
	printf("Enter any number:- ");
	scanf("%d",&a);
	for(int x=2; x<a; x++)
	{
		if(a%x==0)
		{
			printf("Not a prime number");
			c=1;
			break;
		}
	}
	if(c!=1)
	{
		printf("prime number");
	}
}
