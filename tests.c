#include <stdio.h>
int main(void){

    long d = 500743;
    long z = 250738;
    int e = 65537;
    // unsigned long some = d * e;
    // unsigned long fil = some % z;

    if (((e * d) % z) == 1)
    {   
        printf("Finally... \n");
        //printf("Finally = %lu\n", fil);
    }
    else
    {
        printf("Error...\n");
        //printf("Error = %lu\n", fil);
    }
        
    return 0;
}