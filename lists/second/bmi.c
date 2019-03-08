#include<stdio.h>

// body mass index calculator

int main(void){
	double weight, height, bmi;

	printf("Insert your height: ");
	scanf("%lf", &height);
	printf("Insert your weight: ");
	scanf("%lf", &weight);

	bmi = weight/(height*height);

	if(bmi > 30){
		printf("You're obese!\n");
	
	} else if (bmi >= 25 && bmi <= 30){
		printf("You're overweight!\n");

	} else if (bmi >= 18.5 && bmi < 25){
		printf("You're on your normal weight!\n");

	} else if (bmi < 18.5){
		printf("You're underweight!\n");
	}

	return 0;
}
