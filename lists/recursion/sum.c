#include<stdio.h>

int sum(int n);

int main()
{
	int number;

	printf("Enter a positive integer: ");
	scanf("%d", &number);
	printf("The sum of all numbers from 1 to %d is %d.\n", number, sum(number));

	return 0;
}

int sum(int n)
{
	if (n == 0)
		return 0;
	else
		return n + sum(n-1);
}
