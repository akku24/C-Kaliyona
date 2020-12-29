#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define size 10
void main()
{
	char name[size], *i;
	printf("Enter your name >> ");
	gets(name);
	i = name;
	printf("Now printing your name >>");
	while(*i != '\0')
	{
		printf("%c\n",*i);
		i++;
	}
}
