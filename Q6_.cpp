#include <stdio.h>
int main() {
	int even, odd, reading, temp, digit;
	
	even = 0;
	odd = 0;
    printf("Enter the electricity meter reading: ");
    scanf("%d", &reading);
    
    temp = reading;

	while (temp > 0) {
		digit = temp % 10;
		
		if (temp % 2 == 0) {
			even++;
		}
		else{
			odd++;
		}
		temp /= 10;
	}
	printf("There are %d even numbers %d\n", even);
	printf("There are %d even numbers %d\n", odd);
}
	
