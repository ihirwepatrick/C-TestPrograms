#include <stdio.h>

int main() {
	int num, average, sum;
	int i = 2;
	int cal = 0;
	
	printf("Enter the nummber>>> ");
	scanf("%d", &num );
	
	while (i<num) {
		cal++;
		sum =+ i;
		i =+ 2;
	}
	average =sum / cal;
	printf("%d is the sum \n", sum);
	printf("%d is the average", average);
	return 0;
}
