#include<stdio.h>

int
main() {

    /*
    * Arrays are used to store "fixed length" values of "same type".
    * Values in array are stored in contiguous memory locations in RAM
    * Array values are retrieved by index notation.
    */
    int _binary[2] = {1,0}; 
    printf("%d\n", _binary[0]); // index 0 is to access first element
    printf("%d\n", _binary[1]); // index 1 is to access second element
    
    return 0;
    
}
