#include<stdio.h>

int multiply(int a, int b);

int main()
{
	int number1, number2;

	printf("Enter two integer numbers: ");
	scanf("%d %d", &number1, &number2);
	printf("%d x %d = %d.\n", number1, number2, multiply(number1, number2));

	return 0;
}

int multiply(int a, int b)
{
	if (b == 0)
		return 0;

	if (b > 0)
		return a + multiply(a, b-1);

	if (b < 0)
		return -multiply(a, -b);
}
