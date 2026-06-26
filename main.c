#include <stdio.h>

int main(void) {

    // ~ No every bit becomes other:   0 -> 1;   1 -> 0;
    unsigned char x = 120; // 0111 1000 - 120  
    unsigned char y = ~x;  // 1000 0111 - 135
    printf("%d\n%d\n", x, y);

    // & And like multiplying: 0 and 0 -> 0; 0 and 1 -> 0; 1 and 1 -> 1;
    unsigned char q = 7; // 0000 0111
    unsigned char w = 6; // 0000 0110 
    short res = q & w;
    printf("%hd\n", res);

    // OR | -> like adding: 0 1 -> 1; 1 1 -> 1; 0 0 -> 0;
    short c = 10; // 0000 1010
    short v = 5; //  0000 0101
    c |= v;
    printf("%hd\n", c);

    // XOR ^ it is like "do they distinguish?" 0 0 -> (No) 0; 0 1 -> (Yep) 1; 1 1 -> 0;
    short t = 7; // 0000 0111
    short i = 3; // 0000 0011
    t ^= i; //   0000 0100
    printf("%hd\n", t);
    t ^= i; //   0000 0111 
    printf("%hd\n", t);
    // Prioritite: ~  &  XOR  |

    short f = 60; // 0011 1100  it is for unsigned numbers
    f >>= 1; // 0001 1110 -> 30 It devides by 2 when we go to the left
    printf("%hd\n", f);

    f >>= 2; // 0000 0111 -> 7 it devided by 4, cause we 2 times take it to the left  
    printf("%hd\n", f);

    f <<= 4; // 0111 0000 -> 112 it multiplied by 2^4
    printf("%hd\n", f);

    signed char r = -128; // 1000 0000
    r <<= 1; // 0000 0000
    printf("%d\n", r);

    r = -128; // 1000 0000
    r >>= 1; //  1100 0000  the main bit stays the same, it shows us the sign of the number 
    printf("%d\n", r);






    return 0;
}