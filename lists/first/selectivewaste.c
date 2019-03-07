#include<stdio.h>

int main(void){
	int i, glass = 0, plastic = 0, paper = 0, organic = 0, metal = 0, electronic = 0;
	char objects;

	for(i = 1; i <= 10; i++){
		scanf("%c ", &objects);

		switch(objects){
			case 'G':
			glass++;
			break;
			
			case 'L':
			plastic++;
			break;

			case 'P':
			paper++;
			break;

			case 'O':
			organic++;
			break;

			case 'M':
			metal++;
			break;
			
			case 'E':
			electronic++;
			break;

			default:
			printf("wrong choice");
		}
	}

	printf("Glass: %d\n", glass);
	printf("Plastic: %d\n", plastic);
	printf("Paper: %d\n", paper);
	printf("Organic: %d\n", organic);
	printf("Metal: %d\n", metal);
	printf("Electronic: %d\n", electronic);

	return 0;
}






