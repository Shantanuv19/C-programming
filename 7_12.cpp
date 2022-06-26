// pattern 12
#include<stdio.h>
int main()
{
	for(int a=0; a<5; a++)
	{
		for(int b=0; b<5; b++)
		{
			if(b==a && a<3|| a+b==4 && a<3)
			{
				printf(" *");
			}else{
				printf(" ");
			}
			if(b==2 && a>=3)
			{
				printf("* ");
			}
		}
		printf("\n");
	}
}
