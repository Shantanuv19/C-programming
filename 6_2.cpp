// print digit of integer in reverse order
#include<stdio.h>
int main()
{
	int a, b, c=0;
	printf("Enter any number:- ");
	scanf("%d",&a);
	do{
		b=a%10;
		a=a/10;
		printf("%d",b);
	}while(a!=0);
}
