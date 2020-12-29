#include<stdio.h>
#include<stdlib.h>
int i, a[20], n, ele, flag, loc;
int main()
{
	printf("Enter the number of elements >> ");
	scanf("%d",&n);
	printf("Enter the Array elements >> ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
//	printf("The array elements are >> ");
//	for(i=0;i<n;i++)
//	{
//		printf("%d\n",a[i]);
//		sum = sum + a[i];
//		prd = prd * a[i];
//	}
//	printf("The Sum of array is >> %d\n",sum);
//	printf("The Product of array is >> %d\n",prd);
	printf("Enter the elements to be searched >> ");
	scanf("%d",&ele);
	for(i=0;i<n;i++)
	{
		if(a[i]==ele)
		{
			loc = i;
			flag = 1;
		}
	}
	if(flag == 1)
	{
		printf("Element found at %d position\n",loc);
	}
	else
	{
		printf("Element not found ..\n");
		exit(0);
	}

}
