#include<stdio.h>

int decrescentOrder(int n);

int main()
{
	int lastnumber;

	printf("Enter a natural number: ");
	scanf("%d", &lastnumber);
	printf("All natural numbers from %d to 0 are: ", lastnumber);
	decrescentOrder(lastnumber);
	printf("\n");
}

int decrescentOrder(int n)
{
	if (n >= 0){
		printf("%d ", n);
		decrescentOrder(n-1);

	}else{
		return 0;
	}
}
