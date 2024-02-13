#include<stdio.h>
#include<stdlib.h>

int main() {
	double n1, n2, result;
	char op;
	int repeat=1;
	while(repeat) {
		printf("|Select operation (+, *, -, /) or q to quit>> \t");
		scanf(" %c", &op);
		
		if (op =='q') {
			repeat = 0;
			continue;
		}
	
	    printf("Enter First number >>\t ");
		scanf("%lf", &n1);
		printf("Enter second number >> \t");
		scanf("%lf", &n2);
		
		switch(op) {
			case '+' :
				result = n1 + n2;
				printf("Result>>> %.2lf \n\n", result);
				break;
				
			case '-' :
				result = n1 - n2;
				printf("Result>>> %.2lf \n\n", result);
				break;
				
			case '/' :
				result = n1 / n2;
				printf("Result>>> %.2lf \n\n", result);
				break;
				
			case '*' :
				result = n1 * n2;
				printf("Result>>> %.2lf \n\n", result);
				break;
				
			default:
				printf("Invalid Input \n\n");
				break;
		}
	}
	    printf("Program has successfully failed");
		return 0;
}
