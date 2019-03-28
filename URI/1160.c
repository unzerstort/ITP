#include<stdio.h>

int main()
{
	int tests, popA, popB, i, years = 0;
	float growthA, growthB;

	scanf("%d", &tests);

	for (i = 1; i <= tests; i++){
		scanf("%d %d %f %f", &popA, &popB, &growthA, &growthB);
		while (popA <= popB && years <= 100){
			popA = popA + (popA * (growthA/100.0));
			popB = popB + (popB * (growthB/100.0));
			years++;
		}

		if (years > 100){
			printf("Mais de 1 seculo.\n");
		
		} else{
			printf("%d anos.\n", years);
		}

		years = 0;
	}

	return 0;
}
