// table of one using while
#include<stdio.h>
int main()
{
	int a,b=1;
	printf("Enter the value:- ");
	scanf("%d",&a);
	while(b!=a+1)
	{
		printf("%d\n",b);
		b++;
	}
}
