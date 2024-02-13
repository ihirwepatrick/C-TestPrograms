#include<stdio.h>
#include<stdlib.h>

int main() {
	int num, i, max=0;
	printf("Enter the total number of your set>>>");
	scanf("%d", &num);
	int myNumber[num];
	
	for(i=0; i<num; i++) {
		printf("Enter number %d", i++);
		scanf("%d", myNumber[i]);
		
		if(myNumber[i]>max) {
			max = myNumber[i];
		}
	}
	printf("Maximum number is %d Thank you!", max);6
	return 0;
}
