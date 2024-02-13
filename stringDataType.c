#include<stdio.h>
#include<string.h>

int main() {
	char c[10];
	printf("Please enter your string: ");
	scanf("%s", &c);
	printf("%s \n", c);
	printf("%d \n", strlen("hello"));
	printf("%d \n", strcmp("abc", "def"));
	char a[] = "Hello";
	char b[] = "Heyyy";
	printf("%s", strcat(a,b));
	
	return 0;
}
