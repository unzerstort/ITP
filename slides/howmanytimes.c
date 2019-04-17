#include<stdio.h>

int howmanytimes(int n, int k);

int main()
{
	int number, digit;
	printf("Enter a natural number: ");
	scanf("%d", &number);
	printf("Which digit you want to verify? ");
	scanf("%d", &digit);
	printf("The digit %d appears %d time(s) in %d.\n", digit, howmanytimes(number, digit), number);

	return 0;
}

int howmanytimes(int n, int k)
{
	if (n < 10){
		if (n == k)
			return 1;
		else
			return 0;
	} else{
		if (n%10 == k)
			return howmanytimes(n/10, k) + 1;
		else
			return howmanytimes(n/10, k) + 0;
	}
}
