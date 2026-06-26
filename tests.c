#include <stdio.h>
#include <time.h>

int main(void){

    clock_t start = clock();

    short item;
    printf("1 C\n"
           "2 Python\n"
            "3 Java\n"
            "4 Rust\n"
        );

    if ((scanf("%hd", &item)) != 1)
    {
        printf("Error\n");
        return 0;
    };
    switch (item)
    {
    case 1:
        printf("Learn C\n");
        break;
    case 2:
        printf("Learn Python\n"); // break переходить до іншого оператора 
                                  // return просто завершує роботу цеї функції 
        break;

    case 3:
        printf("Learn Java\n");
        break;        
    
    case 4:
        printf("Learn Rust\n");
        break;        

    default:
        printf("Exit\n");
        break;
    }

    clock_t end = clock();
    double time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Time taken: %lf\n", time_taken);
    
    return 0;
}