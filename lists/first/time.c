#include<stdio.h>

// a program that reads the distance (kilometers) between two cars moving in different speeds and calculates the time (minutes)  it takes to one of them reach the other.

int main(void){
	int distance;
	
	scanf("%d", &distance);
	printf("%d minutes\n", 2*distance);

	return 0;
}
