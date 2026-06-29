#include <stdio.h>
#define TOTAL_MARKS   10

int main(void) { 
/// An array is not a full-fledged data structure, 
/// but rather a continuous memory area for storing a collection of data of the same type 

    int marks[TOTAL_MARKS];

    marks[9] = 75;
    marks[0] = 80;
    marks[4] = 60;

    int x1 = marks[9];
    printf("x1 = %d\n\n", x1);

    for (int i = 0; i < TOTAL_MARKS; i++)
    {
        printf("N_%d of the array marks: %d\n", i+1, marks[i]);
    }
    

    return 0;
}
