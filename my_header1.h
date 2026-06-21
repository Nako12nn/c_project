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

#endif /* MY_HEADER_H */