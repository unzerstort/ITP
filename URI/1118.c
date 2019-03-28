#include<stdio.h>

int main()
{
	int choice = 1;
	int validgrade = 0;
	
	while (choice != 2){		
		float grades, sum;

		while (validgrade < 2){
			scanf("%f", &grades);

			if (grades < 0 || grades > 10){
				printf("nota invalida\n");
			} else{
				validgrade++;
				sum += grades;
			}
		}
		
		printf("media = %.2f\n", sum/2);
		printf("novo calculo (1-sim 2-nao)\n");
		scanf("%d", &choice);

		while (choice != 1 && choice != 2){
			printf("novo calculo (1-sim 2-nao)\n");
			scanf("%d", &choice);
		}

		validgrade = 0;
		sum = 0;
	}
	
	return 0;
}
