#include <stdio.h>
#include <string.h>

int main() {
	int y=12;
	float x=12.889;
	char myLetters[]= "Letters";
	printf("%d\n", y);
	printf("%f\n", x);
	printf("%s\n\n", myLetters);
	char testmodify[] = "Modification is available";
	printf("%c\n", testmodify[0]);
	
	testmodify[2] ='c';
	printf("%s\n\n", testmodify);
	// initially modification
	char carName[] ="Volvonnnn";
	int i;
	for(i=0; i<5; i++) {
		printf("%c\n\n", carName[i]);
	}
//	this about printing the string using the loop as the i is incremented by 1 and each let will come
    char alphabet[50] ="abcdefghijklmnopqrstuvwxyz";
    printf(" This is the string lenght%d \n", strlen(alphabet));
    printf("%d \n", sizeof(alphabet));
    
//    concatenate strings
    
    char str1[20] = "Hello world ";
    char str2[] = "I am here!";
    
    strcat(str1, str2); //this is stored in str1
    printf("%s\n", str1);
    
//    this about copying strings to other valiables
    
    char st1[20] = "Hollaaaa";
    char st2[20];
    
    strcpy(st2, st1); // this means that we copy content of st1 to st2
    
    printf("copy is--> %s \n\n", st2);
//     comparing 2 strings if the strings are equal the interpreter displays 0 and displays other numbers when they are different

    char comp1[] = "Hello";
    char comp2[] = "Hello";
    
    printf("%d\n", strcmp(comp1, comp2));
    
    int myNum;
    char myChar;
    
    printf("Enter your letter and number>>>");
    scanf("%d %c ", &myNum, &myChar);
    
    printf("Here is your number  %d \n", myNum);
    printf("Here is your letter %c \n", myChar);
    char fullName[30];
    printf("Type your full name: ");
    fgets(fullName, sizeof(fullName), stdin);
    
    printf(" Your full names are %s ", fullName);
	return 0;
}
