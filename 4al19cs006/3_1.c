#include<stdio.h>
int a, b;
void main()
{
	printf("Enter the numbers to swap >> ");
	scanf("%d%d",&a,&b);
	printf("Numbers before swapping is >> %d %d\n",a,b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("Numbers after swapping is >> %d %d\n",a,b);
}
