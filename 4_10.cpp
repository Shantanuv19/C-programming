// fact of a number
#include<stdio.h>
int main()
{
	int a, pro=1;
	printf("Enter the Number:- ");
	scanf("%d",&a);
	for(int x=1; x<=a; x++)
	{
		pro*=x;
	}
	printf("fact of number is:- %d",pro);
}
