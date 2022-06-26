// find area of circle using function
#include<stdio.h>
int cir(int r)
{
	printf("Area of circe is:- %f",3.14*r*r);
}
int main()
{
	int r;
	printf("Enter the radious:- ");
	scanf("%d",&r);
	cir(r);
}
