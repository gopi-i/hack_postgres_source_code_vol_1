#include <stdio.h>

// Create own type out of existing type
typedef int my_int;

// After above line, we can use my_int to initialize integer varaibles

int main() {

	my_int a = 10;
    
    printf("%d", a);
    
}
