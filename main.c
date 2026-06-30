#include <stdio.h>

int main(void) { 

//     short arr[] = {7, 4, 6, 3, 2, 0, 7};
//     const short *ptr_arr; // using poiter ptr_arr we cant change values in the memory cells but can change adress 

//     ptr_arr = arr;
//     printf("%p\n", &ptr_arr); // you can
//     printf("%hd\n", *ptr_arr);
// //ptr_arr[0] = 2; // you cannot -> read-only variable

//     ptr_arr++;
//     printf("%hd\n", *ptr_arr);



//     unsigned short new_arr[] = {4, 3, 6, 4, 7, 2, 0};
//     unsigned short * const ptr_new = new_arr; // initialization - yes, assignment - no, addres cant be changed 

//     //ptr_new = new_arr; cannot
//     short x = ptr_new[0];
//     //ptr_new++; cannot


    short array1[] = {5, 7, 4, 7, 3, 2, 6, 5};
    const short *ptr_arr1 = array1; // r--
    short *ptr_arr2 = array1; // rw-
    //ptr_arr2 = ptr_arr1; cant do that but can the other way around ptr_arr1 = ptr_arr2;

    ptr_arr2[2] = 7;
    short x = ptr_arr1[2];
    printf("%hd\n", x);


    const int w = 4; // r--

    w++;





  

    return 0;
}
