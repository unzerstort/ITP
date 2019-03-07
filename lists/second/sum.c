#include<stdio.h>

int main(void){
	int a, b, c, sum;
	
	scanf("%d %d %d", &a, &b, &c);
	sum = a + b;

	if( c > a + b){
		printf("a + b = %d\n", sum);
		printf("the sum of a and b is less than c.\n");
	
	} else {
		printf("the sum of a and b is greater than or equal to c.\n");
	}

	return 0;
}
