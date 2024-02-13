#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("hello World!\n\n");
	printf("I have started a new line! There are 2 new blank lines\n");
	printf("Let me create a horizontal tab \t");
	printf("This is the tab\n\n"); // This is comment
	/* This is a mulltiple line comment */
	int myNum = 16;
	char myL = 'hey there';
	const float decimal = 134.44;
	const int favoriteNumber = 7;
	myNum = 27;
	char letters = 'l';
	
	
	printf("%d\n", myNum);
	printf("%c\n", myL);
	printf("%f\n", decimal);
	printf("My favorite number is: %d\n", favoriteNumber);
	printf("%c\n", letters);
	int time = 20;
if (time < 10) {
  printf("Good morning.\n");
} else if (time < 20) {
  printf("Good day.\n");
} else {
  printf("Good evening.\n");
}
int myNumber = -9; // Is this a positive or negative number?

if (myNumber > 0) {
  printf("The value is a positive number.\n");
} else if (myNumber < 0) {
  printf("The value is a negative number.\n");
} else {
  printf("The value is 0.\n");
}
// Outputs "Good evening."
int time2 = 21;
(time < 20) ? printf("Have a nice Day!\n") : printf("Good evening\n");
int yourAge=15;
(yourAge<18) ? printf("Not Allowed to vote\n") : printf("Allowed to vote\n");
int day = 9;
switch (day) {
	case 1:
		printf("Monday\n");
		break;
		
	case 2:
	    printf("Tuesday\n");
	    break;
	    
	case 3:
		printf("Wednesday\n");
		break;
		
    case 4:
    	printf("Thursday\n");
    	break;
    	
    case 5:
    	printf("Friday\n");
    	break;
    	
    case 6:
    	printf("Saturday\n");
    	break;
    	
    case 7:
    	printf("Sunday\n");
    	break;
    	
    default:
    	printf("Invalid WeekDay Number\n");
		
}	
int i = 1;

do {
	printf("%d\n", i);
	i+=5;
}
while(i<100);
int f,h ;
for(f=0; f<10; f+=1) {
	printf("-->: %d\n", f);
	
	for(h=1; h<10; h+=2) {
		printf("inner loop: %d\n", h);
	}
	
}
int c;
for(c=1; c<10; c++){
	if (c==5) {
		break;
	}
	printf("%d\n", c);
}
int z;
for(z=0; z<7; z++) {
	if (z==3) {
		continue;
	}
	printf("z is %d\n\n", z);
	}
int t;
while(t<10) {
	if ( t == 4 ) {
		break;
	}
	printf("t is %d\n\n\n\n", t);
	t++;
}
int myNums[] = {25, 50, 75, 100, 125, 150};
int o;
for (o=0; o<10; o++) {
	printf("%d\n\n\n", myNums[o]);
}
int matrix[2] [3] ={{1, 2, 3} , {4, 5, 6}};
matrix[0][0] = 77;
printf(" The updated  output is: %d", matrix[0][0]);

return 0;
}
