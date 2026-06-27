#include <stdio.h>

int main(void) {

    short n;
    unsigned int s = 0;

    printf("Enter amount of times: ");
    if (scanf("%hd", &n) != 1)
    {
        printf("Error\n");
        return 0;
    }
    
    short i = 0;
    while (++i <= n && i <= 20) // firstly --n then n > 0
        s += (i * i);
    
    printf("The sum: %u\n", s);

    return 0;
}
