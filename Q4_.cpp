#include <stdio.h>
int main() {
	int code, temp, digit, reversed;
	
	printf("Enter Library book code");
	scanf("%d", &code);
	temp = code;
	reversed = 0;
	while (temp > 0) {
		digit = temp % 10;
		reversed = reversed * 10 + digit;
		temp = temp / 10;
	}
	
	if (code == reversed) {
		printf("The code is a Palindrome (Valid Book Code).\n");
    } else {
        printf("The code %d is NOT a Palindrome (Invalid Book Code).\n");
    }
}
