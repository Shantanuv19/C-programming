// print sum of natural number
#include<stdio.h>
int main()
{
	int a, sum=0;
	scanf("%d",&a);
	for(int x=1; x<=a; x++)
	{
		sum+=x;
	}
	printf("sum of all natural number is:- %d",sum);
}
