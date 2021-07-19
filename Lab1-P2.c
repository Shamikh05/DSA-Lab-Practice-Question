#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a=2;
	int *p1=&a;
	float b=3.2;
	float *p2=&b;
	double c=458.748;
	double *p3=&c;
	printf("%d\n",*p1);
	printf("%f\n",*p2);
	printf("%l\n",*p3);
	printf("%db\n",*p3);
	return 0;
}
