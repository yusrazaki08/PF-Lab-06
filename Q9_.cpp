#include <stdio.h>

int main() {
	char word[100];
	int length, i, vowels, consonants;
	char temp, letter;
	
	length = 0;
	vowels = 0;
	consonants = 0;
	
	printf("Enter a word ");
	scanf("%s", word);
	
	
	printf("\nOrignal Word is: %s\n", word);
	
	while (word[length] != '\0') {
		length++;
	}
	
	for (i = 0; i <= length; i++) {
		temp = strcat(temp, word[i]);
	}
	if (temp == word) {
		printf("It is a palindrome");
	}else {
		printf("Not a palindrome");
	}
	
	for (i = 0; i <= length; i++) {
		letter = word[i];
		if (letter == 'a' ||  letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' || letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U') {
			vowels++;
		}else {
			consonants++;
		}
	}
	printf("Number of Vowels: %d\n", vowels);
	printf("Number of Consonants: %d\n", consonants);
}

