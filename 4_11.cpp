// power of any number
#include<stdio.h>
int main()
{
	int a, c, p=2;
	printf("Enter the base:- ");
	scanf("%d",&a);
	printf("Enter the power:- ");
	scanf("%d",&c);
	for(int x=1; x<c; x++)
	{
		p=a*p;
	}
	printf("Result is:- %d",p);
}
