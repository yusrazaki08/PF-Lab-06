#include <stdio.h>
int main () {
	int ticket, temp, digit, result = 0;
	
	printf("Enter Ticket number: ");
	scanf("%d", &ticket);
	
	temp = ticket;
	
	while (temp > 0) {
		digit = temp % 10;
		result = result * 10 + digit;
		temp = temp / 10;
	}
	printf("Reversed ticket number: %d\n", result);
}
