// print reverse using while loop form N - 0
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the number:- ");
	scanf("%d",&a);
	b=a;
	while(b!=0)
	{
		printf("%d\t",b);
		--b;
	}
	return 0;
}
