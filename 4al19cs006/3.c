#include<stdio.h>
int a,b,temp;
void main()
{
	printf("Enter two numbers to swap >> ");
	scanf("%d%d",&a,&b);
	printf("Value before swapping is >> %d %d\n",a,b);
	temp = a;
	a = b;
	b = temp;
	printf("Value after swapping is >> %d %d\n",a,b);
}
