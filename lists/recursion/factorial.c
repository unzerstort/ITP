#include<stdio.h>

int factorial(int n);

int main()
{
	int number;
	printf("Enter a positive integer: ");
	scanf("%d", &number);
	printf("%d! = %d.\n", number, factorial(number));
	return 0;
}

int factorial(int n)
{
	if (n > 1)
		return n*factorial(n-1);
	else
		return 1;
}
