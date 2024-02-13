#include<stdio.h>
 int main() {
 	char continuation;
 	int width, height, area;
 	int true=1;
 	while (true == 1) {
 	
 	
 	printf("Enter the width of the reactangle>>> ");
 	scanf("%d", &width);
 	printf("Enter the height of the rectangle>>>");
 	scanf("%d", &height);
 	
 	area = height * width;
 	printf(" The area = %d \n\n", area);
 	printf("Want to continue? (Enter 'n' to stop) \n");
 	scanf(" %c", &continuation);
 	if (continuation == 'n') {
 		printf("Program exited");
 		break;
 		
	 }
	 
	 }
 
 	return 0;
 }
