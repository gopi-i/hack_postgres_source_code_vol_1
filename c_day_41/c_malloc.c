#include<stdio.h>

// malloc function prototype is available in `stdlib.h`
#include<stdlib.h>

int main() {

	/*
    * Input parameter takes only `unsigned int` type values.
    * In other words, `size_t` type values. 
    *`size_t` is typedef of `unsigned int` in `stdlib.h` file.
    * In this case, it returns a memory block of size equals to 
    * 8 bytes and in contiguous manner.
    * If there is no sufficient memory in heap, it just returns NULL
    * pointer.
    * `malloc` returs a `void` pointer pointing to first byte of 
    * 8 bytes. 
    * As we want use this 8 bytes of memory to store int type data, 
    * we typecast `void` pointer to `int` pointer.
    * Now, *ptr is the pointer which is pointing to first byte of 
    * 8 bytes in heap.
    */
	int *ptr = (int*) malloc(2*sizeof(int));
    
    // Using heap memory
    *ptr = 10;
    *(ptr+1) = 20;
    
    printf("Value in first 4 bytes - %d\n", *ptr);
    printf("Value in next 4 bytes - %d", *(ptr+1));
    
    return 0;
    
}
