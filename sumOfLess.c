#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main() {
	int num, i, sum;
	printf("Enter your number >>");
	scanf("%d", &num);
	for(i=0; num<0; num--) {
		sum= i + num;
		if (i<num) {
			break;
		}
	}
	printf("%d\n", sum);
	
	return 0;
}
