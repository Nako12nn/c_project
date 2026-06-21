#include <stdio.h>

int main() {
    // for(int i=1; i<=13; i++){
    //     if (i == 8) break;
    //     else if (i == 6 || i == 2 || i == 4) continue;
    //     printf("Elements: %d\n", i);
    // }
    //int arrey[4] = {6, 5, 4, 3};
    
    int arrey[4][4] = {
        {26, 35, 64, 8},
        {25, 40, 80, 7},
        {14, 36, 77, 4},
        {84, 98, 31, 30}  };
    int rows = 4;
    int columns = 4;

    int max = 0;
    int min = 0;
    printf("The arrey: \n");

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d, ", arrey[i][j]);
        }
        printf("\n");
    }
    printf("\n");


    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (max >= arrey[i][j]) continue;
            if (max <= arrey[i][j]) max = arrey[i][j];        
        }
    }
    printf("Max number of the arrey: %d\n", max);
    

    return 0;
}