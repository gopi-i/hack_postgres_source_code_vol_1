#include <stdio.h>

int add(int a, int b);

int main() {

		int (*ptr)(int, int) = &add;
        
        int result = (*ptr)(10,20);
        
        printf("%d\n", result);
        
	
}

int add(int a, int b) {

	return (a+b);
}
