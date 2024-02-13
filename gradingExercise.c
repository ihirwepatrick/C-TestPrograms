#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main() {
//    int grade;
char grade;
	printf("Enter your Grade -->")
	scanf("%c", &grade);
	switch (grade) {
		case 'E' :
			printf("Stop studying");
			break;
		
		case 'D' :
			printf("Jya gukora uturimo dusanzwe twamaboko!");
			break;
		
		case 'C' :
			printf("Second seating");
			break;
			
		case 'B' :
			printf("Second seating");
			break;
			
		case 'A':
			printf("Pass");
			break;
			
		default:
			printf("Invalid input");
	}
	return 0;
}
