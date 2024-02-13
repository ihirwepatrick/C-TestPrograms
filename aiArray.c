#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements for the array:\n", size);
    int i;  // Declare the loop variable outside the loop
    for (i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
int realI= size-1;
    printf("The array you entered is: ");
    for (i =realI; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    return 0;
}
