#include <stdio.h>
#include <string.h>

int main() {

    short a = 5;
    int b = -16;
    float c = 1.6;
    double d = 12.5;

// При операціях у нас операнди приводяться до загального типу, тому тут а стає із типу шорт в тип інт Це - ПОВИШЕННЯ ТИПУ.
    int res1 = 10 + a;
    short res2 = 20 - b; // b уже є типом інт, і тут після операції у нас відбувається ПОНИЖЕННЯ ТИПУ, при цьому можуть бути витоки данних  Тому краще приводити змінні до загальних типів, щоб не було витоку.
    float res3 = c - 1.6; // в нецілих числах є погрішність, треба її врахоувати. запусти код і перевір, що res3 != 0
    double res4 = d * 2; // upgrade of data type 
    //printf("%d\n%hd\n%.16f\n%.16f\n", res1, res2, res3, res4);

    // Division
    printf("\n");
    short rel1 = 9 / 2; // When dividing two integers, the result will also be an integer 
    int rel2 = -7 / 2;
    float rel3 = b / a ; // downgrade of data type
    double rel4 = d / c; // when having at least one double or float, the result will be double
    //printf("%d\n%d\n%d\n%f\n", rel1, rel2, rel3, rel4);


    int x = -5;
    int y = 10; 
// When we have two integers and what to devide them, we need make them all the same like (double)x/(Double)y
    double result = (double)x / (double)y;
    //printf("%f\n", result);
    
    
    // Triangle area
    float height, q;

    int count = scanf("%f %f", &height, &q);

    if (count != 2)
    {
        printf("Error");
        return 0;
    }
    float square_of_triangle = height * q / 2.0;
    printf("The area: %.2f\n", square_of_triangle);
    
    
    return 0;
}