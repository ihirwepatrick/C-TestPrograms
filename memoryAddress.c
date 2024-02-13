#include <stdio.h>

int main() {
    int array[3][3]; // 2-dimensional array
    int i, j;

    // Assign values to the 2D array
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            array[i][j] = i * 3 + j;
        }
    }

    // Display the memory addresses of elements within the 2D array
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Address of array[%d][%d]: %p\n", i, j, &array[i][j]);
        }
    }

    return 0;
}
