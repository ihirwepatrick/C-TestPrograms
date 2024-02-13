#include<stdio.h>

int add(int, int, int);
int add(int n1, int n2, int sum) {
	sum = n1 + n2;
	return sum;
}
int main() {
	int i=145;
	int v= 24, sum;
	int sum1 = add(i, v, sum);
	printf("%d", sum1);
	return 0;
}
