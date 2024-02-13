#include <stdio.h>
#include <stdlib.h>

// Custom comparison function for sorting integers in ascending order
int compareIntegers(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int numbers[] = {4, 2, 5, 1, 3},i;
    int size = sizeof(numbers) / sizeof(numbers[0]);

    qsort(numbers, size, sizeof(int), compareIntegers);

    for (i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    return 0;
}
