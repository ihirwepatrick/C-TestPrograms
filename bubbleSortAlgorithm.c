#include <stdio.h>

void bubbleSort(int arr[], int n) {
	int i, j;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int numbers[] = {4, 2, 5, 1, 3}, i;
    int size = sizeof(numbers) / sizeof(numbers[0]);

    bubbleSort(numbers, size);

    for (i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    return 0;
}
