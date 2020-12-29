#include<stdio.h>
char a;
int b;
int main()
{
	printf("Enter character >> ");
	scanf("%c",&a);
	b = (int)a;
	printf("The ASCII Value of the given character is >> %d\n",b);
}
