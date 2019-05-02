#include<stdio.h>

typedef struct
{
	char avenue[20];
	int number;
	char nhood[15];
	long int cep;
} Address;

typedef struct
{
	char name[50];
	int regist; 
	Address address;
} Customer;

Customer newCustomer(void);
void printCustomer(Customer);

int main() 
{
	Customer client;
	client = newCustomer();
	printCustomer(client);

	return 0;
}

Customer newCustomer()
{
	Customer customer;

	printf("Enter the customer's data below:\n");

	printf("\tName: ");
	scanf("%[^\n]s", customer.name);

	printf("\tRegistration: ");
	scanf("%d", &customer.regist);

	printf("\tAvenue: ");
	scanf(" %[^\n]s", customer.address.avenue);

	printf("\tNumber: ");
	scanf("%d", &customer.address.number);

	printf("\tNeighbourhood: ");
	scanf(" %[^\n]s", customer.address.nhood);

	printf("\tPostal Code: ");
	scanf("%d", &customer.address.cep);

	return customer;
}

void printCustomer(Customer customer)
{
	printf("Name: %s\n", customer.name);
	printf("Registration: %d\n", customer.regist);
	printf("Avenue: %s\n", customer.address.avenue);
	printf("Number: %d\n", customer.address.number);
	printf("Neighbourhood: %s\n", customer.address.nhood);
	printf("Postal Code: %d\n", customer.address.cep);
}
