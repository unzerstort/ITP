#include<stdio.h>

int main(void){
	int number, sum;

	scanf("%d", &number);

	if(number%2 == 0){
		sum = number + 5;
		printf("%d\n", sum);
	} else{
		sum = number + 8;
		printf("%d\n", sum);
	}
	return 0;
}
