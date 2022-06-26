// count Special symble in string
#include<stdio.h>
int main()
{
	char ch[100],len=0;
	printf("Enter string:- ");
	gets(ch);
	for(int a=0; ch[a]!='\0'; a++)
	{
		if(ch[a]>=48 && ch[a]<=57)
		{
		}else if(ch[a]>=97 && ch[a]<=122){
			
		}else
		{
			len++;
		}
	}
	printf("Lenght of the string is:- %d",len);
}
