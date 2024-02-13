#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main() {
	int num, sum;
	printf("Enter your number: ");
	scanf("%d", &num);
	
	while(0<num) {
		num--;
		sum += num;
	}
	printf("%d", sum);
	return 0; 
}
