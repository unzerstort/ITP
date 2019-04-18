#include<stdio.h>

int power(int k, int n);

int main()
{
	int base, exponent;
	printf("Enter a base number (positive): ");
	scanf("%d", &base);
	printf("Enter an exponent (positive): ");
	scanf("%d", &exponent);
	printf("%d^%d = %d.\n", base, exponent, power(base, exponent));

	return 0;
}

int power(int k, int n)
{
	if (n != 0)
		return k * power(k, n-1);
	else
		return 1;
}
