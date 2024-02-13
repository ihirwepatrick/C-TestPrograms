#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>

int main() {
	int num1, num2, operation, difference, sum, product, division;
	char sub='-';
	printf("Enter The First Number: >> ");
	scanf("%d", &num1);
	printf("Enter the second number: >> \n");
	scanf("%d", &num2);
	
	printf("Select the operation (+, -, /, *) >>  \n");
	scanf("%c \n\n", &operation);
	
	if (operation = '+') {
		printf("%d \n", num1 + num2 );
	}
	else if (operation = 'sub') {
		    difference = num1 - num2;
			printf("%d", difference);
			
			return difference;
		}
return 0;	
	
}
