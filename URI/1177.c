#include<stdio.h>

int main()
{
	int number, i;
	int j = 0;
	int N[1000];

	scanf("%d", &number);
	
	for (i = 0; i < 1000; i++){
		printf("N[%d] = %d\n", i, j);
		j++;
	
		if (j == number){
			j = 0;
		}
	}

	return 0;
}
