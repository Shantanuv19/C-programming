// reverse string
#include<stdio.h>
#include<string.h>
int fun(char ch[], int len)
{
	char ch1[100];
	int x=0;
	for(int a=len-1; a>=0; a--)
	{
		ch1[x]=ch[a];
		x++;
	}
	for(int a=0; a<len; a++)
	{
		printf("%c",ch1[a]);
	}
}
int main()
{
	char ch[100], len;
	gets(ch);
	len=strlen(ch);
	//printf("%d",len);
	fun(ch,len);
}
