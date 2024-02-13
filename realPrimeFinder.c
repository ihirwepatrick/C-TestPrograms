#include<stdio.h>
#include<stdlib.h>
//this program finds if the input is a prime number;
int main() {
	int num, mod, square;
	printf("Enter your number: ");
	scanf("%d", &num);
	square = num * num;
	mod = 0;
	
	while(0==mod) {
		mod = num % square;
		square--;
		
//		if () {
//			printf("It's a not a prime number");
//		}
return mod;
	}
	if (mod ==0) {
		printf("Prime number");
	}
	
	return 0;
}
