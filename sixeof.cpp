
//Size of primary data types in bytes
#include<stdio.h>
int main(){
int myArray=[45, 78, 69, 9 ,3 ,3 ,3 ,3];
printf("%d", length(myArray));
printf("Size of Integer: %ld \n", sizeof(int));
printf("Size of Character: %ld \n", sizeof(char));
printf("Size of Float: %ld \n", sizeof(float));
printf("Size of Double: %ld \n", sizeof(double));
printf("Size of Signed Integer: %ld \n", sizeof(signed int));
printf("Size of Signed Character: %ld \n", sizeof(signed char));
printf("Size of unsigned Integer: %ld \n", sizeof(unsigned int));
printf("Size of Unsigned Character: %ld \n", sizeof(unsigned char));
printf("Size of Long Integer: %ld \n", sizeof(long int));
printf("Size of Long Double: %ld \n", sizeof(long double));
printf("Size of a void: %ld \n", sizeof(void));
return 0;
}

