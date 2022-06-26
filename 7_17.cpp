// pattern 17
#include<stdio.h>
int main()
{
	for(int a=0; a<5; a++)
	{
		for(int b=0; b<5-a; b++)
		{
			printf(" ");
		}
		for(int b=0; b<=a; b++)
		{
			printf("%d ",a);
		}
		printf("\n");
	}
}
