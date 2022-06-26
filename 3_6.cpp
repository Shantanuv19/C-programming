#include<stdio.h>
int main()
{
	int a,b; static int amount=1000;
	printf("Enter the amount:- ");
	scanf("%d",&a);
	printf("1> diposite\n2> withdraw\n3> amount\n");
	printf("Etner the operation:- ");
	scanf("%d",&b);
	switch(b)
	{
		case 1: printf("%d",a+amount); break;
		case 2: printf("%d",amount-b); break;		
		case 3: printf("%d",amount); break;
		default: printf("Envalid");
	}
}
