#include <stdio.h>

int main(void) { 
//output
    char str[] = {"Im okey with it"};
    printf("str = %s\n", "that is it");
    puts(str); // does \n on its own 
    puts(str);


//input
    char my_str[10];
    //fgets(my_str, sizeof(my_str), stdin); // buffer, how many item it reads (n-1, cause in the last cell - \0), where we read from
    
    //scanf("%9s", my_str); // %9s - max 9 elements to read from input
    //puts(my_str);
    // scanf - no, gets - no!

    int max_read = sizeof(my_str), i = 0;
    char *ptr_max = my_str, ch;

    while ((ch = getchar()) != '\n' && ch != EOF && i < max_read) 
        ptr_max[i++] = ch;

    ptr_max[i] = '\0';

    puts(my_str);
    return 0;
}