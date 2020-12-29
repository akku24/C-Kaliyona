#include<stdio.h>
int n,i;
void prime();
void main()
{
	printf("Enter the number to find prime or not >> ");
	scanf("%d",&n);
	for(int j = 2; j<=n; j++)
	{
		prime(j,j-1);
	}
}
void prime(int n,int i)
{
	if(i == 1 || i == 0)
	{
		printf("%d is prime number ...\n",n);
	}
	else
	{
		if(n % i == 0)
		{
			printf("%d is not a prime number ....\n",n);
		}
		else
		{
			prime(n, i-1);
		}
	}
}
