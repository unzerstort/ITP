#include<stdio.h>

typedef struct
{
	int day, month, year;
}date;

date scanDate();
void printDate(date d);

int main()
{
	date today;
	today = scanDate();
	printDate(today);
	
	return 0;
}

date scanDate()
{
	date d;

	printf("Enter the day: ");
	scanf("%02d", &d.day);
	printf("Enter the month: ");
	scanf("%02d", &d.month);
	printf("Enter the year: ");
	scanf("%04d", &d.year);

	return d;
}

void printDate(date d)
{
	printf("The informed date is %02d/%02d/%04d.\n", d.day, d.month, d.year);
}
