#include <stdio.h>

int main() {
	char word[100];
	char reversed[100];
	int length, i, vowels, consonants, flag;
	char temp, letter;
	
	length = 0;
	vowels = 0;
	consonants = 0;
	flag = 0;
	
	printf("Enter a word ");
	scanf("%s", word);
	
	
	printf("\nOrignal Word is: %s\n", word);
	
	while (word[length] != '\0') {
		length++;
	}
	printf("Length of the word: %d\n", length);
	
	
	for (i = 0; i <= length; i++) {
		reversed[i] = word[length - 1 - i];
	}
	reversed[length] = '\0';
	printf("Reversed word: %s\n", reversed);
	
	for (int i = 0; i < length; i++) {
        if (word[i] != reversed[i]) {
        	flag = 1;
            break;
        }
    }
    if (flag == 0) {
    	printf("It is a Palindrome\n");
    }else {
    	printf("Not a palindrome\n");
	}   	
    
	for (i = 0; i <= length; i++) {
		letter = word[i];
		if ((letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z')) {
		    if (letter == 'a' ||  letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' || letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U') {
		    	vowels++;
			}else {
				consonants++;
			}
		}
	}
	printf("Number of Vowels: %d\n", vowels);
	printf("Number of Consonants: %d\n", consonants);
}
	printf("Number of Vowels: %d\n", vowels);
	printf("Number of Consonants: %d\n", consonants);
}

