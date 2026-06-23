#include <stdio.h>
#include <string.h>

int main() {
    
    // long double x;
    // unsigned short y; 
    // printf("x before: %Lf\n", x);
    // printf("y before: %d\n", y);
    // printf("\n");
    // int count = scanf("%Lg\n %hd", &x, &y);
    // printf("x after: %.0Lf\ny after: %d\nthe amount of scanned signs: %d\n", x, y, count);

    float price = 0;
    float weight = 0;

    int res = scanf("%*d; %f; %f", &price, &weight);
    printf("Price - %.2f\nWeight - %.2f\n", price, weight);

    return 0;
}