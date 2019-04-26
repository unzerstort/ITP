#include<stdio.h>

struct name
{
	char firstName[20];
	char lastName[20];
};

struct age
{
	int ageof;
};

struct address
{
	char street[40];
	int number; 
};

int main()
{
	struct name n;
	struct age ag;
	struct address ad;

	printf("Name: ");
	scanf("%s %s", &n.firstName, &n.lastName);
	printf("Age: ");
	scanf("%d", &ag.ageof);
	printf("Address: ");
	scanf("%s %d", &ad.street, &ad.number);

	return 0;
}
