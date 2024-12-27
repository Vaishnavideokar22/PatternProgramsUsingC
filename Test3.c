/*
    *              1
    **             12
    ***            123
    ****           1234

*/

#include<stdio.h>

void patternstar(){

    int row,col;

    printf("Enter the rows and colums:\n");
    scanf("%d %d",&row,&col);

    for(int i = 1; i <= row; i++){
        for(int j = 1; j <= i; j++){
            printf("* \t");
        }
        printf("\n");
    }

}


void patternNumber(){

    int row,col;

    printf("Enter the rows and colums:\n");
    scanf("%d %d",&row,&col);

    for(int i = 1; i <= row; i++){
        for(int j = 1; j <= i; j++){
            printf("%d\t",j);
        }
        printf("\n");
    }

}

int main(){
  

  patternstar();
  patternNumber();
    
    
    return 0;
}