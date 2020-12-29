#include<stdio.h>
int n1, n2, sum, *p1, *p2, *p3;
void main()
{
	printf("Enter the 2 numbers to be added >> ");
	scanf("%d%d",&n1,&n2);
	p1 = &n1;
	p2 = &n2;
	p3 = &sum;
	*p3 = *p1 + *p2;
//	sum = *p1+*p2;
	printf("The sum of 2 numbers is >> %d\n", sum);
}

