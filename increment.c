#include<stdio.h>

int main() {
	int i, size, a=0;
	
	printf("Please enter the size of the list>>");
	scanf("%d", &size);
	 
	int myArray[size];
	for (i=0; i<size; i++) {
		printf("Enter element %d :", i);
		scanf("%d", &myArray[i]);
	}
int max = myArray[0];
while (a<size) {
	if (max < myArray[a]) {
		max = myArray[a];
	}
	a++;
}
printf(" The maximum number in the list is %d", max);
	return 0;
}
