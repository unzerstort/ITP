#include<stdio.h>

int main(void){
	int petals, i;
	char letter;

	scanf("%d %c", &petals, &letter);
	
	if(petals%2 == 0 && letter == 'B'){
		printf("Love me not!\n");
	
	} else if(petals%2 == 0 && letter == 'M'){
		printf("Love me!\n");
	
	} else if(petals%2 != 0 && letter == 'B'){
		printf("Love me!\n");
		
	} else if(petals%2 != 0 && letter == 'M'){
		printf("Love me not!\n");
	}

	return 0;
}

