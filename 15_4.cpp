#include<stdio.h>
int main()
{
	FILE *p;
	p=fopen("w.txt","w");
	fprintf(p,"hello world");
	fclose(p);
	return 0;
}
