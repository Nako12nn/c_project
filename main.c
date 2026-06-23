#include <stdio.h>
#include <string.h>

int main() {
    // even number or odd number 
    int number1;
    int count = scanf("%d", &number1);

    if (count != 1) return 0;

    if ((number1 % 2) == 0) printf("number %d is even\n", number1);
    else printf("number %d is odd\n", number1);
    
    
    return 0;
}