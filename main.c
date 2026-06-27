#include <stdio.h>
#include <math.h>

int main(void) {
    
    // short pass_code = 121;
    // short taken_code;
    // int buf;

    // do {
    //     printf("Enter the pass code: ");
    //     if(scanf("%hd", &taken_code) != 1) return 0;

    //     while ((buf = getchar()) != '\n' && buf != EOF)
    //     { }
        
    // } while (taken_code != pass_code);
    // printf("Access allowed ->");


    // short total_boxes = 3;
    // short total_files = 4;

    // for (short i = 0; i < total_boxes; i++)
    // {
    //     printf("///Box %hd\n", i+1);
    //     for (short j = 0; j < total_files; j++)
    //     {
    //         printf("File %hd\n", j+1);
    //     }
    //     printf("\n");
    // }
    


    int summa = 0;
    short i_end = 7;
    short j_end = 5;
    short k_end = 4;

    for (short i = -3; i <= i_end; i++)
    {
        for (short j = 1; j <= j_end; j++)
        {
            for (short k = 2; k <= k_end; k++)
            {
                summa += (i + j - k) * (i + j - k);
            }
            
        }
        
    }
    
    printf("%d\n", summa);
    return 0;
}
