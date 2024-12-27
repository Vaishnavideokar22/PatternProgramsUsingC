/*

1 2 1 2 1 2
2 1 2 1 2 1
1 2 1 2 1 2
2 1 2 1 2 1

*/ 

#include <stdio.h>

void printingpattern() {
    int r, c;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &r, &c);

    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) { 
          if((i+j) % 2 == 0){
            printf("1\t");
          }
          else{
            printf("2\t");
          }

        }
        printf("\n");
    }
}

int main() {

    printingpattern();

    return 0;
}