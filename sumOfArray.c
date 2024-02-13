#include<stdio.h>

int main() {
	int size;
	printf("Please Enter the number of elements to find sum>>> ");
	scanf("%d", &size);
	int myArray[size], i, sum;
	for(i=0; i<size; i++) {
		printf("Enter element %d: ", i + 1);
		scanf("%d", &myArray[i]);
		sum += myArray[i];
	}
	printf("The sum of the numbers provided = d", sum);
	
	return 0;
}
