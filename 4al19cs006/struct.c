#include<stdio.h>
struct student
{
	int usn;
	char name[20];
};
int main()
{
	struct student s1,s2;
	printf("Enter the name of the student >> ");
	scanf("%s",s1.name);
	printf("Enter the usn of the student >> ");
	scanf("%d",&s1.usn);
	printf("Enter the name of the student >> ");
	scanf("%s",s2.name);
	printf("Enter the usn of the student >> ");
	scanf("%d",&s2.usn);
	printf("The details of student 1 is %s %d \n",s1.name,s1.usn);
	printf("The details of student 2 is %s %d \n",s2.name,s2.usn);
	return 0;
}

