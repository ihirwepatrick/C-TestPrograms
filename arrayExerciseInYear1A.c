#include<stdio.h>

int main() {
	int size;
	printf("Please enter the size of your array: ");
	scanf("%d", &size);
	int i, myArray[size];
	for(i=0; i<size; i++) {
		printf("Enter element %d: ", i);
		scanf("%d", &myArray[i]);
	}
	for(i=0; i<size; i++) {
		printf("%d ", myArray[i]);
	}
	printf("\n\n");
	int min=myArray[0];
	for(i=0; i<size; i++) {
		if(myArray[i] <= min) {
			min= myArray[i];
		}
	}
	printf("Minimum number= %d \n", min);
	int sum;
	for(i=0; i<size; i++) {
		sum += myArray[i];
	}
	printf("The sum of elements= %d", sum);
	return 0;
}
