#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[5]={1,3,5,7,9};
	int *ip=&arr[0];
	printf("%d\n",*ip);
	ip++;
	printf("%d\n",*ip);
	++*ip;
	printf("%d\n",*ip);
	return 0;
}
