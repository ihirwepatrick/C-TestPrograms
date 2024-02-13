#include <stdio.h>

void selectionSort(int arr[], int n) {
	int i, j;
    for (i = 0; i < n-1; i++) {
        int minIndex = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main() {
    int numbers[] = {4, 2, 5, 1, 3}, i;
    int size = sizeof(numbers) / sizeof(numbers[0]);

    selectionSort(numbers, size);

    for (i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    return 0;
}
