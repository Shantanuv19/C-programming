// find profit and loss
#include<stdio.h>
int main()
{
	float cp, sp;
	printf("Enter the value of cp:- ");
	scanf("%f",&cp);
	printf("Enter the vaue of sp:- ");
	scanf("%f",&sp);
	float val=sp-cp;
	if(val==0)
	{
		printf("No loss no profit");
	}else if(val>0)
	{
		printf("profit:- %f",val);
	}else
	{
		printf("Loss:- %f",val);
	}
}
