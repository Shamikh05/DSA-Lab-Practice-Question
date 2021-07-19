#include<stdio.h>
#include<stdlib.h>
int main()
{
	char str[100];
	int v=0,c=0;
	char *p;
	p=str;
	gets(str);
	while(*p != '\0')
	{
		if(*p=='A' ||*p=='E' ||*p=='I' ||*p=='O' ||*p=='U' ||*p=='a' ||*p=='e' ||*p=='i' ||*p=='o' ||*p=='u')
		{
			v++;
		}
		else
		{
			c++;
		}
		p++;
	}
	printf("No. of vowels are : %d\n",v);
	printf("No. of consonants are : %d",c);
	return 0;
}
