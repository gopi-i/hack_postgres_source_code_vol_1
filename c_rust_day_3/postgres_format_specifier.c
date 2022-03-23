#include<stdio.h>

int
main() {

    // Integer format specifier
    short int  si = 2; // 2 byte int
    printf("%hd\n", si);

    int i = 4; // 4 byte int
    printf ("%d\n", i);

    long int li = 8; // 8 byte int
    printf("%ld\n", li);

    // Float format specifier
    float f = 4; // 4 byte fractional number
    printf("%f\n", f); 
    
    double d = 8; // 8 byter fractional number
    printf("%lf\n", d);

    //Character format specifier
    char c = '1'; // 1 byte character
    printf("%c\n", c);

    // String format specifier
    // There is no type `string` in C.
    // But, there is format specifer for as we have for primitive types.
    char s[333] = {'1', '1'}; // Represents the string '11' which is char array.
    printf("%s\n", s);

    return 0;
}
