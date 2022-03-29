#include<stdio.h>

int
main() {
	
    /*
    * Strings are not primitive types in C.
    * These are character arrays that ends with null character \0
    * Size of string is defined considering null character.
    * Strings are initialized in different types.
    * Characters in string can be retrieved using index.
    * Strings use format specifies %s.
    */
    
    // Array type initialization
    char _string_t1[4] = {'s', 't', 'r', '\0'};
    char _string_t2[]  = {'s', 't', 'r', '\0'};
    
    // String type initialization with quotes
    // In this type, null character is automatically added by C internally
    char _string_t3[4] = "str";
    char _string_t4[] = "str";
    
    printf ("%s\n", _string_t1);
    printf("%c\n", _string_t1[0]); // character retreival from string
    
    
    return 0;
    
}
