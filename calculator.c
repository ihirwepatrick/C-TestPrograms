#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>
#include<string.h>

int main() {
	int num1, num2, result;
	char operation;
	printf("Enter first number: ");
	scanf("%d", &num1);
	printf("Enter second number: ");
	scanf("%d", &num2);
	printf("Select operation (+ , - , / , *) >>> ");
	scanf("%c \n", &operation);
	
	switch (operation) {
		case '+':
			result = num1 + num2;
			printf("%d", result);
			break;
			
		case '-' :
			result = num1 - num2;
			printf("%d", result);
			break;
			
		case '*' :
			result = num1 * num2;
			printf("%d", result);
			break;
		case '/' :
			result = num1 / num2;
			printf("%d", result);
			break;
			
		default:
			printf("Error: Invalid Input");
	}
	return 0;
}
