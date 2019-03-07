#include<stdio.h>

int main(void){
	int a, b, c;

	scanf("%d %d", &a, &b);

	if(a == b){
		c = a + b;
		printf("c = %d\n", c);
	
	} else{
		c = a * b;
		printf("c = %d\n", c);
	}

	return 0;
}
