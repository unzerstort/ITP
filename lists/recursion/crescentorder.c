#include<stdio.h>

int crescentOrder(int n);

int main()
{
	int lastnumber;

	printf("Enter a natural number: ");
	scanf("%d", &lastnumber);
	printf("All natural numbers from 0 to %d are: ", lastnumber);
	crescentOrder(lastnumber);
	printf("\n");
}

int crescentOrder(int n)
{
	if (n >= 0){
		crescentOrder(n-1);
		printf("%d ", n);
	
	} else
		return 0;
}
