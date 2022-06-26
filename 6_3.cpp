// palindrome no
#include<stdio.h>
int main()
{
	int a,b,c,e;
	printf("Enter any number:- ");
	scanf("%d",&a);
	e=a;
	do{
		b=a%10;
		c=(c*10)+b;
		a/=10;
	}while(a!=0);
	if(c==e)
	{
		printf("Palindrome number");
	}else
	{
		printf("Not palindrome number");
	}
}
