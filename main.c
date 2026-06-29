#include <stdio.h>
#define TOTAL_MARKS   10

int main(void) { 
/// An array is not a full-fledged data structure, 
/// but rather a continuous memory area for storing a collection of data of the same type 
/// If a program crashes even once out of a million runs, it's always the programmer's fault.

    int marks[TOTAL_MARKS];

    marks[9] = 75;
    marks[0] = 80;
    marks[4] = 60;

    int x1 = marks[9];
    printf("x1 = %d\n\n", x1);

    size_t bytes_marks = sizeof(marks);
    size_t size_marks = sizeof(marks) / sizeof(marks[0]); // marks[0] == *marks
        printf("size of marks: %zu\n", size_marks); // shows amount of elements
        printf("amount of used bytes in marks: %zu\n", bytes_marks); // shows an amount of used bytes

    for (int i = 0; i < TOTAL_MARKS; i++)
    {
        printf("N_%d of the array marks: %d\n", i+1, marks[i]);
    }
    

    return 0;
}
