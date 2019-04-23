#include<stdio.h>
#include<stdlib.h>

void invert(int array[], int left, int right);

int main()
{
	int elements, i;
	int *array;

	printf("Enter the number of elements inside the array: ");
	scanf("%d", &elements);

	array = (int*) calloc(elements, sizeof(int));

	printf("Enter the respective elements: ");

	for (i = 0; i < elements; i++)
		scanf("%d", &array[i]);
		
	printf("Array after inverting its elements' order: ");
	
	invert(array, 0, elements-1);
	for (i = 0; i < elements; i++)
		printf("%d ", array[i]);

	printf("\n");
	return 0;
}
	
void invert(int array[], int left, int right)
{
	int aux;

	if (left >= right)
		return;
	
	aux = array[left];
	array[left] = array[right];
	array[right] = aux;
	invert(array, left + 1, right-1);
}
