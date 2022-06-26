// LCM OF TWO NUMBER
#include<stdio.h>
int main()
{
	int a, b,c, LCM,hcf;
	printf("Enter 1st number:- ");
	scanf("%d",&a);
	printf("Enter 2nd number:- ");
	scanf("%d",&b);
	for(c=1; c<=a; c++)
	{
		if(a%c==0 && b%c==0)
		{
			LCM=c;
		}
	}
	hcf =(a*b)/LCM;
	printf("Lcm is:- %d\n Hcf is:- %d",hcf,LCM);
}
