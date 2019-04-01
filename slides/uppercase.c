#include<stdio.h>

int main()
{
	int choice = 1, i;
	char word[20];
		
	while (choice != 2){
		printf("Insert a word (maximum of 20 characters).\n");
		scanf("%s", &word);
		
		for (i = 0; word[i] != '\0'; i++){
			if(word[i] >= 'a' && word[i] <= 'z'){
				word[i] = word[i] - 32;
			}
		}

		printf("Uppercase word: %s\n", word);

		printf("Do you want to insert another word? (1. yes 2. no)\n");
		scanf("%d", &choice);
	}	

	return 0;
}
