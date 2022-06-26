// pointer to function
#include<stdio.h>
int fun(int *h, int *w)
{
	int ar;
	ar=*h**w;
	printf("Area of rectengle is:- %d",ar);
}
int main()
{
	int h,w;
	printf("Enter the hight of rectengle:- ");
	scanf("%d",&h);
	printf("Enter the width of rectengle:- ");
	scanf("%d",&w);
	fun(&h,&w);
}
