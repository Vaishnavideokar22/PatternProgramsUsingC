/*
   ******
   *****
   ***
   **
   *
*/

#include<stdio.h>


void PatternStar(){

    int row,col;

    printf("Enter rows and colums : \n");
    scanf("%d %d",&row,&col);

    for( int i = 1; i <= row; i++){
        for(int j = 1; j <= col-i+1; j++){
            printf("* \t");
        }
        printf("\n");
    }
}

void PatternNo(){

    int row,col;

    printf("Enter rows and colums : \n");
    scanf("%d %d",&row,&col);

    for( int i = 1; i <= row; i++){
        for(int j = 1; j <= col-i+1; j++){
            printf("%d \t",j);
        }
        printf("\n");
    }
}

int main(){

    PatternStar();
    PatternNo();

    return 0;
}