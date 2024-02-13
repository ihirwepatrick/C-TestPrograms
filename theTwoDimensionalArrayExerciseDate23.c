#include<stdio.h>

int main() {
	int firstGroup[4][3], i, j;
	int secondGroup[4][3];
	printf(
	
	"Enter elements of the first group>> \n\n");
	for(i=0; i<4; i++) {
		for(j=0; j<3; j++) {
			scanf("%d", &firstGroup[i][j]);
		}
	}
	printf("Enter the second group>> \n\n");
		for(i=0; i<4; i++) {
		for(j=0; j<3; j++) {
			scanf("%d", &secondGroup[i][j]);
		}
	}
	printf("Now let's us print the elements of the firstGroup \n\n");
		for(i=0; i<4; i++) {
		for(j=0; j<3; j++) {
			printf("%d ", firstGroup[i][j]);
		}
		printf("\n");
	}
	printf("\n\n\n");
	printf("Elements of the second group: \n\n");
	for(i=0; i<4; i++) {
		for(j=0; j<3; j++) {
			printf("%d ", secondGroup[i][j]);
		}
		printf("\n");
	}
	int sum[4][3];
	for(i=0; i<4; i++) {
		for(j=0; j<3; j++) {
			sum[i][j] = firstGroup[i][j] + secondGroup[i][j];
		}
	}
	printf("\n\n");
	printf("Now let's us view the sum>> \n\n");
for(i=0; i<4; i++) {
		for(j=0; j<3; j++) {
			printf("%d ", sum[i][j]);
		}
		printf("\n");
	}	
	return 0;
}
