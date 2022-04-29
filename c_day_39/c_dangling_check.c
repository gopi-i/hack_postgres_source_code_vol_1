#include<stdio.h>

int* add(int a, int b);

int main() {

	int a=10, b=10, *res;
    
    res = add(a,b);
    
    return 0;
}

int* add(int a, int b) {

	int sum = a + b;
    
    return &sum;
}
