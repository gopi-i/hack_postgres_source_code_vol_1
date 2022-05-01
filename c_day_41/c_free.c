#include<stdio.h>
#include<stdlib.h>

int main() {


	// heap memory allocation to store 2 integers
	int *ptr = (int*) malloc(2*sizeof(int));
    
    // Using heap memory
    *ptr = 10;
    *(ptr+1) = 20;
    
    printf("Value in first 4 bytes - %d\n", *ptr);
    printf("Value in next 4 bytes - %d\n", *(ptr+1));
    
    // reallocating memory
    int *rptr = (int *) realloc(ptr, 3*sizeof(int));
    
    *(rptr+2) = 30;
    printf("Value in first 4 bytes - %d\n", *rptr);
    printf("Value in next 4 bytes - %d\n", *(rptr+1));
    printf("Value in next 4 bytes - %d\n", *(rptr+2));
    
    // Check data in old memory block once again after realloc
    printf("Value in first 4 bytes - %d\n", *ptr);
    printf("Value in next 4 bytes - %d\n", *(ptr+1));
    
    // Cleaning up memory blocks
    free(rptr);
    
    
    return 0;
    
}
