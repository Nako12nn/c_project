#include <stdio.h>
#include <string.h>

int main() {

    // FILE* file = fopen("test.txt", "a");
    // fprintf(file, "\n The second line or bar ");
    // fclose(file);
    
    // FILE *file2 = fopen("test.txt", "r"); 
    // char lay[200]; 
    // fgets(lay, 200, file2);
    // printf("%s", lay);
    // fgets(lay, 200, file2);
    // printf("%s", lay);
    // fclose(file2);


    FILE* file = fopen("test.txt", "r");

    if (file == NULL)
    {
        printf("Error, it seeems that this file does not exist.\n");
        return 1;
    }
    
    int the_info;
    
    while ((the_info = fgetc(file)) != EOF)
    {
        putchar(the_info);
    }
    
   fclose(file);

    return 0;
}