#include <stdio.h>
#include <math.h>

int main(void) {

    float x = -6.5, y = 4.6;
    float max_num = (x > y) ? x : y; // Ternary operation:  expression ? expression : expression
    printf("The max: %.2f\n", max_num);
    float res = (x < y) ? fabs(x) : fabs(y); // returns the module 
    printf("%04.2f\n", res);
    short t = 2;
    printf("%hd is %s number\n", t, (t % 2 == 0) ? "even" : "odd"); // You can use ternar operation as an argument in the functions 
    
    short v = 9, s = 8, g = 7;
    short max = (v > s) ? ((v > g) ? v : g) : ((s > g) ? s : g); 
    
    printf("Max number: %hd\n", max);

    return 0;
}