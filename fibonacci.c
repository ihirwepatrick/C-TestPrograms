#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int position;
    printf("Enter the position of the Fibonacci sequence: ");
    scanf("%d", &position);
    int result = fibonacci(position);
    printf("The Fibonacci value at position %d is: %d\n", position, result);
    return 0;
}
