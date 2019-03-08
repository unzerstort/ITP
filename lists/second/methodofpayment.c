#include<stdio.h>

int main(void){
	int payment;
	double price, discount, interestrate;

	printf("Price: ");
	scanf("%lf", &price);
	printf("Payment method:\n");
	printf("1. In cash or check, receives 10%% discount.\n");
	printf("2. In cash on credit card, receives 15%% discount.\n");
	printf("3. In 2 installments, normal price without interest rate.\n");
	printf("4. In 2 installments, normal price with interest rate of 10%%.\n");
	scanf("%d", &payment);

	if (payment == 1){
		discount = price - (price*0.10);
		printf("R$ %.2lf in cash with 10%% discount.\n", discount);

	} else if (payment == 2){
		discount = price - (price*0.15);
		printf("R$ %.2lf in cash on credit card with 15%% discount.\n", discount);
	
	} else if (payment == 3){
		price = price/2;
		printf("R$ %.2lf in 2 installments without interest rate\n.", price);
	
	} else if (payment == 4){
		interestrate = price + (price*0.10);
		printf("R$ %.2lf in 2 installments with an interest rate of 10%%\n.", interestrate);
	}

	return 0;
}
