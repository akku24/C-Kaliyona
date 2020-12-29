#include<stdio.h>
int i,n;
struct student
{
	int usn;
	char name[20];
};
void main()
{
	struct student s[100];
	printf("Enter the number of students deatils to be entered >> ");
	scanf("%d",&n);
	for(i = 0;i<n; i++)
	{
		printf("Enter the usn of the student >> ");
		scanf("%d",&s[i].usn);
		printf("Enter the name of the student >> ");
		scanf("%s",s[i].name);
	}
	for(i=0;i<n;i++)
	{
		printf("The details of students is >> \nUSN:- %d\nNAME:-%s\n",s[i].usn,s[i].name);
	}
}
