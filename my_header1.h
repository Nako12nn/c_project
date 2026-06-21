#ifndef MY_HEADER_H
#define MY_HEADER_H
#include <stdio.h>

void res_info(float num){
    printf("The result: %.1f\n", num);
}

void add(float a, float b){
    float result = a + b;
    res_info(result);
}

void string(char array[]){
    printf("%s\n", array);
}

int mult(int a, int b){
    int x = a * b;
    return x;
}

#endif /* MY_HEADER_H */