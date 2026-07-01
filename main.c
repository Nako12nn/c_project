#include <stdio.h>

int main(void) { 

    int game_pole[4][5];

    size_t bytes = sizeof(game_pole);
    printf("all bytes = %zu\n", bytes);

    size_t row_bytes = sizeof(game_pole[0]);
    printf("row bytes = %zu\n", row_bytes);

    size_t rows = sizeof(game_pole) / sizeof(game_pole[0]);
        printf("rows = %zu\n", rows);

    size_t columns = sizeof(game_pole[0]) / sizeof(game_pole[0][0]);
        printf("columns = %zu\n\n", columns);



    char array[3][3] = {9, 7, 1, 4, 5, 6, 7, 8, 9};
    char *ptr_array = array[1];

    printf("%d\n", *(ptr_array - 2));

    char (*ptr_arr2)[3] = array;// ptr on 2d array
    char *ptr_arr3[3]; // array with 3 poiters

    char x = ptr_arr2[0][1];
    printf("x = %d\n", x);

    ptr_arr2[0][0] = 0;
    printf("%d\n", ptr_arr2[0][0]);


    return 0;
}