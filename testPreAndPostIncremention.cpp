#include<stdio.h>

int main () {
	int i = 5, j=6, q=12;
	int sum = ++i + j + q;
	int otherSum  = i++ + 12 + 10;
	printf("%d\n", sum);
	printf("%d\n", otherSum);
	printf("%d", i);
	return 0;
}
