#include<stdio.h>

int cubicsum(int n);

int main()
{
	int number, i;

	printf("Enter the first n numbers of the sequence: ");
	scanf("%d", &number);
	printf("S = ");
	
	for (i = 1; i <= number; i++){
		printf("%d^3", i);
		if (i < number)
			printf(" + ");
		else if (i == number)
			printf("\n");
	}

	printf("The sum of the first %d cubes is: %d.\n", number, cubicsum(number));

	return 0;
}

int cubicsum(int n)
{
	int i;

	if (n != 0)
		return n*n*n + cubicsum(n-1);
	else
		return 0;
}

