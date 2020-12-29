#include<stdio.h>
void main()
{
	int b[100], *p;
	p = &b;
	printf("The initial value of ptr is %u\n",p);
	p++;
	printf("The incremented value of ptr is %u\n",p);
}
