// login program using gmail and password;
#include<stdio.h>
#include<string.h>
int main()
{
	char ch[100]="shantanu@gmail.com", p[100]="shantanu",ch1[100], p1[100];
	printf("Enter the gmail id:- \n");
	gets(ch1);
	printf("Enter password:- \n");
	gets(p1);
	if(strcmp(ch,ch1)==0 && strcmp(p,p1)==0)
	{
		printf("Login successfully");
	}else{
		printf("Incorrect id or password");
	}
}
