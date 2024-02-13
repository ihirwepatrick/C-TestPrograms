#include<stdio.h>

int main() {
    char c1[10];
    char c2[10];
    
    printf("Enter string1: ");
    scanf("%s", &c1);
    printf("Enter string2: ");
    scanf("%s", &c2);
    
    int result = strlen(c1) == strlen(c2);
    int flag=0;
    int i, j;
    for(i=0; i<strlen(c1); i++) {
    	for(j=0; j<strlen(c2); j++) {
    		if(c1[i] !== c2[j]) {
    			flag=1;
    			break;
			}
		}
	}
	if(flag==0 && result=1){
		printf("same and equal")
	}
    return 0;
}
