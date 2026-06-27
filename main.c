#include <stdio.h>

int main(void) {
    
    // float t, s;
    // printf("Enter a num ");
    // while (scanf("%f", &t) == 1) {
        
    //     if (t < 0) return 0; or break;
    //     s += t;
    // }
    // printf("%.2f\n", s);



    // int q = 0;
    // int w = 0;
    // printf("Enter a num %d", q);
    // while (scanf("%d", &w) == 1 && w != 0) {
        
    //     if (w % 2 == 0)continue;
        
    //     q += w;
    // }
    // printf("%d\n", q);



    
    // for (int i = 0; i <= 100; i++) {
    //     if (i % 3 ==0 && i % 5 ==0) printf("%3d\n", i);
    // }



    int sum = 0;

    for (int i = 1; i <= 10; ++i)
    {
        for (int j = 7; j >= 5; --j)
        {
            if ((i - j) > 0) goto exit_sum;

            sum += (i - j);
        }
        
    }
    exit_sum: printf("The sum = %d\n", sum); 
    
    

    return 0;
}
