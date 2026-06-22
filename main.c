#include <stdio.h>
#include <string.h>


void show_num(char x){
    printf("%c \n", x);
}

int main() {
    
    // char arr1 [] = "This file is mine ";
    // for (int i = 0; i < strlen(arr1); i++)
    // {
    //     putchar(arr1[i]);
    // }
    // printf("\n");
    // printf("%s", arr1);

    // char new [] = getchar();
    // for (int i = 0; i < strlen(new); i++)
    // {
    //     putchar(new[i]);
    // }
    // printf("Enter text: ");
    // int symbol;
    // while (symbol != '\n')
    // {
    //     symbol = getchar();
    //     putchar(symbol);
    // }
       show_num(65);

    int x1 = getchar();

    printf("This: %d %c\n", x1, x1);


    //double fex;
    //printf("The size of: %lu\n", sizeof(char));


    return 0;
}