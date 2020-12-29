#include<stdio.h>
int a,b,sum;
void addNumbers(int a, int b)
{
//	printf("Enter two numbers to be added >> ");
//	scanf("%d%d", &a,&b);
//	printf("Sum of two numbers is >> %d\n", a+b);
	sum = a+b;
}
void main()
{
	printf("Enter two numbers to be added >> ");
	scanf("%d%d", &a,&b);
	addNumbers(a,b);
	printf("Sum of two numbers is >> %d\n", sum);

}
