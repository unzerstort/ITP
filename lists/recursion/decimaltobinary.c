#include<stdio.h>

int binary(int decimal);

int main()
{
	int decimal;
	
	printf("Enter a decimal number: ");
	scanf("%d", &decimal);
	printf("%d converted to binary is %d.\n", decimal, binary(decimal));

	return 0;
}

int binary(int decimal)
{
	if (decimal == 0)
		return 0;
	else
		return decimal%2 + 10 * binary(decimal/2);
}
