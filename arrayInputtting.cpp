#include<stdio.h>

int main() {
	int size, i;
	printf("Enter the size of aray:");
	scanf("%d", &size);
	
	int myArray[size];
	for(i=0; i<size; i++) {
		printf("Enter element %d: ", i);
		scanf("%d", &myArray[i]);
	}
	printf("Your array: ");
	for(i=0; i<size; i++) {
		printf("%d ", myArray[i]);
	}
	
	return 0;
}
