#include<stdio.h>

int fibonacci(int n);

int main()
{
	int term;
	
	printf("Enter the desired term from Fibonacci Series: ");
	scanf("%d", &term);
	printf("The term %d of Fibonacci Series is %d.\n", term, fibonacci(term));

	return 0;
}

int fibonacci(int n)
{
	if (n == 0 || n == 1)
		return n;
	else
		return fibonacci(n-1) + fibonacci(n-2);
}
