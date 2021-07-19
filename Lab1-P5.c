#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	int *p1=&a,*p2=&b;
	if(*p1>*p2)
	{
		printf("%d",*p1);
	}
	else
	{
		printf("%d",*p2);
	}
	return 0;
}
