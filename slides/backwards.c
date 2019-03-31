#include<stdio.h>

int main ()
{
	int i;
	int sequence[100];

	for (i = 0; i < 100; i++){
		sequence[i] = i;
	}

	for (i = 99; i >= 0; i--){
		printf("%d\n", sequence[i]);
	}

	return 0;
}
