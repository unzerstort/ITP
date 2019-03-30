#include<stdio.h>

int main()
{
	int numbers[20];
	int i, j, swapper;
	int position = 19;

	for (i = 0; i < 20; i++){
		scanf("%d", &numbers[i]);
	}

	for (j = 0; j < 10; j++){
		swapper = numbers[j];
		numbers[j] = numbers[position];
		numbers[position] = swapper;
		position--;
	}

	for (i = 0; i < 20; i++){
		printf("N[%d] = %d\n", i, numbers[i]);
	}

	return 0;
}
