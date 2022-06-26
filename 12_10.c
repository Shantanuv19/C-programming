// count vowel and consonents in string
#include<stdio.h>
#include<string.h>
int main()
{
	char ch[100];
	int vowel=0, con=0,len;
	printf("Enter the string:- ");
	gets(ch);
	len=strlen(ch);
	for(int a=0; a<len; a++)
	{
		if(ch[a]=='a'||ch[a]=='A'||ch[a]=='E'||ch[a]=='e'||ch[a]=='i'||ch[a]=='I'||ch[a]=='o'||ch[a]=='O'||ch[a]=='u'||ch[a]=='U')
		{
			vowel++;
		}else{
			con++;
		}
	}
	printf("No of vowel is:- %d\nNo of consonents is:- %d",vowel,con);
}
