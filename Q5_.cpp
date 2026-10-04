#include <stdio.h>

int main() {
    int n, i, numerator, denominator1, denominator2, temp, j, k;
    int result = 1;
    
    printf("Enter the value of n (0-9): ");
    scanf("%d", &n);
    temp = 2 * n;
    numerator = 1;
    denominator1 = 1;
    denominator2 = 1;
    
	for(i = temp; i >= 1; i--) {
	numerator = numerator * i;
	    for (j = n + 1; j >= 1; j--) {
	    denominator1 = denominator1 * j;
	        for (k = n; k >= 1; k--) {
	        denominator2 = denominator2 * k;
	        result = numerator / (denominator1 * denominator2);
	        
	        }
	    }
	}
	
	
	printf("%d", result);
}

