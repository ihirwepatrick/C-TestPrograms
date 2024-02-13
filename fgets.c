#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
	char fullName[30];
	printf("Enter your names: \n");
	fgets(fullName, sizeof(fullName), stdin);
	
	printf("%s", fullName);
	return 0;
}
