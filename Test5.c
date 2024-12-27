/*
         *
        ***
       ******
      ********* 
*/

#include<stdio.h>

void star(){

 int r;

 printf("Enter the rows :");
 scanf("%d",&r);

 for(int i = 1; i < r; i++){
    for(int k = 1; k <= r- i; k++){
        printf("\t");
    }
    for(int l = 1; l <= (i*2)-1; l++){
        printf("* \t");
    }
    printf("\n");
 }


}

int main(){

    star();

    return 0;
}