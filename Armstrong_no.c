//check armstrong no
#include<stdio.h>
#include<math.h>
int main()
{
	int val;
	printf("Enter value:- ");
	scanf("%d",&val);
	int count=0,val1=val,val2=val;
	while(val1!=0)
	{
		val1/=10;
		count++;
	}
	int b,c=1,d=0;
	while(val!=0)
	{
		c=1;
		b=val%10;
		val/=10;
		for(int a=1; a<=count; a++)
		{
			c*=b;
		}
		d+=c;
	}
	if(d==val2)
	{
	printf("Armstrong No");
	}else
	printf("Not Armstrong No");
}
