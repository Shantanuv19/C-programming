// pattern 6
#include<stdio.h>
int main()
{
	for(int a=0; a<=6; a++)
	{
		for(int b=0; b<=5; b++)
		{
			if(a==3)
			{
				printf("* ");
			}else
			{
				printf(" ");
			}
			/*if(b==3 && a==3)
			{
				printf("* ");
			}*/
			if(b==5)
			{
				printf("* ");
			}
		}
		printf("\n");
	}
}
