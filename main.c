#define CLANG

#if defined(CLANG)
#   include <stdio.h>
#else 
#   include <iostream> 
#endif


int main(void) {

    short x = 3;
#ifdef CLANG
    printf("%hd\n", x);
#else
    std::cout << x << std::endl;
#endif
    return 0;
}
