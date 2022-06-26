//pattern 8
#include<stdio.h>
int main()
{
	for(int a=0; a<5; a++)
	{
		for(int b=0; b<5; b++)
		{
			if(b==0 || b==4||a==0||a==4)
			{
				printf(" *");
			}else{
				printf("  ");
			}
		}
		printf("\n");
	}
}
