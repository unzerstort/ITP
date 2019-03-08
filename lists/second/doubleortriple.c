#include<stdio.h>

int main(void){
	int number, doub, triple;
	
	scanf("%d", &number);

	if(number >= 0){
		doub = number*2;
		printf("%d\n", doub);
	} else{
		triple = number*3;
		printf("%d\n", triple);
	}

	return 0;
}
