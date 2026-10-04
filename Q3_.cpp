#include <stdio.h>
int main() {
	int totalpresent, totalabsent, attendance1, attendance2, count;
	
    printf("Enter attendance for 15 students (1 for Present, 0 for Absent):\n");
	count = 1;
	for (int i= 1; i <= 15; i++) {
		printf("Student %d", count);
		scanf("%d", &attendance1);
		count = count + 1;
		printf("Student %d", count);
		scanf("%d", &attendance2);
		count = count + 1;
		
		if (attendance1 == 1){
			totalpresent = totalpresent + 1;
		}
		else{
			totalabsent = totalabsent + 1;
		}
		
		if (attendance2 == 1){
			totalpresent = totalpresent + 1;
		}
		else{
			totalabsent = totalabsent + 1;
		}
	}
	printf("Total number of students present: %d\n", totalpresent);
	printf("Total number of students absent: %d\n", totalabsent);
	
}
