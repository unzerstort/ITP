#include<stdio.h>

int main()
{
	int tests, term, i, j;
	long long int fib[61];
	fib[0] = 0;
	fib[1] = 1;

	scanf("%d", &tests);

	for (i = 2; i <= 60; i++){
		fib[i] = fib[i - 2] + fib[i - 1];
	}

	for (j = 0; j < tests; j++){
		scanf("%d", &term);
		printf("Fib(%d) = %lld\n", term, fib[term]);
	}

	return 0;
}	

