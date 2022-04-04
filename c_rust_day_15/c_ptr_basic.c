#include<stdio.h>

int
main () {

	// c-main-line-1
	int number = 10;
    
    // c-main-line-2
    int *ptr_to_number = &number;
    
    // c-main-line-3
    printf("C placed %d in a memory location with address %p", number, ptr_to_number);
    
    return 0;
    
}
