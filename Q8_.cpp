#include <stdio.h>

int main() {
	int arr[8];
	int num, i, largest, smallest, temp, index, insert_num, insert_index, delete_index, size;
	
	size = 8;
	
	for(i=0; i < 8; i++) {
	    printf("Enter number %d\n", i);
	    scanf("%d", &arr[i]);
	}
	
	for(i = 0; i < 8; i++) {
		printf("%d", arr[i]);
	}
	
	largest = 0;
	smallest = 0;
	for (i = 0; i < size; i++) {
		if (arr[i] > largest) {
			largest = arr[i];
		}
		if (arr[i] < smallest) {
			smallest = arr[i];
		}
	}
	printf("\nLargest element: %d", largest);
	printf("\nSmallest element: %d", smallest);
	
	
	index = -1;
	printf("\nEnter a number to search: ");
	scanf("%d", &temp);
	for (i = 0; i < size; i++) {
		if (arr[i] == temp) {
			index = i;
			break;
		}
	}
	if (index != -1) {
		printf("\nNumber %d found at index: %d\n",temp, index);
	}else{
		printf("Number %d not Found!", temp);
	}
	

	printf("\nEnter a new number to insert: ");
    scanf("%d", &insert_num);
    printf("Enter the index to insert it at (0 to 8): ");
    scanf("%d", &insert_index);
    
    if (insert_index < 0 || insert_index > size) {
    	printf("Invalid index for insertion!\n");
    } else {
    	for(i = size; i > insert_index; i--) {
    		arr[i] = arr [i - 1];
		}
    	arr[insert_index] = insert_num;
    	size++;
	}
	
	
	
	printf("\nEnter the index to delete an element from (0 to 7): ");
    scanf("%d", &delete_index);
    
    if(delete_index < 0 || delete_index > 7) {
        printf("Invalid index for deletion!\n");
    }else{
    	for(i = delete_index; i < size - 1; i++) {
    		arr[i] = arr[i + 1];
		}
		size--;
	}
	
	
	for(i = 0; i < size; i++) {
		printf("%d", arr[i]);
	}
}
