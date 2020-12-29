#include<stdio.h>
void main()
{
	int a = 10, *ptr;
	ptr = &a;
	printf("a = %d\n",a);
	printf("&a = %p\n",&a);
	printf("ptr = %p\n",ptr);
	printf("*ptr = %d\n",*ptr);
	printf("&ptr = %p\n",&ptr);
	printf("&*ptr = %d\n",&*ptr);
}
