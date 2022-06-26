// greater among three
#include<stdio.h>
int main()
{
	int val1,val2,val3;
	printf("Enter the 1st value:- ");
	scanf("%d",&val1);
	printf("Enter the 2nd value:- ");
	scanf("%d",&val2);
	printf("Enter the 3rd value:- ");
	scanf("%d",&val3);
	if(val1>val2 &&val1>val3)
	{
		printf("value 1 is greater among three..");
	}else if(val2>val1 && val2>val3)
	{
		printf("val 2 is greater among three..");
	}else if(val3>val1  && val3>val2)
	{
		printf("val 3 is greater among three..");
	}
}
