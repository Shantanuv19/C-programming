// count alphabate in string
#include<stdio.h>
int main()
{
	char ch[100],len=0;
	printf("Enter string:- ");
	gets(ch);
	for(int a=0; ch[a]!='\0'; a++)
	{
		if(ch[a]>=65 && ch[a]<=90)
		len++;
	}
	printf("Lenght of the string is:- %d",len);
}
