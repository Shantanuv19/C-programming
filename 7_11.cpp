// pattern 11
#include<stdio.h>
int main()
{
	for(int a=0; a<5; a++)
	{
		for(int b=0; b<5; b++)
		{
			if(a==0||a==2||a==4||b==0&&a==1||b==4&&a==3)
			{
				printf(" *");
			}else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
}
