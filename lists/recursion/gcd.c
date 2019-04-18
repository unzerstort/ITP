#include<stdio.h>

int gcd(int n1, int n2);

int main()
{
	int number1, number2;
	printf("Enter two integers: ");
	scanf("%d %d", &number1, &number2);
	printf("gcd(%d, %d) = %d.\n", number1, number2, gcd(number1, number2));
	return 0;
}

int gcd(int n1, int n2)
{
	if (n2 == 0)
		return n1;
	else
		return gcd(n2, n1%n2);
}
