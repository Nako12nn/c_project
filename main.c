#include <stdio.h>

int main() {

    short x = 4;
    printf("%hd\n", x);

    x = x + 1;
    printf("%hd\n", x);
    x += 1;
    printf("%hd\n", x);
    return 0;
}