#include <stdio.h>
#define TOTAL_MARKS   10

int main(void) { 

    int marks[TOTAL_MARKS] = {1, 2, 3, 4, 5}; // it's initialization not assignment
    marks[0] = 99; // it's assignment
    
    int new_arr[] = {21, 34, -3};
    int old_arr[] = {1, [5] = 31, 9, [9] = 22};

    for (int i = 0; i < sizeof(old_arr) / sizeof(*old_arr); i++)
    {
        printf("N_%d of the array marks: %d\n", i+1, old_arr[i]);
    }
    
    return 0;
}
