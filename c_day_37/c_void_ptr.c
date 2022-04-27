#include<stdio.h>

int main() {

	int a = 10;
    
    void *ptr = &a;
    
    // type cast ptr to int * by (int *)ptr
    // dereference typecasted pointer using *
    printf("%d", *(int *)ptr);
    
    return 0;
    
}
