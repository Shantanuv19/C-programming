// check given char is alphabate or sible or digit
#include<stdio.h>
int main()
{
	char val;
	printf("Enter the val:- ");
	scanf("%c",&val);
	if(val>'a'&&val<'z' || val>'A' && val<'Z')
	{
		printf("val is char");
	}else if(val>=48 && val<=57)
	{
		printf("val is digit");
	}else
	printf("val is simble...");
}
