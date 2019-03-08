#include<stdio.h>
#include<string.h>

int main(void)
{
	char sex[6];
	double height, idealweight;

	printf("Insert your height: ");
	scanf("%lf", &height);
	printf("Insert your sex: "); 
	scanf("%s", sex);

	if (strcmp(sex, "female") == 0) {
		idealweight = (62.1 * height) - 44.7;
	       	printf("Your ideal weight is %.2lf.\n", idealweight);	
	
	} else if (strcmp(sex, "male") == 0) {
		idealweight = (72.7 * height) - 58;
	       	printf("Your ideal weight is %.2lf.\n", idealweight);
	}
	
	return 0;
}
