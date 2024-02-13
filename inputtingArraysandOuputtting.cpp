#include<stdio.h>

int main() {
	/*int size;
	printf("Enter the size your array: ");
	scanf("%d", &size);*/
	
	int myArray[10];
	int i;
	for(i=0; i<10; i++) {
		printf("Enter element %d: ", i);
		scanf(" %d", &myArray[i]);
	}
	printf("Your array is: ");
	for(i=0; i<10; i++) {
	printf("%d ", myArray[i]);
	}
	printf("\n");
	int myArr[10];
	printf("Enter element 1: ");
	scanf("%d", &myArr[0]);
	printf("%d", myArr[0]);
return 0;
}
