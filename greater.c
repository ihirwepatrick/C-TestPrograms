#include <stdio.h>

int main() {
    int n, i;
    int max = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers: ", n);
    for (i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);

        if (num > max) {
            max = num;
        }
    }

    printf("The greatest value is: %d\n", max);

    return 0;
}
