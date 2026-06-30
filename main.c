#include <stdio.h>

int main(void) { 

   short arr[] = {7, 4, 6, 3, 2, 0, 7}; // arr points on the first element of the array

   short arr_el1 = *arr;
   printf("The first element: %hd\n", arr_el1);
   printf("Too: %hd\n", arr[0]);
// a name of an array can be taken as a poiter 

    short arr_el5 = *(arr+4); // adress arythmetic 
    printf("the 5 el: %hd\n\n", arr_el5);


    for (int i = 0; i < sizeof(arr) / sizeof(*arr); i++) // sizeof bytes taken by array / sizeof bytes taken by first element
    {
        printf("%hd ", *(arr + i));
    }
    printf("\n\n");


    short array1[] = {10, 6, 5, 3, 7, 8, 1, 0};
    short *ptr_arr;

    ptr_arr = array1;
    //ptr_arr = &array1[0];  // the same as above but the above's better

    short x = *ptr_arr;
    printf("x = %hd\n", x);

    *(ptr_arr+1) = 1;
    short y = *(ptr_arr+1);
    printf("y = %hd\n\n", y);


    size_t len_1 = sizeof(array1); // bytes of all array 
    size_t len_2 = sizeof(*ptr_arr);

    printf("1 = %zu\n", len_1);
    printf("2 = %zu\n", len_2);


    short nice = ptr_arr[7];
    printf("nice = %hd\n", nice);

    return 0;
}
