#include <stdio.h>
#include <string.h>

struct Somethit
{
    float width, height;
};

void culc(struct Somethit *obj);

int main() {

    struct Somethit rectangle = {9, 12};
    culc(&rectangle);
    //float area_of_rect = area(12, 16);
    //printf("Area of rect: %.0f\n", area_of_rect);
    return 0;
}

void culc(struct Somethit *obj){
    float result = obj->width * obj->height;
    printf("Area: %.0f\n", result);

}

