#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a=2;
	int *p=&a;
	*p=4;
	printf("%d",a);
	return 0;
}
