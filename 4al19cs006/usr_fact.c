#include<stdio.h>
int n,fact=1;
int factorial(int n)
{
	if(n == 0 || n==1)
	{
		return 1;
	}
	else
	{
		fact = n * factorial(n-1);
		return fact;
	}
}
void main()
{
	printf("Enter the number to find the factorail of it >> ");
	scanf("%d",&n);
	factorial(n);
	printf("Factorial of %d is >> %d\n",n,fact);

}
