#include<stdio.h>
#include<stdlib.h>

int main(void){
	int student;
	float grade1, grade2, grade3, exmedia, avgscore;

	printf("Identification number: ");
	scanf("%d", &student);
	printf("Grades: ");
	scanf("%f %f %f", &grade1, &grade2, &grade3);
	system("clear");

	exmedia = (grade1 + grade2 + grade3)/3;
	avgscore = (grade1 + (grade2*2) + (grade3*3) + exmedia)/7; 
	
	printf("Identification number: %d\n", student);
	printf("Grades: %.1f, %.1f, %.1f\n", grade1, grade2, grade3);
	printf("Exercise media: %.1f \n", exmedia);
	printf("Average score: %.1f\n", avgscore);
	
	if (avgscore >= 9){
		printf("Concept A\n");
	
	} else if (avgscore >= 7.5 && avgscore < 9){
		printf("Concept B\n");

	} else if (avgscore >= 6 && avgscore < 7.5){
		printf("Concept C\n");
	
	} else if (avgscore >= 4 && avgscore < 6){
		printf("Concept D\n");

	} else if (avgscore < 4){
		printf("Concept E\n");
	}

	if (avgscore >= 6){
		printf("Approved! :D\n");
	} else {
		printf("Failed! :(\n");
	}
	return 0;
}
