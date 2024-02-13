#include<stdio.h>

int main() {
	int num,i;
	printf("Please enter the number of your numbers: ");
	scanf(" %d", &num);
	int myArray[num];
	for(i=0; i<num; i++) {
		printf("Enter number %d : ", i+1);	a 
		scanf(" %d", &myArray[i]);
	}
	return 0;
}
