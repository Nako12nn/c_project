#include <stdio.h>
#include <stdlib.h> // lib for rand 
#include <time.h>

int main(void) {

    // time_t t = time(NULL);
    srand(time(NULL));
    printf("Before: %ld\n\n", time(NULL)); // time(NULL) shows current time on the cmpt

    unsigned long my_time = time(NULL);

    unsigned long sec = my_time % 60;
    unsigned long min = (my_time / 60) % 60;
    unsigned long hour = my_time / (3600) ;

    printf("%02lu:%02lu:%02lu\n\n", hour, min, sec);

    int guess1 = rand() % 10 + 1;
    int guess2 = rand() % 10;
    unsigned int guess3 = rand() + rand();
    printf("%d\n%d\n%u\n", guess1, guess2, guess3);

    double range_float = (double) rand() / (double) rand();
    printf("%.10f\n", range_float);

    return 0;
}