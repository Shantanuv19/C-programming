//check perfect number
#include<stdio.h>
int main()
{
	int a,sum=0;
	printf("etner any number:- ");
	scanf("%d",&a);
	for(int b=1; b<a; b++)
	{
		if(a%b==0)
		{
			sum+=b;
		}
	}
	if(sum==a)
	{
		printf("Perfect number:- %d",sum);
	}else
	printf("Not perfect number:- %d",a);
}
