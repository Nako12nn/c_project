#include <stdio.h>

int main(void) { 
    
// myptr -> &d
// *myptr -> d

    // int d = 16;
    // int *myptr = &d; // the same type as up. initialization!
    // //myptr = &d; make to the myptr adress of d. insted of this you can write: char *myptr = &d;
    // printf("myptr = %p *myptr = %d d = %d\n", myptr, *myptr, d); 
    // *myptr = 22341;
    // printf("myptr = %p *myptr = %d d = %d\n", myptr, *myptr, d); 

    // int argument = 7;
    // int *first_ptr, *second_ptr;

    // first_ptr = &argument;
    // second_ptr = first_ptr;

    // printf("Arg = %d \n*first_ptr = %d \n*second_ptr = %d\n", argument, *first_ptr, *second_ptr);

    // *first_ptr = 9;
    // printf("%d")


    int x = 11;
    int *ptr = &x;
    printf("x = %d\n*ptr = %d\nptr = %p\n", x, *ptr, ptr);

    int temp = 0;
    int *ptr2 = &temp;

    if (ptr2 != NULL) *ptr2 = 12;


    printf("*ptr2 = %d\n&ptr= %p\n", *ptr2, ptr2);



    return 0;
}
