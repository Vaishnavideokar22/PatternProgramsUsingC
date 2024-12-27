/*
  1234567
  2345671
  3456712
  4567123
*/


#include <stdio.h>

void Number() {
    int num;
    printf("Enter the numbers:\n");
    scanf("%d", &num);  

    
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++) {
           
            printf("%d \t", (i + j) % num + 1);
        }
        printf("\n");
    }
}

int main() {
    Number();
    return 0;
}
