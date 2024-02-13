#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>

int main() {
	printf("Loop through a 2D array\n\n");
	int matrix[2][3] = {{1,2,3} , {4,5,6}};
	
	int i,j;
	for(i=0; i<2; i++) {
		for(j=0; j<3; j++) {
			printf("%d", matrix[i][j]);
		}
		printf("\n");
	}
	return 0;
}
