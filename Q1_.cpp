#include <stdio.h>
int main () {
	int sum = 0;
	int pin, temp, digit;
	
	printf("Enter a 4-digit PIN: ");
	scanf("%d", &pin);
	
	temp = pin;
	
	while (temp > 0) {
		digit = temp % 10;
		sum = sum + digit;
		temp = temp / 10;
	}
	if(sum > 10){
		printf("Strong PIN");
	}
	else{
		printf("Weak PIN");
	}
}

