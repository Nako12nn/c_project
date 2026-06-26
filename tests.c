#include <stdio.h>
#include <time.h>

int main(void){

    clock_t start = clock();

    // functions 

    clock_t end = clock();
    double time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Time taken: %lf\n", time_taken);
    
    return 0;
}