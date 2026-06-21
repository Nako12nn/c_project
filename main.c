#include <stdio.h>
#include <string.h>

struct Car {
    float speed;
    float weight;
    char model[16];
};

int main() {
    
    struct Car mercedes_benz;
    mercedes_benz.speed = 250.2f;
    mercedes_benz.weight = 1700.0f;
    strcpy(mercedes_benz.model, "Mercedes s500");

    struct Car bmw;
    bmw.speed = 320.2f;
    bmw.weight = 2000.0f;
    strcpy(bmw.model, "BMW M6");

    printf("%s has speed %.0fkm/h and weight %.0fkg\n", mercedes_benz.model, mercedes_benz.speed, mercedes_benz.weight);
    printf("\n");
    printf("%s has speed %.0fkm/h and weight %.0fkg\n", bmw.model, bmw.speed, bmw.weight);   
    
    return 0;
}
