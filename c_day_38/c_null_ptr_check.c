#include <stdio.h>

int main() {

	int *p = NULL;
    int a = 10;
    
    if (p == NULL) {
    	p = &a;
    }
    
    printf("%d at %p", *p, p);
    return 0;
    
}
