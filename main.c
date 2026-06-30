#include <stdio.h>
//#define TOTAL_MARKS 10

int main(void) { 
/// coping
//     float func_1[100] = {2.3, 3.1, -1.5, 4.5, 3.6, -2.5, 3.1, 6.6, [99] = 9.1};
//     float *ptr_func1 = func_1;
    
//     float func_2[50];
//     float *ptr_func2 = func_2;


//     int size1 = sizeof(func_1) / sizeof(*func_1); // 100     x    y 
//     int size2 = sizeof(func_2) / sizeof(*func_2); // 50
//     int size_ttl = (size1 > size2) ? size1 : size2; // ternar operation


//     for (int i = 0; i < size_ttl; i++)
//         ptr_func2[i] = ptr_func1[i];
    
//     // for (int i = 0; i < size_ttl; ++i)
//     //     printf("%.2f ", func_2[i]);


// /// insertion 
//     int marks[TOTAL_MARKS] = {7, 8, 4, 3, 11};
//     int insrt_indx = 3;

//     for (int i = TOTAL_MARKS - 1; i > insrt_indx; --i) {
//         marks[i] = marks[i-1];
//         printf("marks[%d] - marks[%d]\n", i, i-1);
//     }

//     marks[insrt_indx] = 12;

//     for (int i = 0; i < TOTAL_MARKS; ++i) {
//         printf("%d ", marks[i]);
//     }


// removement
    // int marks[TOTAL_MARKS] = {11, 12, 9, 3, 10};
    // int rm_indx = 3;

    
    // for (int i = rm_indx; i < TOTAL_MARKS - 1; ++i) {
    //     marks[i] = marks[i + 1];
    // }

    // for (int i = 0; i < TOTAL_MARKS; ++i) {
    // printf("%d ", marks[i]);
    // }


// sort by choice
    int array[] = {10, 4, 1, -6, -7, 5, 0};
    int size_array = sizeof(array) / sizeof(array[0]);
    int favoe;

    for (int i = 0; i < size_array - 1; ++i) {
        favoe = i;
        for (int j = i+1; j < size_array; ++j) {
            if (array[favoe] > array[j])
                favoe = j;
        }

            if (favoe != i)
            {
                int t = array[i];
                array[i] = array[favoe];
                array[favoe] = t;
            }
            
    }

    for (int i = 0; i < size_array; ++i) {
        printf("%d ", array[i]);
    }


    return 0;
}
