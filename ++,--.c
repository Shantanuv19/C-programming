//pri incriment, decriment & post incriment, decriment
#include<stdio.h>
int main()
{
	int a=2, b=2, c, x;
	
	c=a++*--b;
	printf("\t1st PROGRAM:- \n");
	printf("value of a:- %d\n",a);
	printf("value of b:- %d\n",b);
	printf("value of c:- %d\n",c);
	
	printf("\t2nd PROGRAM:- \n");
	x=a++ + ++a;
	printf("value of c:- %d\n",x);
}
