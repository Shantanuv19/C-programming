// check a prime number
#include<stdio.h>
int main()
{
	int a, b=1,c=0;
	printf("Enter the number:- ");
	scanf("%d",&a);
	while(b!=a+1)
	{
		if(a%b==0)
		{
			c++;
			if(c==3)
			{
				printf("Not prime");
			}
		}
		b++;
	}
	if(c==2)
	{
		printf("prime");
	}
}
