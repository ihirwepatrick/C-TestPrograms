#include<stdio.h>

int main () {
	int num, i, isprime = 1;
	
	printf("Enter your number: ");
	scanf("%d", &num);
	if(num >1) {
	
	for(i=2; i<num; i++) {
		if(num%i == 0) {
			isprime= 0;
		} 
	}
	if(isprime == 1) {
		printf("%d is a prime number", num);
	}
	else {
		printf("%d is not a prime number", num);  
	}
}
else {
	printf("Not a prime number");
}
	return 0;
	}
