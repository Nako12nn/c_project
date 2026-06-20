#include <stdio.h>
#include <stdbool.h>

int main() {

    
    char nul[3] = {'l', 'o', 'x'};
    printf("next: %c", nul[0]);
    printf("%c", nul[1]);
    printf("%c \n", nul[2]);

    char word[] = "You dont know me!";
    printf("First: %s\n", word);


    int ar2[2][2] = {
        {8, 3},
        {9, 4}
    };

    int row = 2;
    int column = 2;

    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            printf("%d", ar2[i][j]);
        }
        printf("\n");
    } 
 

    return 0;
}
// I got it

// Does it work like I think?