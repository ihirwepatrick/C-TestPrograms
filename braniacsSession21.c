#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

int main() {
	int x;
	int y;
	printf("Enter your number: ");
	scanf("%d", &x);
	for (y=0; y<x; y++) {
		printf("Hello world\n");
	}
	return 0;
}
