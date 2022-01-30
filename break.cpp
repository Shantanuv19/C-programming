#include<stdio.h>
int main()
{
	char a;
	while(a<10)
	{
		printf("%d\n",a);
		if(a==5)
		{
			break;
		}
		a++;
	}
}
