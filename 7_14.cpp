// pattern 13
#include<stdio.h>
int main()
{
	for(int a=1; a<5; a++)
	{
		for(int b=1; b<5; b++)
		{
			if(b<=a)
			{
				printf("%d ",b);
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
}
