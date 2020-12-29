#include<stdio.h>
int i, a[20], n, sum=0, prd = 1;
int main()
{
	printf("Enter the number of elements >> ");
	scanf("%d",&n);
	printf("Enter the Array elements >> ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The array elements are >> ");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
		sum = sum + a[i];
		prd = prd * a[i];
	}
	printf("The Sum of array is >> %d\n",sum);
	printf("The Product of array is >> %d\n",prd);
}

