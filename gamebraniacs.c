#include <stdio.h>  

int main() {
    int secretNum = 12, guess1, guess2, guess3, okay = 1;
    char choice;
    void lessOrgreater(int guess, int secretNum) {
    	if(guess<secretNum) {
    		printf("Lower to the unknwon");
		}
		else{
			printf("Higher to the unkwnown");
		}
		return 0;
	}

    while (okay = 1) {  
        printf("Please enter your first guess: ");
        scanf("%d", &guess1);
        if (guess1 == secretNum) {
            printf("You won!");
            
//            break; 
        } else {
            printf("Wrong guess! Try again\n\n");
             lessOrgreater(int guess1, int SecretNum);
            
            printf("Enter the second guess: ");
            scanf("%d", &guess2);
            if (guess2 == secretNum) {
                printf("You won!");
//                break;  
            } else {
                printf("Wrong guess! Try again\n\n");
                printf("Enter the third guess: ");
                scanf("%d", &guess3);
                if (guess3 == secretNum) {
                    printf("You won!");
//                    break;  
                } else {
                    printf("Wrong guess\n\n");
                    printf("You lost the game! Jya kuryama\n");
//                    break;  
                }
            }
        }

        printf("Want to continue? Enter 'Y' or 'N': ");
        scanf(" %c", &choice); 
        if (choice == 'N') {
            okay = 0;  
        }
    }

    return 0;
}
