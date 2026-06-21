#include <stdio.h>

int main() {
    int arrey[4][4] = {
        {26, 35, 64, 8},
        {25, 40, 80, 7},
        {14, 36, 77, -7},
        {84, 98, 31, 30} };
    int rows = 4;
    int columns = 4;
    int max = arrey[0][0];
    int min = arrey[0][0];
    printf("The arrey: \n");
    
    
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d, ", arrey[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (max >= arrey[i][j]) continue;
            if (max <= arrey[i][j]) max = arrey[i][j];        
        }
    }
    
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (min >= arrey[i][j]) min = arrey[i][j];
            else continue;
        }
    }
    
    printf("\n");    
    printf("Max number of the arrey: %d\n", max);
    printf("Min number of the arrey: %d\n", min);
    return 0;
}