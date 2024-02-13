#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    printf("Enter your number: ");
    scanf("%d", &num);

    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if (isPrime == 1) {
        printf("Prime number\n");
    } else {
        printf("Not a prime number\n");
    }

    return 0;
}
