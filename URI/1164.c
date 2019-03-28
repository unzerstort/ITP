#include<stdio.h>

int main()
{
	int tests, number, i, j, sum = 0;

	scanf("%d", &tests);
	
	for (i = 1; i <= tests; i++){
		scanf("%d", &number);

		for (j = 1; j < number; j++){ 
			if (number%j == 0){
				sum += j;
			}
		}

		if (sum == number){
			printf("%d eh perfeito\n", number);

		} else{
			printf("%d nao eh perfeito\n", number);
		}

		sum = 0;
	}
	
	return 0;
}

