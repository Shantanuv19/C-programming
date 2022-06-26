// pattern 2
#include<stdio.h>
int main()
{
	for(int a=0; a<5; a++)
	{
		for(int b=0; b<a+1; b++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
