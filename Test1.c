/*  
 ******    12345
 ******    12345
 ******    12345
*/


#include<stdio.h>

void patternstar(){

  int row,col;
  
  printf("Enter the row \n");
  scanf("%d",&row);

   printf("Enter the colums \n");
   scanf("%d",&col);

   for(int i = 1; i <= row; i++){
    for(int j = 1; j <= col; j++){
        printf("*");
    }
    printf("\n");

   }
   


}

void patternnumber(){

  int row,col;
  
  printf("Enter the row \n");
  scanf("%d",&row);

   printf("Enter the colums \n");
   scanf("%d",&col);

   for(int i = 1; i <= row; i++){
    for(int j = 1; j <= col; j++){
        printf("%d",j);
    }
    printf("\n");

   }
   


}

int main(){


patternstar();
patternnumber();

    return 0;
}