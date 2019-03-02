#include<stdio.h>

// a program that receives 3 grades (0-10) from a student and verifies their situation on the semester. 

int main(void){
	float nota1, nota2, nota3, media;

	printf("Insira 3 notas: ");
	scanf("%f %f %f", &nota1, &nota2, &nota3);
	media = (nota1 + nota2 + nota3)/3;

	if(media >= 7.0){
		printf("Media: %.1f\n", media);
		printf("Aprovado!\n");

	} else if(media >= 5.0 && nota1 >= 3.0 && nota2 >= 3.0 && nota3 >= 3.0){
		printf("Media: %.1f\n", media);
		printf("Aprovado!\n");

	} else if(media < 3.0){
		printf("Media: %.1f\n", media);
		printf("Reprovado!\n");

	} else if(media >= 3.0 && media < 5.0){
		printf("Media: %.1f\n", media);
		printf("Reposicao!\n");
	}

	return 0;
}
