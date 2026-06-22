#include <stdio.h>

int main() {
    float fahr;
    
    for (float fahr = 100; fahr > 0; fahr -= 2)
    {
        printf("%5.1f %7.1f\n", fahr, (5.0/9.0) * (fahr-32));
    }
    return 0;
}