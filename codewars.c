#include<stdio.h>
#include<stdlib.h>

int main() {
  int myNum, division;
  printf("Please Enter the number: ");
  scanf("%d", &myNum);
  
  division= myNum % 2;
   switch(division) {
       case 0 :
       printf("This an Even");
       break;
       
       default:
       printf("This an Odd");
       break;
   }
return 0;
}

