#include <stdio.h>
#define PUBLIC_KEY_E 65537

int rsa_alg(unsigned long q, unsigned long p){
    unsigned long long n = q * p;
    unsigned long long z = (q - 1) * (p - 1);
    unsigned long long d = 0;

    if (z <= 1) return 0;
    //unsigned long some = (PUBLIC_KEY_E * 2) % z;

    for (int i = z; i <= n * z; i++)
    {
        unsigned long some = (PUBLIC_KEY_E * i) % z;                    
        printf("for loop: %d\n", i);
        if (some == 1) {
            printf("some == 1 now: %lu\nThe i = %d\n", some, i);
            printf("if: %d\n", i);
            d += i;
            break;
        }
        
    }
    
    


    //printf("Time = %lu\n", time);
    printf("n = %llu \nz = %llu \ne = %d \nd = %llu", n, z, PUBLIC_KEY_E, d);
    return 0;
}

int main(void) { 
    
    //char x; // We declare a change, and at this moment a 1-byte (8 bit) cell is allocated
    //int het = 60500; //in 4 cells (4 bytes) is placed that variable
    // A pointer itself stores the address of a variable ptr -> adrress

    // short num1;
    // short *n1_adress = &num1;
    // printf("Before:   adress(n1_adress) = %p\n", n1_adress);

    // if (scanf("%hd", &num1) != 1) return 0;
    // printf("After:    adress(n1_adress) = %p\n",n1_adress);
    
    // printf("Adress num1:  %lu\n", (unsigned long)&num1);

    printf("Enter q and p secret values: \n");
    
    unsigned long a;
    unsigned long b;
    if (scanf("%lu %lu", &a, &b) == 2) rsa_alg(a, b);
    printf("\n");
    

    return 0;
}
