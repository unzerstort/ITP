#include<stdio.h>

int main(){
	int N[10];
	int i, j, number;

	scanf("%d", &number);
	N[0] = number;

	for (i = 1; i < 10; i++){
		N[i] = N[i - 1] * 2;
	}

	for (j = 0; j < 10; j++){
		printf("N[%d] = %d\n", j, N[j]);
	}
	
	return 0;
}	
	       	
