#include <stdio.h>

int main(void) { 
    
    // Some problems with the poiters -> call to undefined area of memory
    // long *serf; // wrong
    // *serf = 2;

    // long mystr = 21;
    // long *newpr = NULL; // how to check if a pointer is initialized and points to a specific memory location

    // if (newpr != NULL) { // that is how to check it, but it doesnt work in 100 %
    // *newpr = 45;
    // printf("the value = %ld\n\n", *newpr);
    // }


    // int nice = 7;
    // int *ptr_nice = &nice;

    // printf("the adress of int ptr_nice = %u\n", ptr_nice);  

    // ptr_nice++; /// the difference - 4, cause int has 4 bytes, and we here wokr with data portions
    // printf("the adress of int ptr_nice = %u\n\n", ptr_nice); 


    // char try = 9;
    // char *ptr_try = &try;

    // printf("the adress of char ptr_try = %u\n", ptr_try);

    // ptr_try++; /// char has 1 byte so the same is here -> data portions, not just numbers
    // printf("the adress of char ptr_try = %u\n\n", ptr_try);



    // short arr[8];
    // short *ptr_arr = arr; /// *ptr_arr refers to the first element of this array
    // short *ptr2_arr = &arr[3]; /// *ptr2_arr refers to the fourth element 

    // printf("the adress of ptr_arr = %u\n", ptr_arr);
    // printf("the adress of ptr2_arr = %u\n\n", ptr2_arr);

    // int res = ptr2_arr - ptr_arr; // this operation: (&ptr2 - &ptr) / 2 (sizeof short)
    // printf("The res = %d\n", res); // it shows how many elements are between ptr2 - ptr


    // int lak = 476789;
    // char *ptr_lak = (char *)&lak; /// char ptr refers to the first (one) byte of lak which has 4 ones 
    // int *ptr_int = &lak;

    // printf("int ptr = %d\n", *ptr_int);   
    // printf("Char ptr = %d\n", *ptr_lak); // the first byte is printed 117 * 256^0

    // ptr_lak++;
    // printf("Char ptr = %d\n", *ptr_lak); // the second one 70 * 256^1 and so on


    // // for (int i = 0; i < sizeof(int); ++i)
    // //     printf("%d ", *ptr_lak++);   *ptr_lak++ == *(ptr_lak++)


    // int lak = 476789;
    // int *ptr_int = &lak;

    // *ptr_int += 1;
    // printf("%d\n", *ptr_int); // 1 - *ptr_int, 2 - + 1;


    int nwq = 476789;
    char *my_ptr = (char *) &nwq;

    int x = *my_ptr + 1; // 1 - read value of *my_ptr  2 - + 1,  3 - x = that value
    printf("x = %d\nnwq = %d\n", x, nwq);

    int y = *my_ptr++;
    printf("y = %d\nnwq = %d\n", y, nwq);


    printf("\n");
    return 0;
}
