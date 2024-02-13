#include<stdio.h>

int main() {
	int r,c,i,h;
	printf("Enter height: ");
	
	scanf("%d", &h);
	int myArray[10][10];
	
	for(r=1; r<h; r++){
		for(c=0; c<h; c++){
			if(r>=c) {
				if((r==c)||c==0) {
					myArray[r][c]=1;
					}
					
				else 				
					myArray[r][c] = myArray[r-1][c] + myArray[r-1][c-1];
					printf("%d ", myArray[r][c]);
				
			}
		
		}
		printf("\n");
	}
	return 0;
}


