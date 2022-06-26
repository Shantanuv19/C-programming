// check strin pelidrome or not
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
		if(ch[a]!=ch1[a])
		{
			printf("Not pelidrome");
			break;
		}else if(a==len-1){
			printf("pelidrome");
		}
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
