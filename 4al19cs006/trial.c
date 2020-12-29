#include<stdio.h>
int a,b,c,d;
void greater()
{
	printf("Enter the 3 numbers >> ");
	scanf("%d%d%d",&a,&b,&c);
	d = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
	printf("%d\n",d);
}
void main()
{
//	printf("Enter the 2 numbers >> ");
//	scanf("%d%d",&a,&b);
//	c = (a < b) ? a : b;
//	printf("%d\n",c);
	greater();
}

