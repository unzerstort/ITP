#include<stdio.h>
#define n 12

int main()
{
	int rows, columns;
	int count = 0;
	char operation;
	double sum = 0.0;
	double matrix[n][n];

	scanf("%c", &operation);

	for (rows = 0; rows < n; rows++){
		for (columns = 0; columns < n; columns++){
			scanf(" %lf", &matrix[rows][columns]);

			if (columns > (n-1) - rows ){
				sum += matrix[rows][columns];
				count++;
			}
		}
	}

	if (operation == 'M'){
		printf("%.1lf\n", sum/count);

	} else if (operation == 'S'){
		printf("%.1lf\n", sum);
	}

	return 0;
}
