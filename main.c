#include <stdio.h>

int main() {
// even number or odd number 
    // int number1;
    // scanf("%d", &number1); 
    // int range = 10;
    // int res = number1 % range;
    // printf("result = %d\n", res);
//N2 ->    
    //if ((number1 % 2) == 0) printf("number %d is even\n", number1);
    //else printf("number %d is odd\n", number1);
    // int res = number1 % 10;
    // if (res >= 0 && res <=9 && number1 <= 10) printf("%d\n", number1);
    // printf("%d\n", res);

    // unsigned int time = 7*3600 + 20*60 + 30;
    // unsigned int sec = time % 60;
    // unsigned int min = (time / 60)%60;
    // unsigned int hours = time / 3600;
    // printf("%02d:%02d:%02d\n", hours, min, sec);

    // short a = 9;
    // short b = 19;
    // short c = a++; // firstly c = a, after it a++
    // short d = ++b; // firstly ++b, after it d = b
    // printf("%hd - %hd\n%hd - %hd\n", a, b, c, d);
    // short e = 5 * a++;// firstly 5 * 10, than a++
    // short f = 4 * --b;//firstly --b, after 4 * 19
    // printf("%hd - %hd\n", e, f);
    // printf("%hd\n", a);

    short some = 4;
    short riddle = some * some + 2 * (10 + some);
    some--;
    printf("%hd\n", riddle);
    //37
    
    return 0;
}