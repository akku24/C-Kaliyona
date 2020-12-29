#include<stdio.h>
int n;
void fibo();
int main()
{
	printf("Enter the number of elements >> ");
	scanf("%d",&n);
	printf("")



void fibo()
{
	int n1 = 0, n2 = 1, n3;
	if(n>0)
	{
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
		printf("%d",n3);
		fibo(n-1);
	}
}
