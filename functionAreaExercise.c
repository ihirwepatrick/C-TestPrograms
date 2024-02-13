#include<stdio.h>
int findArea(int length, int width) {
     return length * width;
	}
//factorial number noted n! defined as n! = n*(n-1)*(n-2)*----*1
int main() {
	int length, width;
	printf("Enter height: ");
	scanf("%d", &length);
	printf("Enter width: ");
	scanf("%d", &width);
	int area = findArea(length, width);
	printf("%d", area);
	return 0;
}
