#include<stdio.h>
#include<string.h>

int main(void){
	int years;
	char name[20], sex[6],  mstatus[15];

	printf("Insert your name: ");
	scanf("%s", name);	
	printf("Insert your sex: ");
	scanf("%s", sex);
	printf("Insert marital status: ");
	scanf("%s", mstatus);

	if(strcmp(mstatus, "married") == 0){
		printf("How long have you been married? ");
		scanf("%d", &years);
		
	}

	return 0;
}	
