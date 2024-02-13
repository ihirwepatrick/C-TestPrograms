#include<stdio.h>
int main(){
int arr[10][10];
              int i,j,h;
              scanf("%d",&h);
 for(i=0;i<h;i++){
    for(j=0;j<h;j++){
            if(i>=j){
             if((i==j)||j==0)
                arr[i][j]=1;
             else
                arr[i][j]=arr[i-1][j]+arr[i-1][j-1];
             printf("%d ", arr[i][j]); 
            }
        //printf("* ");
    } printf("\n");
 }
 return 0;
}
