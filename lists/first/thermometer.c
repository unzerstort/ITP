#include<stdio.h>

// emergencial solution for a broken thermometer which marks 10 degrees above the real temperature. It also shows the temperature conversion from Celsius to Fahrenheit/Kelvin.

int main(void){
	float kelvin, celsius, fahrenheit, tempcelsius;

	printf("Insert the temperature in degrees Celsius: ");
	scanf("%f", &tempcelsius);

	celsius = tempcelsius - 10;
	kelvin = celsius + 273;
	fahrenheit = (celsius/100) * 180 + 32;

	printf("Celsius: %.1f\n", celsius);	
	printf("Kelvin: %.1f\n", kelvin);
	printf("Fahrenheit: %.1f\n", fahrenheit);
	
	return 0;
}
