#include<stdio.h>
#include<stdlib.h>
int arrsum(int *ptr)
{
	int sum=0;
	sum=*ptr+(*++ptr);
	return sum;
}
int main()
{
	int s;
	int a[2]={2,4};
	s=arrsum(&a[0]);
	printf("\n%d",s);
	return 0;
}
