#include<stdio.h>

struct Time
{
	int hour, minute, second;
};

struct Date
{
	int day, month, year;
};

struct appointment
{	
	struct Time time;
	struct Date date;
	char description[100];
};

int main()
{
	struct appointment a;
	char colon[5];
	char dot[5];
	printf("Date: ");
	scanf("%d%c%d%c%d", &a.date.day, &dot, &a.date.month, &dot, &a.date.year);
	printf("Time: ");
	scanf("%d%c%d%c%d", &a.time.hour, &colon, &a.time.minute, &colon, &a.time.second);
	printf("Description: ");
	scanf("%s", &a.description);

	return 0;
}
