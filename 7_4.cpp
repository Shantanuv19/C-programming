//  Patern 4
#include<stdio.h>
int main()
{
	for(int a=0; a<5; a++)
	{
		for(int b=0; b<5-a; b++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
