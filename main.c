#include <stdio.h>
#include <math.h>

int main(void) {

    double a, b, c;
    double D, x1, x2;

    printf("Enter the values for a, b and c:\n");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3)
    {
        printf("Enter correct values\n");
        return 0;
    }
    
    D = b * b - 4 * a * c;
    printf("The discriminant = %.2lf\n", D);

    if (D < 0)
    {
        printf("The discriminant is less than 0, therefore there is no x's\n");
        return 0;
    }
    
    D = sqrt(D); // it dives square of num -> 25 = 5; 16 = 4;

    x1 = (-b + D) / 2 * a;
    x2 = (-b - D) / 2 * a;
    printf("X1 = %.2lf\nX2 = %.2lf\n", x1, x2);

    return 0;
}