#include<stdio.h>

typedef struct
{
	char name[30];
	long int cpf;
} Owner;

typedef struct
{
	char model[20];
	int year;
	char plate[10];
	Owner owner;
} Car;

Car newCar(void);
void printCar(Car);

int main()
{
	Car vehicle;
	vehicle = newCar();
	printCar(vehicle);

	return 0;
}

Car newCar()
{
	Car c;
	
	printf("Enter the car's information below:\n");

	printf("\tModel: ");
	scanf("%[^\n]s", c.model);

	printf("\tPlate: ");
	scanf(" %[^\n]s", c.plate);
	
	printf("\tYear: ");
	scanf("%d", &c.year);
	
	printf("\nEnter the car owner's information below:\n");

	printf("\tName: ");
	scanf(" %[^\n]s", c.owner.name);

	printf("\tID: ");
	scanf("%d", &c.owner.cpf);

	return c;
}

void printCar(Car c)
{
	printf("Car information:\n");
	printf("\tModel: %s\n", c.model);
	printf("\tPlate: %s\n", c.plate);
	printf("\tYear: %d\n", c.year);
	printf("\tOwner's name: %s\n", c.owner.name);
	printf("\tOwner's ID: %d\n", c.owner.cpf);
}
