#include<stdio.h>
#include<stdlib.h>

int main() {
	int num, square, mod;
	printf("Enter your number: ");
	scanf("%d", &num);
	
	square = num * num;
	if (0<mod) {
		mod = num % square;
		square--;
	}
	else {
		printf("It is a prime number");
	}
	return 0;
}
