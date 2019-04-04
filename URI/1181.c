#include<stdio.h>
#define n 12 

int main()
{
	int row, rows, columns;
	double sum = 0.0;	
	char operation;
	double matrix[n][n];

	scanf("%d", &row);
	scanf(" %c", &operation);

	for (rows = 0; rows < n; rows++){
		for (columns = 0; columns < n; columns++){
			scanf("%lf", &matrix[rows][columns]);
		}
	}

	for (columns = 0; columns < n; columns++){
		sum = sum + matrix[row][columns];
	}

	if (operation == 'S'){
		printf("%.1lf\n", sum);

	} else if (operation == 'M'){	
		printf("%.1lf\n", sum/n);
	}

	return 0;
}
