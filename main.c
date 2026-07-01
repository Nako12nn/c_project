#include <stdio.h>

int main(void) { 
    
//     char str[] = {'N', 'a', 'k', 'o', 'n', 'e', 'c', 'h', 'n', 'y', 'i', '\0'};// \0 shows the end of string!
//     char s[] = "Maksym Nakonechnyi";
//     char buffer[32] = "Hello, guys";

//     char b[] = "The" "re"
//             " we go";

//     char ni[] = "how are \
// you";

    // const char *ptr_s = "Nakonechnyi"; //read-only, it is placed in unchangable memory area
    // char s[] = "Nakonechnyi"; // can change

    // //ptr_s[1] = 'n'; error
    // s[1] = 'A';



    char d[] = "You like program in \"C\" Language?";
    puts(d);

    char string[] = "\x61 \x4f";
    puts(string);

    return 0;
}