#include <stdio.h>

int main(void) { 
    
    // short my_num = 100;
    // short *your_num = &my_num; // initialization of pointer

    // printf("//// Example how to call poiter: \n");
    // printf("The value from variable(my_num) = %hd\n", my_num);
    // printf("The value from pointer(*your_num) = %hd\n", *your_num);
    // printf("The adress from pointer(your_num) = %p\n\n", your_num);

    // *your_num = 7; // change of my_num value and an assignment operations takes place here

    // printf("//// Example after a change: \n");
    // printf("2 The value from variable(my_num) = %hd\n", my_num);
    // printf("2 The value from pointer(*your_num) = %hd\n", *your_num);
    // printf("2 The adress from pointer(your_num) = %p\n\n", your_num);
/// the examples show us that adress of cell stays the same, we can change value in that cell using *ptr
    

    // int stan_num = 19;
    // int *stan_ptr, *pre_ptr;

    // stan_ptr = &stan_num; // assign to stan_ptr adress of stan_num, 
    // pre_ptr = stan_ptr; // assign to pre_ptr adress of stan_ptr which refers to adress of stan_num

    // printf("//// Example3: \n");
    // printf("3 The value from variable(stan_num) = %d\n", stan_num);
    // printf("3 The adress from pointer(stan_ptr) = %p\n", stan_ptr);
    // printf("3 The adress from pointer(pre_ptr) = %p\n", pre_ptr);
    // printf("3 The value from pointer(*stan_ptr) = %d\n", *stan_ptr);
    // printf("3 The value from pointer(*pre_ptr) = %d\n\n", *pre_ptr);

    // *stan_ptr = 22;
    // printf("4 The value from variable(stan_num) = %d\n", stan_num); // as we changed the value by means of *stan_ptr it = 22
    // printf("4 The adress from variable(stan_num) = %p\n\n", &stan_num); // stays the same 


    // *pre_ptr = 13;
    // printf("5 The value from variable(stan_num) = %d\n", stan_num); // as we changed the value by means of *pre_ptr it = 13
    // printf("5 The adress from variable(stan_num) = %p\n", &stan_num); // stays the same
/// we can change the value using *pointer = x;


    int newr = 777;
    int *firs;
    char *secd;

    firs = &newr;
    secd = (char *)firs; // there was:  secd = firs;  the program works in the same way -> 769
    //// Type conversion should be performed when the types are different 

    printf("The value from variable(newr) before = %d\n\n", newr); 
    /* int has 4 bytes(cells) and char - 1; initially the number 777 is represented in bytes like this 9 * 256^0 + 
    + 3 * 256^1 + 0 * 256^2 + 0 * 256^3 == 777 
    and when we using CHAR secd assign to newr 1 it is meant that in the first cell is put 1 ->
    __1__  * 256^0 + 3 * 256^1 + 0 * 256^2 + 0 * 256^3 == 769 */
    
    *secd = 1;
    printf("The value from variable(newr) after = %d\n\n", newr);

    /*if we need assign to pointer another one with other type we have to convert the types to a single type 
    example:
    int some = 120;
    int *myptr = &some;
    char *newptr;
||  newptr = (char *)myptr
    *newptr = 99;          */

    
    // in this case type conversion should not be performed
    int initl = 25;
    int *thisp = &initl;
    short *nbv;
    void *p;

    p = thisp;
    nbv = p;

    //printf("the adress = %d\n", *p);  you must not use void ptrs for working with cells only with adresses
    printf("the adress = %p\n", p);
    printf("the value = %d\n", *nbv);

    *nbv = 36;

    printf("the value = %d\n", *nbv);



    
    return 0;
}
