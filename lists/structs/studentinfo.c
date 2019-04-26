#include<stdio.h>
#include<stdlib.h>

struct student
{
	char fullName[50];
	char courseName[50];
	char enrollment[10];
};

int main()
{
	int i;
	struct student students[i];
	
	for (i = 0; i < 5; i++)
	{
		printf("Name: ");
		scanf("%s", &students[i].fullName);
		printf("Enrollment: ");
		scanf("%s", &students[i].enrollment);
		printf("Undergraduate course: ");
		scanf("%s", &students[i].courseName);
	}

	system("clear");
	
	for (i = 0; i < 5; i++)
	{
		printf("Name: %s\n", students[i].fullName);
		printf("Enrollment: %s\n", students[i].enrollment);
		printf("Undergraduate course: %s\n", students[i].courseName);
	}

	return 0;
}
