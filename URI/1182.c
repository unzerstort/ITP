#include<stdio.h>
#define n 12

int main()
{
	int column, rows, columns;
	double sum = 0.0;
	char operation;
	double matrix[n][n];

	scanf("%d", &column);
	scanf(" %c", &operation);

	for (rows = 0; rows < n; rows++){
		for (columns = 0; columns < n; columns++){
			scanf("%lf", &matrix[rows][columns]);
		}
	}

	for (rows = 0; rows < n; rows++){
		sum = sum + matrix[rows][column];
	}

	if (operation == 'M'){
		printf("%.1lf\n", sum/n);

	} else if (operation == 'S'){
		printf("%.1lf\n", sum);
	}

	return 0;
}
