#include<stdio.h>
#include<stdlib.h>

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);

int main()
{
	int number1, number2, operation;
	int choice = 1;

	while (choice != 2){
		printf("Choose a mathematical operation.\n");
		printf("1. Addition.\n");
		printf("2. Subtraction.\n");
		printf("3. Multiplication.\n");
		scanf("%d", &operation);
	
		if (operation != 1 && operation != 2 && operation != 3){
			printf("Invalid option. Choose again.");

		} else{

			if (operation == 1){
				printf("Insert both numbers: ");
				scanf("%d %d", &number1, &number2);
				printf("The sum of %d and %d is %d.\n", number1, number2, add(number1, number2));
			
			} else if (operation == 2){
				printf("Insert both numbers: ");
				scanf("%d %d", &number1, &number2);
				printf ("The difference between %d and %d is %d.\n", number1, number2, subtract(number1, number2));

			} else if (operation == 3){	
				printf("Insert both numbers: ");
				scanf("%d %d", &number1, &number2);
				printf ("The product of %d and %d is %d.\n", number1, number2, multiply(number1, number2));
			}
		}

		printf("Do you want to continue? (1. yes 2. no)\n");
		scanf("%d", &choice);
		system("clear");
	}
	
	return 0;
}

int add(int a, int b)
{
	return a + b;
}

int subtract(int a, int b)
{
	return a - b;
}

int multiply(int a, int b)
{
	return a * b;
}
