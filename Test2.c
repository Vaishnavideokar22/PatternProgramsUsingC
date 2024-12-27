/*
  *****      12345
  *   *      1   5
  *   *      1   5
  *****      12345
*/

#include<stdio.h>

void patternstar(){

    int row,col;

    printf("Enter the row and colums: \n");
    scanf("%d%d",&row,&col);

    for(int i = 1; i <= row; i++){
        for(int j = 1; j <= col; j++){
            if(i == 1 || i == row || j == 1 || j == col){
                printf("* \t");
            }
            else{
                printf("\t");
            }
        }
        printf("\n");
    }
}

void patternnumber(){

    int row,col;

    printf("Enter the row and colums: \n");
    scanf("%d%d",&row,&col);

    for(int i = 1; i <= row; i++){
        for(int j = 1; j <= col; j++){
            if(i == 1 || i == row || j == 1 || j == col){
                printf("%d \t",j);
            }
            else{
                printf("\t");
            }
        }
        printf("\n");
    }
}


int main(){

    patternstar();

    patternnumber();

    return 0;
}